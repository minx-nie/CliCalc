#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

double calc(double a, double b, char op, int *ok)
{
    *ok = 1;

    switch (op)
    {
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/':
            if (b == 0)
            {
                printf("Error: divide by zero\n");
                *ok = 0;
                return 0;
            }
            return a / b;
        default:
            printf("Error: invalid operator\n");
            *ok = 0;
            return 0;
    }
}

int precedence(char op) {
    if (op == '+' || op == '-') return 1;
    if (op == '*' || op == '/') return 2;
    return 0; 
}

void infix_to_postfix(const char *infix, char *postfix)
{
    char stack[256];
    int top = -1, j = 0;

    for (int i = 0; infix[i] != '\0'; i++)
    {
        if (isspace(infix[i])) continue;

        if (isdigit(infix[i]) || infix[i] == '.')
        {
            while (isdigit(infix[i]) || infix[i] == '.')
            {
                postfix[j++] = infix[i++];
            }
            postfix[j++] = ' ';
            i--;
        }
        else if (infix[i] == '(')
        {
            stack[++top] = infix[i];
        }
        else if (infix[i] == ')')
        {
            while (top >= 0 && stack[top] != '(')
            {
                postfix[j++] = stack[top--];
                postfix[j++] = ' ';
            }
            top--; 
        }
        else
        {
            while (top >= 0 && precedence(stack[top]) >= precedence(infix[i]))
            {
                postfix[j++] = stack[top--];
                postfix[j++] = ' ';
            }
            stack[++top] = infix[i];
        }
    }

    while (top >= 0)
    {
        postfix[j++] = stack[top--];
        postfix[j++] = ' ';
    }
    postfix[j] = '\0';
}

double evaluate_postfix(char *postfix, int *ok)
{
    double stack[256];
    int top = -1;
    *ok = 1;

    char *token = strtok((char *)postfix, " ");
    while (token != NULL)
    {
        if (isdigit(token[0]) || (token[0] == '-' && isdigit(token[1])))
        {
            stack[++top] = atof(token);
        }
        else
        {
            if (top < 1)
            {
                printf("Error: invalid expression\n");
                *ok = 0;
                return 0;
            }
            double v2 = stack[top--];
            double v1 = stack[top--];
            
            stack[++top] = calc(v1, v2, token[0], ok);
            if (!*ok) return 0;
        }
        token = strtok(NULL, " ");
    }
    return stack[top];
}

int main()
{
    char line[256];
    char postfix[512];
    int ok;

    printf("Enter an expression (or 'exit' to quit): ");
    while (fgets(line, sizeof(line), stdin))
    {
        if (line[0] == '\n') break;
        line[strcspn(line, "\n")] = '\0';
        infix_to_postfix(line, postfix);
        double result = evaluate_postfix(postfix, &ok);
        if (ok)
        {
            printf("Result: %.2lf\n", result);
        }
        printf("Enter an expression (or 'exit' to quit): ");
    }
    return 0;
}
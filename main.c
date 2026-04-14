#include <stdio.h>

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

double eval_3(double a, double b, double c,
              char op1, char op2, int *ok)
{
    double t;

    if ((op1 == '*' || op1 == '/') && (op2 == '*' || op2 == '/'))
    {
        t = calc(a, b, op1, ok);
        if (!*ok) return 0;
        return calc(t, c, op2, ok);
    }

    if (op2 == '*' || op2 == '/')
    {
        t = calc(b, c, op2, ok);
        if (!*ok) return 0;
        return calc(a, t, op1, ok);
    }

    t = calc(a, b, op1, ok);
    if (!*ok) return 0;
    return calc(t, c, op2, ok);
}

int main()
{
    double a, b, c, result;
    char op1, op2;
    int ok;
    char line[256];

    printf("Nhap bieu thuc: ");

 
    if (fgets(line, sizeof(line), stdin))
    {
        int count = sscanf(line, "%lf %c %lf %c %lf", &a, &op1, &b, &op2, &c);

        if (count == 5)
        {
            result = eval_3(a, b, c, op1, op2, &ok);
            if (ok)
                printf("Result: %.2lf\n", result);
        }
        else if (count == 3) 
        {
            result = calc(a, b, op1, &ok);
            if (ok)
                printf("Result: %.2lf\n", result);
        }
        else printf("Invalid input format\n");
    }

    return 0;
}
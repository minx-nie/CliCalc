#include <stdio.h>

int main() {
    double a, b, c;
    char op1, op2;
    double result;

    printf("Nhap bieu thuc: ");
    scanf("%lf %c %lf %c %lf", &a, &op1, &b, &op2, &c);

    if ((op1 == '*' || op1 == '/') && (op2 == '*' || op2 == '/'))
    {
        double temp;

        if (op1 == '*') temp = a * b;
        else
        {
            if (b != 0) temp = a / b;
            else
            {
                printf("Khong chia duoc cho 0\n");
                return 0;
            }
        }

        if (op2 == '*') result = temp * c;
        else
        {
            if (c != 0) result = temp / c;
            else
            {
                printf("Khong chia duoc cho 0\n");
                return 0;
            }
        }
    }

    else
    {
        if ((op1 == '+' || op1 == '-') && (op2 == '+' || op2 == '-'))
        {
            if (op1 == '+') result = a + b;
            else result = a - b;

            if (op2 == '+') result += c;
            else result -= c;
        }
        
        else if (op1 == '*' || op1 == '/')
        {
            if (op1 == '*') result = a * b;
            else
            {
                if (b != 0) result = a / b;
                else
                {
                    printf("Khong chia duoc cho 0\n");
                    return 0;
                }
            }

            if (op2 == '+') result += c;
            else if (op2 == '-') result -= c;
            else 
            {
                printf("Phep toan khong hop le\n");
                return 0;
            }
        }

        else
        {
            if (op2 == '*') result = b * c;
            else
            {
                if (c != 0) result = b / c;
                else
                {
                    printf("Khong chia duoc cho 0\n");
                    return 0;
                }
            }

            if (op1 == '+') result += a;
            else if (op1 == '-') result = a - result;
            else 
            {
                printf("Phep toan khong hop le\n");
                return 0;
            }
        }
    }
    printf("Ket qua: %.2lf\n", result);
    return 0;
}
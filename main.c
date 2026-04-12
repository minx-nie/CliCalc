#include <stdio.h>

int main()
{
    int choice;
    double a, b, result;

    do
    {
        printf("\n===== Calculator =====\n");
        printf("1. Addition (+)\n");
        printf("2. Subtraction (-)\n");
        printf("3. Multiplication (*)\n");
        printf("4. Division (/)\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice >=1 && choice <= 4)
        {
            printf("Enter two numbers: ");
            scanf("%lf %lf", &a, &b);
        }

        switch (choice)
        {
            case 1:
                result = a + b;
                printf("Result: %.2lf\n", result);
                break;

            case 2:
                result = a - b;
                printf("Result: %.2lf\n", result);
                break;
            
            case 3:
                result = a * b;
                printf("Result: %.2lf\n", result);
                break;

            case 4:
                if (b != 0)
                {
                    printf("Result: %.2lf\n", a / b);
                }
                else
                {
                    printf("Error: Division by zero is not allowed.\n");
                }
                break;
            
            case 5:
                printf("Exiting the calculator. Goodbye!\n");
                break;

            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }
    } while (choice != 5);

    return 0;
}


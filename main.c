#include <stdio.h>

int main() {
    double a, b;
    char op;

    printf("Nhap bieu thuc: ");
    scanf("%lf %c %lf", &a, &op, &b);

    if (op == '+') printf("Result: %.2lf\n", a + b);
    else if (op == '-') printf("Result: %.2lf\n", a - b);
    else if (op == '*') printf("Result: %.2lf\n", a * b);
    else if (op == '/') {
        if (b != 0) printf("Result: %.2lf\n", a / b);
        else printf("Khong chia duoc cho 0\n");
    }
    else printf("Phep toan khong hop le\n");

    return 0;
}
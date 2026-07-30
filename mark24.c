/* A menu driven program with addition, subtracton,
multiplication and division using switch case */
#include<stdio.h>
int main()
{
    float a, b, res;
    char choice;
    printf("Welcome to calculator\nEnter two numbers: ");
    scanf(" %f %f", &a, &b);
    printf("Now, choose the operation (+, -, *, /) : ");
    scanf(" %c", &choice);
    switch(choice)
    {
        case '+': res = a + b;
        printf("Sum of %.2f and %.2f is %.2f", a, b, res);
        break;

        case '-': res = a - b;
        printf("Difference of %.2f and %.2f is %.2f", a, b, res);
        break;

        case '*': res = a * b;
        printf("Product of %.2f and %.2f is %.2f", a, b, res);
        break;

        case '/': res = a / b;
        printf("Quotient of %.2f and %.2f is %.2f", a, b, res);
        break;

        default:
        printf("Operator not supported\nEnter (+, -, *, /)");
    }
    printf("\n");
    return 0;
}
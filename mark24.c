/* A menu driven program with addition, subtracton,
multiplication and division using switch case */
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,choice;
    printf("\n1. Addition");
    printf("\n2. Subtraction");
    printf("\n3. Multiplication");
    printf("\n4. Division");
    printf("\n5. Exit");
    printf("\n\nEnter your choice: ");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        printf("Enter two numbers: ");
        scanf("%d%d",&a,&b);
        printf("Sum of %d and %d is %d",a,b,a+b);
        break;
        case 2:
        printf("Enter two numbers: ");
        scanf("%d%d",&a,&b);
        printf("Difference of %d and %d is %d",a,b,a-b);
        break;
        case 3:
        printf("Enter two numbers: ");
        scanf("%d%d",&a,&b);
        printf("Product of %d and %d is %d",a,b,a*b);
        break;
        case 4:
        printf("Enter two numbers: ");
        scanf("%d%d",&a,&b);
        printf("Quotient of %d and %d is %d",a,b,a/b);
        break;
        case 5:
        exit(0);
        default:
        printf("Invalid choice");
    }
    printf("\n");
    return 0;
}
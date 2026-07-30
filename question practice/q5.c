// Program to determine the greatest of the 3 numbers input from user
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter your first number: ");
    scanf(" %d", &a);
    printf("Enter your second number: ");
    scanf(" %d", &b);
    printf("Enter your third number: ");
    scanf(" %d", &c);

    if(a > b && a > c)
    {
        printf("%d is the greatest number", a);
    }
    else if(b > c)
    {
        printf("%d is the greatest number", b);
    }
    else
    printf("%d is the greatest number", c);
    return 0;
}
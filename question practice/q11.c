// Program to calculate factorial of a number using loop
#include<stdio.h>
int main()
{
    int n;
    int i;
    int fact = 1;
    printf("Enter a number: ");
    scanf("%d", &n);

    for(i=1; i <= n; i++)
    {
        fact = i * fact;
    }
    printf("The factorial of %d is %d", n, fact);
    return 0;
}
// Function to calculate factorial of a number using loop
#include<stdio.h>
int factorial(int);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Welcome to calculating factorial\n");
    int result=factorial(n);
    printf("The factorial of %d is %d",n,result);
    return 0;
}
int factorial(int n)
{
    int result=1;
    for(int i=1; i<=n; i++)
    {
        result*=i;
    }
    return result;
}

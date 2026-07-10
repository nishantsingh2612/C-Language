// Function to calculate factorial of a number using recursion
#include<stdio.h>
int factorial(int);
int main()
{
    int n;
    printf("Welcome to calculating factorial\n");
    printf("Enter a number: ");
    scanf("%d",&n);
    int result=factorial(n);
    printf("The factorial of %d is %d",n,result);
    return 0;
}
int factorial(int n)
{
    if(n==0) // Base Case
    return 1;
    else
    return n*factorial(n-1); // Recursive Case
}
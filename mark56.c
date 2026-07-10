// Recursive function to calculate sum of first n natural numbers
#include<stdio.h>
int sum(int);
int main()
{
    int n;
    printf("Welcome to calculating the sum of first n natural numbers\n");
    printf("Enter the number n: ");
    scanf("%d",&n);
    int result=sum(n);
    printf("The sum of first %d numbers is %d",n,result);
    return 0;
}
int sum(int n)
{
    if(n==1)
    return 1;
    else
    return n+sum(n-1);
}
//Program to print the sum of first n natural numbers
#include<stdio.h>
int main()
{
    int n,i,s=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    s=s+i;
    printf("Sum of first %d natural numbers is %d",n,s);
}
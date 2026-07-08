/* Program to print first n even natural numbers in
reverse order */
#include<stdio.h>
int main()
{
    int n,i=1;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("%d ", 2*n +2 -2*i);
        i++;
    }
} 
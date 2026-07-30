// Program to print sum of first n odd natural numbers
#include<stdio.h>
int main()
{
    int n;
    int i;
    int s=0;
    printf("Enter a number: ");
    scanf("%d", &n);

    for(i=1; i <= n; i++)
    {
        s = s + 2*i - 1 ;
    }
    printf("The sum of first %d odd numbers is %d", n, s);
    return 0;
}
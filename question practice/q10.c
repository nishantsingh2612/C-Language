// Program to print sum of all odd numbers from 1 to a specific number n
#include<stdio.h>
int main()
{
    int n;
    int i=1;
    int s=0;
    printf("Enter a number: ");
    scanf("%d", &n);

    while(i <= n)
    {
        s = s + i;
        i = i + 2;
    }
    printf("The sum of all odd numbers from 1 to %d is %d", n, s);
    return 0;
}
// Program to calculate sum of digits of an integer
#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf(" %d", &n);

    int copy = n;
    int s = 0;
    while(n > 0)
    {
        s =  s + n % 10;
        n = n / 10;
    }
    printf("The sum of the digits of %d is %d", copy, s);
    return 0;
}
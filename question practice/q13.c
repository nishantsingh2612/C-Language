// Program to reverse the digits of a given number
#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf(" %d", &n);

    int copy = n;
    int reverse = 0;
    while(copy > 0)
    {
        reverse = (reverse * 10) + (copy % 10);
        copy = copy / 10;
    }
    printf("The reverse of %d is %d", n, reverse);
    return 0;
}
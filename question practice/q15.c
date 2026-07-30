// Program to check whether a given number is palindrome or not
#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf(" %d", &num);

    int copy = num;
    int reverse = 0;
    while(copy > 0)
    {
        reverse = (reverse * 10) + (copy % 10);
        copy = copy / 10;
    }
    if(reverse == num)
    {
        printf("The number %d is palindrome", num);
    }
    else
    {
        printf("The number %d is not palindrome", num);
    }
    return 0;
}
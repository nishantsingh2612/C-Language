// Program to check whether a given number is an Armstrong number or not
#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf(" %d", &num);

    int sum = 0;
    int copy = num;
    while(copy > 0)
    {
        int digit = copy % 10;
        sum += digit * digit * digit;
        copy /= 10;
    }
    if(sum == num)
    {
        printf("The number %d is an Armstrong number", num);
    }
    else
    {
        printf("The number %d is not an Armstrong number", num);
    }
    return 0;
}
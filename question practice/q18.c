/* Program to calculate the sum of all numbers entered by user until
the user enters 0 and then print the sum */
#include<stdio.h>
int main()
{
    int num;
    int sum = 0;
    
    do {
        printf("Enter a number: ");
        scanf(" %d", &num);
        sum += num;
    } while (num != 0);

    printf("The sum of the numbers is %d", sum);
    return 0;
}
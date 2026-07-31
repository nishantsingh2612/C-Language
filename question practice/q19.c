/* Program to sum all positive numbers entered by user (skip the
negative numbers) and end the program only if user entered 0 */
#include<stdio.h>
int main()
{
    int num;
    int sum = 0;

    do {
        printf("Enter a number: ");
        scanf(" %d", &num);
        if(num < 0)
        {
            num *= 0;
        }
        sum += num;  
    } while(num != 0);

    printf("The sum of all positive numbers entered is: %d", sum);
    return 0;
}
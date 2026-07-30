// Program to print the Fibonacci series upto a certain number
#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number upto which the fibonacci series should be printed: ");
    scanf(" %d", &num);

    printf("0 ");
    if(num > 0)
    {
        printf("1 ");
    }
    int prev = 1;
    int the_second_prev = 0;
    while(the_second_prev + prev <= num)
    {
        int latest_num = prev + the_second_prev;
        printf("%d ", latest_num);
        the_second_prev = prev;
        prev = latest_num;
    }
    return 0;
}
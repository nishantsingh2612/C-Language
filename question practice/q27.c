// Program to print the Fibonacci series upto a certain term by recursion
#include<stdio.h>
int fibonacci(int position);
int main()
{
    int terms;
    printf("Welcome to Fibonacci by recursion\n");
    printf("Enter the number of terms upto which the fibonacci series should be printed: ");
    scanf(" %d", &terms);

    for(int i = 0; i < terms; i++)
    {
        printf(" %d", fibonacci(i));
    }
    return 0;
}
int fibonacci(int position)
{
    if(position <= 1)
    {
        return position;
    }
    int latest_num = fibonacci(position - 1) + fibonacci(position - 2);
    return latest_num;
}
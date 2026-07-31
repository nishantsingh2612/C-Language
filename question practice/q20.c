/* Program to print only the even numbers upto a certain number entered
by user (ignoring the odd numbers) using continue */
#include<stdio.h>
int main()
{
    int max;
    printf("Welcome to printing even numbers\n");
    printf("Enter the number upto which the even numbers should be printed: ");
    scanf("%d", &max);

    for(int i = 1; i <= max; i++)
    {
        if(i % 2 == 1)
        {
            continue;
        }
        printf("%d ", i);
    }
    return 0;
}
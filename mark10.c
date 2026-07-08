/* Program to check whether a number is divisible
by both 2 and 3 or not */
#include<stdio.h>
int main()
{
    int x;
    while(1)
    {
        printf("Enter a number: ");
        scanf("%d",&x);
        if(x%2==0 && x%3==0)
        printf("Divisible by 2 and 3\n");
        {
            if(x%2)
            printf("Not divisible by 2\n");
            else
            printf("Divisible by 2\n");
            if(x%3)
            printf("Not divisible by 3\n");
            else
            printf("Divisible by 3\n");
        }
    }
}
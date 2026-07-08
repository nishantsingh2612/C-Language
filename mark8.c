/* Program to check whether a number is positive,
negative or zero using if-else-if loop */
#include<stdio.h>
int main()
{
    int x;
    while(1)
    {
    printf("Enter a number: ");
    scanf("%d",&x);
    if(x>0)
    printf("Positive\n");
    else if(x<0)
    printf("Negative\n");
    else
    printf("Zero\n");
    }
    return 0;
}
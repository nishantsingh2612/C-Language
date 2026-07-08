/* Program to check whether a number is even or odd
using conditional or ternary operator */
#include<stdio.h>
int main()
{
    int x;
    while(1)
    {
        printf("Enter a number: ");
        scanf("%d",&x);
        printf(x%2? "Odd\n": "Even\n");
    }
}
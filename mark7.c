/* Program to swap value of 2 int type variables
without using any third variable */
#include<stdio.h>
int main()
{
    int a=10,b=20;
    printf("\nValue of a is %d and value of b is %d",a,b);

    b=b-a;
    a=a+b;
    printf("\nNew value of a is %d and new value of b is %d",a,b);
    return 0;
}
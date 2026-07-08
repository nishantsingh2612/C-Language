// Program to swap value of 2 int type variables
#include<stdio.h>
int main()
{
    int a=10,b=20;
    b=b-a;
    a=a+b;
    printf("New value of a is %d and new value of b is %d",a,b);
    return 0;
}
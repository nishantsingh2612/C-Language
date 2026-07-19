/* Program to swap two numbers without changing the original values 
using function (call by value) */
#include<stdio.h>
void swap(int, int);
int main()
{
    int x=10,y=20;
    printf("Before swap: x=%d, y=%d\n",x,y);
    swap(x,y);
    printf("After swap: x=%d, y=%d\n",x,y);
    return 0;
}
void swap(int a, int b)
{
    int c=a;
    a=b;
    b=c;
    printf("Inside swap: a=%d, b=%d\n",a,b);
}
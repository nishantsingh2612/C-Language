/*Program to calculate difference and product of two numbers using functions*/
#include<stdio.h>
int difference(int, int);
int product(int, int);
int main()
{
    int x,y,a,b;
    printf("Welcome to calculation of difference of two numbers\n");
    int subraction=difference(x,y);
    printf("The difference is %d",subraction);
    printf("\n");
    printf("Welcome to calculation of product of two numbers\n");
    int multiplication=product(a,b);
    printf("The product is %d",multiplication);
}
int difference(int x, int y)
{
    printf("Enter two numbers: ");
    scanf("%d%d",&x,&y);
    int subraction=x-y;
    return subraction;
}
int product(int a, int b)
{
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    int multiplication=a*b;
    return multiplication;
}
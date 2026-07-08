/* Program to find the nature of roots of a
quadratic equation */
#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("Enter three numbers: ");
    scanf("%d%d%d",&a,&b,&c);
    d=b*b-4*a*c;
    if(d>0)
    printf("Real and distinct roots");
    else if(d=0)
    printf("Real and equal roots");
    else
    printf("Imaginary roots");
}
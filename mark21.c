// Program to calculate LCM of 2 numbers
#include<stdio.h>
int main()
{
    int a,b,lcm;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    for(lcm=a>b?a:b; lcm<=a*b; lcm=lcm+(a>b?a:b))
    if(lcm % a==0 && lcm % b==0)
    break;
    printf("LCM of %d and %d is %d",a,b,lcm);
}
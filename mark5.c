// Program for arithmetic of 2 or more numbers
#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("Enter three numbers: ");
    scanf("%d %d %d",&a,&b,&c);
    d=a+b*c;
    printf("Sum of %d and %d and product with %d is %d",a,b,c,d);
    return 0;
}
// Program to calculate LCM of 2 numbers
#include<stdio.h>
int main()
{
    int a, b, l;
    printf("Enter two numbers: ");
    scanf(" %d %d", &a, &b);

    for(l = a>b? a: b; l <= a*b; l = l + (a>b?a:b))
    {
        if(l % a == 0 && l % b == 0)
        {
            printf("LCM of %d and %d is %d", a, b, l);
            break;
        }
    }
    return 0;
}
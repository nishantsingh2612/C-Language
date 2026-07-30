// Program to calculate HCF of 2 numbers
#include<stdio.h>
int main()
{
    int x, y, h;
    printf("Enter two numbers: ");
    scanf(" %d %d", &x, &y);

    for(h = x<y? x: y; h >= 1; h--)
    {
        if(x % h == 0 && y % h == 0)
        {
            printf("HCF of %d and %d is %d", x, y, h);
            break;
        }
    }
    return 0;
}
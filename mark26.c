// Star pattern
#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=2;i++)
    {
        for(j=1;j<=3;j++)
        {
            if(j>=3-i && j<=1+i)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}
// Star pattern
#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=1;i<=9;i++)
    {
        i<=5?(k=i):(k=10-i);
        for(j=1;j<=9;j++)
        {
            if(j<=6-k||j>=4+k)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
    printf("\n");
}
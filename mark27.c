// Star pattern
#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=1; i<=11; i++)
    {
        i<=6? (k=i): (k=12-i);
        for(j=1; j<=11; j++)
        {
            if(j>=7-k && j<=5+k)
            printf("*");
            else 
            printf(" ");
        }
        printf("\n");  
    }
    printf("\n");
}
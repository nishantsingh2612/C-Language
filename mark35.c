// Number pattern
#include<stdio.h>
int main()
{
    int i,j,k,l;
    for(i=1;i<=9;i++)
    {
        i<=5? (k=i): (k=10-i);
        l=1;
        for(j=1;j<=5;j++)
        {
            if(j>=6-k)
            {
                printf("%d",l);
                l++;
            }
            else
            printf(" ");
        }
        printf("\n");
    }
    printf("\n");
}
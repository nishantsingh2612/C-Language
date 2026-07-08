// Number pattern
#include<stdio.h>
int main()
{
    int i,j,k,l;
    for(i=1;i<=21;i++)
    {
        i<=11?(k=i):(k=22-i);
        l=k-1;
        for(j=1;j<=21;j++)
        {
            if(j>=12-k&&j<=10+k)
            printf(" %d",j<11? l++%10: l--%10);
            else
            printf("  ");
        }
        printf("\n");
    }
    printf("\n");
}
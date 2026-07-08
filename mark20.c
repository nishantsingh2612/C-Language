// Program to calculate HCF of 2 numbers
#include<stdio.h>
int main()
{
    int x,y,hcf;
    printf("Enter two numbers: ");
    scanf("%d%d",&x,&y);
    for(hcf=x<y?x:y; hcf>=1; hcf--)
    if(x % hcf==0 && y % hcf==0)
    break;
    printf("HCF of %d and %d is %d",x,y,hcf);
}
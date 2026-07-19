// Program to print the table of any number using for loop
#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=1; i<=10; i++)
    printf("%d X %d = %d\n", n, i, n*i);
}
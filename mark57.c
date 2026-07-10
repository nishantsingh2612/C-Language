// Recursive function to print first n natural numbers
#include<stdio.h>
void print(int);
int main()
{
    int n;
    printf("Welcome to printing first n natural numbers\n");
    printf("Enter the number n: ");
    scanf("%d",&n);
    print(n);
    return 0;
}
void print(int n)
{
    if(n>0)
    {
        print(n-1);
        printf("%d ",n);
    }
}
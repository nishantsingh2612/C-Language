/* Program to print numbers from 1 to 100 and calculating 
the sum of two numbers using functions */
#include<stdio.h>
void countTo100();
int sum(int, int);
int main()
{
    int a,b;
    printf("Welcome to learning numbers\n");
    countTo100();
    printf("\nWelcome to calculating sum of two numbers");
    int add=sum(a,b);
    printf("The sum is %d",add);
    return 0;
}
void countTo100()
{
    for(int i=1; i<=100; i++)
    {
        printf("%d ",i);
    }
}
int sum(int a, int b)
{
    printf("\nEnter two numbers: ");
    scanf("%d%d",&a,&b);
    int addition=a+b;
    return addition;
}
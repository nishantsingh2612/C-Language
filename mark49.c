/* Program to print numbers from 1 to 100 and calculating the  
sum of 2 and 8 using functions */
#include<stdio.h>
void countTo100();
int sum(int, int);
int main()
{
    printf("Welcome to learning numbers!\n");
    countTo100();
    printf("\n");
    printf("Calculating the sum of 2 and 8...\n");
    int add=sum(2,8);
    printf("The sum is %d", add);
    return 0;
}
void countTo100()
{
    for(int i=1; i<=100; i++)
    {
        printf("%d ",i);
    }
}
int sum(int first, int second)
{
    int addition = first + second;
    return addition;
}
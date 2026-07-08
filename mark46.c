// Program to print numbers from 1 to 100 using function
#include<stdio.h>
void countTo100(); // Function Declaration/Signature/Prototype
int main()
{
    printf("Welcome to learning numbers!\n");
    countTo100(); // Function Call
    return 0;
}
void countTo100() // Function Definition
{
    for(int i=1; i<=100; i++)
    {
        printf("%d ",i);
    }
}
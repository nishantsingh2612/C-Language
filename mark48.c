/* Program to print alphabets from A to Z and
numbers from 1 to 100 using functions */
#include<stdio.h>
void A_to_Z();
void countTo100();
int main()
{
    printf("Welcome to learning alphabets!\n");
    A_to_Z();
    printf("Welcome to learning numbers!\n");
    countTo100();
    return 0;
}
void A_to_Z()
{
    int i;
    char k='A';
    for(i=1; i<=26; i++)
    {
        printf("%c ",k);
        k++;
    }
    printf("\n");
}
void countTo100()
{
    int i;
    for(i=1; i<=100; i++)
    {
        printf("%d ",i);
    }
}
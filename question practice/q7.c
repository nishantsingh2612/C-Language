// Program to print the absolute value of an integer using conditional operator
#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("The absolute value of the number is %d", n>0 ? n : -n);
    return 0;
}
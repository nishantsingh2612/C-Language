// Program to convert an integer value to a floating point value and print both
#include<stdio.h>
int main()
{
    int number;

    printf("Enter a number: ");
    scanf(" %d", &number);
    printf("\nOriginal number is: %d", number);

    float floating = number;

    printf("\nNew number is: %f", floating);
    printf("\nNew number is: %f", (float)number);
}
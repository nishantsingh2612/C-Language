// Signed and unsigned int
#include<stdio.h>
int main()
{
    unsigned int length=10; // Length can't be negative
    unsigned int width=5; // Width can't be negative
    unsigned int area; // Area can't be negative
    int temperature = -5; // Temperature can be negative
    area=length*width;
    printf("The area is %u",area);
    printf("\nThe temperature is %d",temperature);
    return 0;
}
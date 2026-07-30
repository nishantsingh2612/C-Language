/* Program to define a constant for mathematical value pi(3.14159)
and use it to calculate and print the circumference of a circle with
a radius input from user */

#include<stdio.h>
int main()
{
    int radius;
    const float PI = 3.14159;

    printf("Enter radius of your circle in cm: ");
    scanf(" %d", &radius);

    printf("The circumference of your circle is %f cm", 2 * PI * radius);
    return 0;
}
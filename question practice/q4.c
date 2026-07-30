// Program to calculate Fahrenheit to Celsius
#include<stdio.h>
int main()
{
    float degree_f;
    float degree_c;

    printf("Enter the temperature in degree fahrenheit: ");
    scanf(" %f", &degree_f);

    degree_c = (degree_f - 32) * 5 / 9 ;

    printf("The temperature in degree celsius is: %.2f", degree_c);
    return 0;
}
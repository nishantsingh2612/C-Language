// Function that takes 2 float arguments and returns the larger value
#include<stdio.h>
float larger_value(float, float);
int main()
{
    float a,b;
    printf("Enter any two numbers: ");
    scanf(" %f %f", &a, &b);

    float res = larger_value(a, b);
    printf("The larger value is %f", res);
    return 0;
}
float larger_value(float num1, float num2)
{
    if(num1 > num2)
    {
        return num1;
    }
    else
    {
        return num2;
    }
}
// Function that takes 2 float arguments and returns the larger value
#include<stdio.h>
float max(float, float);
int main()
{
    float num1, num2;
    printf("Enter any two numbers: ");
    scanf(" %f %f", &num1, &num2);

    float res = max(num1, num2);
    printf("The larger value is %.2f", res);
    return 0;
}
float max(float a, float b)
{
    float max_number = a > b? a: b;
    return max_number;
    // if(num1 > num2)
    // {
    //     return num1;
    // }
    // else
    // {
    //     return num2;
    // }
}
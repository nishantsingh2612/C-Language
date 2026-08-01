// Function that takes 5 int numbers and returns their average
#include<stdio.h>
float get_average(int, int, int, int, int);
int main()
{
    int num1, num2, num3, num4, num5;
    printf("Welcome to average calculator\n");
    printf("Enter five numbers: ");
    scanf("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);

    float res = get_average(num1, num2, num3, num4, num5);
    printf("The average is: %.2f", res);
    return 0;
}
float get_average(int a, int b, int c, int d, int e)
{
    float avg = (a + b + c + d + e) / 5.0;
    return avg;
}
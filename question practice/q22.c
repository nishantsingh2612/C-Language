// Function that takes 4 int parameters and returns the sum
#include<stdio.h>
int add(int, int, int, int);
int main()
{
    int num1, num2, num3, num4;
    printf("Enter four numbers: ");
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

    int res = add(num1, num2, num3, num4);
    printf("The sum is: %d", res);
    return 0;
}
int add(int a, int b, int c, int d)
{
    int addition = a + b + c + d;
    return addition;
}
// Function that takes 4 int parameters and returns the sum
#include<stdio.h>
int add(int, int, int, int);
int main()
{
    int a,b,c,d;
    printf("Enter four numbers: ");
    scanf("%d %d %d %d",&a,&b,&c,&d);

    int res = add(a,b,c,d);
    printf("The sum is: %d", res);
    return 0;
}
int add(int num1, int num2, int num3, int num4)
{
    int addition = num1 + num2 + num3 + num4;
    return addition;
}
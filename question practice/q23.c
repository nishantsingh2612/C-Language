// Function that takes an integer and returns its squares
#include<stdio.h>
int square(int);
int main()
{
    int num;
    printf("Enter a number: ");
    scanf(" %d", &num);

    int res = square(num);
    printf("The square of %d is %d", num, res);
    return 0;
}
int square(int a)
{
    int sqr = a * a;
    return sqr;
}
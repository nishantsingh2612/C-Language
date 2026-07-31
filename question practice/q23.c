// Function that takes an integer and returns its squares
#include<stdio.h>
int square(int);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf(" %d", &n);

    int res = square(n);
    printf("The square of %d is %d", n, res);
    return 0;
}
int square(int num)
{
    int sqr = num * num;
    return sqr;
}
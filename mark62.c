// To calculate factorial using long long datatype
#include<stdio.h>
long long factorial(int);
int main()
{
    int num;
    printf("Welcome to factorial calculation\n");
    printf("Enter a number: ");
    scanf(" %d", &num);

    long long res = factorial(num);
    printf("The factorial of %d is: %lld", num, res);
    return 0;
}
long long factorial(int num)
{
    long long result = 1;
    for(int i=1; i <= num; i++)
    {
        result *= i;
    }
    return result;
}
// To calculate factorial of 5,10,15 and 20 using long datatype
#include<stdio.h>
long factorial(int);
int main()
{
    printf("\nFactorial of 5 is %ld",factorial(5));
    printf("\nFactorial of 10 is %ld",factorial(10));
    printf("\nFactorial of 15 is %ld",factorial(15));
    printf("\nFactorial of 20 is %ld",factorial(20));
    return 0;
}
long factorial(int n)
{
    long result = 1;
    for(int i=1; i<=n; i++)
    {
        result *= i;
    }
    return result;
}
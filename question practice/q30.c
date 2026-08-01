/* Function that takes 2 integer pointers as input and assigns the smaller value
to min and the larger value to max using call by reference. Also write a 
main function to test it with different values. */
#include<stdio.h>
void min_max(int *a, int *b, int *max, int *min);
int main()
{
    int num1, num2, max, min;
    printf("Welcome to maximum and minimum finder\n");
    printf("Enter first number: ");
    scanf(" %d", &num1);
    printf("Enter second number: ");
    scanf(" %d", &num2);

    min_max(&num1, &num2, &max, &min);
    printf("Between %d and %d, maximum is %d and minimum is %d",num1, num2, max, min);
    return 0;
}
void min_max(int *a, int *b, int *max, int *min)
{
    if(*a > *b)
    {
        *max = *a;
        *min = *b;
    }
    else
    {
        *max = *b;
        *min = *a;   
    } 
}
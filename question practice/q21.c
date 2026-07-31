/* Program that continuously reads integers from the user and print their squares
using infinite loop and use break statement to exit when user enters 0 */
#include<stdio.h>
int main()
{
    int num;
    while(1)
    {
        printf("Enter a number: ");
        scanf(" %d", &num);

        if(num == 0)
        {
            break;
        }

        printf("The square of %d is %d\n", num, num * num);
    }
    return 0;
}
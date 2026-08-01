/* Program that prompts the user to enter a positive number and keep asking for
the number until the user enters a valid positive number using do-while loop */
#include<stdio.h>
int main()
{
    int n;

    do {
        printf("Enter a positive number: ");
        scanf(" %d", &n);
    } while(n <= 0);

    printf("You have successfully entered a positive number");
    return 0;
}
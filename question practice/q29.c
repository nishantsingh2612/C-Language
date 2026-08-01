/* Program that declares a pointer to a char and use it to read and
print a character entered by user */
#include<stdio.h>
int main()
{
    char c;
    char *ptr = &c;
    printf("Enter a character: ");
    scanf(" %c", *ptr);

    printf("The character you entered is: %c", *ptr);
    return 0;
}
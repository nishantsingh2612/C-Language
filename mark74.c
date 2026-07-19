// Strings and pointers
#include<stdio.h>
int main()
{
    // Character array - modifiable
    char name[] = "Nishant singh";
    printf("\nBefore modification: The array is: %s", name);
    name[8]='S'; // Trying to modify the eighth character
    printf("\nAfter modification: The array is: %s", name);

    // Character pointer to string literal - not modifiable
    char *nick_name = "Nishant rajput";
    printf("\nBefore modification: The pointer is: %s", nick_name);
    nick_name[8]='R'; // Trying to modify the eighth character
    printf("After modification: The pointer is: %s", nick_name);
}
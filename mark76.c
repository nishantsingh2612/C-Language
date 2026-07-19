// string.h (strcpy)
#include<stdio.h>
#include<string.h>

int main()
{
    char str1[]="Hello";
    printf("\nOriginal string is: %s", str1);
    char str2[20];
    // strcpy usage
    strcpy(str2, str1);
    printf("\nCopied string is: %s", str2);
    return 0;
}
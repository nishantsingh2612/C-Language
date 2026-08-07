// Program to check if a given string is a palindrome or not
#include<stdio.h>
#include<string.h>
int is_palindrome(char arr[]);
int main()
{
    char text[25];
    printf("Welcome to string palindrome checker\n");
    printf("Enter your text: ");
    scanf(" %s", text);

    if(is_palindrome(text))
    {
        printf("The text is palindrome");
    }
    else
    {
        printf("The text is not palindrome");
    }
}
int is_palindrome(char arr[])
{
    int length = strlen(arr);
    for(int i = 0; i < length / 2; i++)
    {
        if(arr[i] != arr[length - 1 - i])
        {
            return 0;
        }
    }
    return 1;
}
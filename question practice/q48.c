// Function that takes a string and reverses it in place
#include<stdio.h>
#include<string.h>

void reverse_str(char str[]);

int main()
{
    char text[50];
    printf("Welcome to reversing a string\n");
    printf("Enter your text: ");
    fgets(text, sizeof(text), stdin);

    printf("Text before reversing: %s", text);

    // Remove the newline character added by fgets()
    text[strcspn(text, "\n")] = '\0';
    reverse_str(text);
    printf("Text after reversing: %s", text);
}

void reverse_str(char str[])
{
    int length = strlen(str);

    for(int i = 0; i < length / 2; i++)
    {
        char temp = str[i];
        str[i] = str[length - 1 - i];
        str[length - 1 - i] = temp;
    }
}
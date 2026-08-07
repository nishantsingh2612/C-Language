// Program to convert an input string to uppercase
#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main()
{
    char name[50];
    printf("Welcome to converting string to UPPERCASE!\n");
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    // for(int i = 0; name[i] != '\0'; i++)
    for(int i = 0; i < strlen(name); i++)
    {
        name[i] = toupper(name[i]);
    }
    printf("Your name is: %s", name);
}
/* Program that reads inputs from user in a loop and breaks the loop if
a specific keyword(like "exit") is entered */
#include<stdio.h>
#include<string.h>
int main()
{
    const char EXIT[] = "exit";
    char command[25];

    printf("Welcome to login system\n");
    while(1)
    {
        printf("Enter the command: ");
        scanf(" %s", command);
        if(strcmp(command, EXIT) == 0)
        {
            break;
        }
    }
    printf("Exited successfully");
}
// Program that appends user input to the end of a log file each time it is run
#include<stdio.h>
#include<string.h>
int main()
{
    printf("Welcome to appending user input to file\n");
    FILE *file_ptr = fopen("q68.txt", "a");
    if(file_ptr == NULL)
    {
        printf("Error opening file\n");
        return 1;
    }

    char input[100];
    while(1)
    {
        printf("Enter the text to be appended to the file: ");
        fgets(input, 100, stdin);
        if(strcmp(input, "exit\n") == 0)
        {
            break;
        }
        fputs(input, file_ptr);
    }
    fclose(file_ptr);
    file_ptr = NULL;
    return 0;
}
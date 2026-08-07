// Program that takes input from user and writes it to a file, ensuring each entry is on a new line
#include<stdio.h>
#include<string.h>
int main()
{
    printf("Welcome to writing user input to file\n");
    FILE *file_ptr = fopen("q66.txt", "w");
    if(file_ptr == NULL)
    {
        printf("Error opening file");
        return 1;
    }
    
    char input[100];
    while(1)
    {
        printf("Enter the text to be written to the file: ");
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
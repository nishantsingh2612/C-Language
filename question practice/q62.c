/* Program that copies one text file's contents to another, stopping when
it reaches EOF of the source file */
#include<stdio.h>
int main()
{
    printf("Welcome to file copying\n");
    FILE *source_file = fopen("q66.txt", "r");
    FILE *destination_file = fopen("q68.txt", "w");

    if(source_file == NULL || destination_file == NULL)
    {
        printf("Error opening file");
        return 1;
    }

    while(1)
    {
        char c = fgetc(source_file);
        if(c == EOF)
        {
            break;
        }
        fputc(c, destination_file);
    }

    fclose(source_file);
    fclose(destination_file);
    destination_file = source_file = NULL;
    return 0;
}
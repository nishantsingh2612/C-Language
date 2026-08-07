/* Program that asks the user for a file name, attempts to open it,
and reports whether the operation was successful or not */
#include<stdio.h>
int main()
{
    char filename[100];
    printf("Welcome to file opening tool\n");
    printf("Enter the file name: ");
    scanf("%99s", filename);

    FILE *file_ptr = fopen(filename, "r");
    if(file_ptr != NULL)
    {
        printf("\n%s was opened successfully", filename);
        fclose(file_ptr);
    }
    else
    {
        printf("\nFile was not opened");
    }
    return 0;
}
// File Pointer
// Reading data from file
#include<stdio.h>
int main()
{
    // Declare a file pointer
    FILE *file_ptr;
    
    // Open file with file name and mode
    file_ptr = fopen("mark92.txt", "r");

    // Check if file opening is successful or not
    if(file_ptr == NULL)
    {
        printf("Error opening file");
        return 1;
    }

    // Reading data from file
    char text[100];
    fgets(text, sizeof(text), file_ptr);
    printf("File contents: %s\n", text);

    // Check if file closing is successful or not
    int result = fclose(file_ptr);
    if(result == 0)
    {
        file_ptr = NULL;
    }
    else
    {
        printf("Error closing file");
        return 1;
    }
    return 0;
}
// File Pointer
// Appending data to a file
#include<stdio.h>
int main()
{
    // Declare a file pointer
    FILE *file_ptr;
    
    // Open the file for writing
    file_ptr = fopen("mark94.txt", "a");

    // Check if file opening is successful or not
    if(file_ptr == NULL)
    {
        printf("Error opening file");
        return 1;
    }

    // Appending data to a file
    fprintf(file_ptr, "\nBecause NSR always wins");

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
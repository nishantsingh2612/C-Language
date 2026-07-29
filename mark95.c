// File Pointer
// Opening a file
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
    return 0;
}
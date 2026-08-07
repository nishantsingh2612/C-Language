// Program that performs both reading and writing operations on a file
#include<stdio.h>
int main()
{
    FILE *file_ptr = fopen("q66.txt", "r+");
    if(file_ptr == NULL)
    {
        printf("Error opening file");
        return 1;
    }

    char buffer[100];
    fgets(buffer, 100, file_ptr);
    printf("Reading from the file: %s", buffer);

    fseek(file_ptr, 0, SEEK_END);
    fputs("\nAnd I Am Iron Man", file_ptr);

    fclose(file_ptr);
    file_ptr = NULL;
    return 0;
}
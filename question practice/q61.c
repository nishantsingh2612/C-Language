// Program that reads integers from a file and calculates their sum
#include<stdio.h>
int main()
{
    const char filename[] = "q67.txt";
    FILE *file_ptr = fopen(filename, "r");
    if(file_ptr == NULL)
    {
        printf("\nFile could not be opened");
        return 1;
    }
    int temp;
    int sum = 0;

    while(fscanf(file_ptr, "%d", &temp) == 1)
    {
        sum += temp;
    }
    printf("\nThe sum of all the numbers is: %d", sum);

    fclose(file_ptr);
    file_ptr = NULL;
    return 0;
}
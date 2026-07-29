// Using realloc
#include<stdio.h>
#include<stdlib.h>

int main()
{
    // Dynamically allocate memory for 2 integers
    int *arr = (int*)malloc(2 * sizeof(int));
    arr[0] = 5;
    arr[1] = 6;

    // Check if the memory has been successfully allocated
    if(arr == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Resize the array to hold 3 integers
    arr = realloc(arr, 3 * sizeof(int));
    // Initialise the new element
    arr[2] = 7;

    // Print the new array size elements
    for(int i=0; i < 3; i++)
    {
        printf(" %d", arr[i]);
    }

    // Free the allocated memory
    free(arr);
    arr = NULL;
}
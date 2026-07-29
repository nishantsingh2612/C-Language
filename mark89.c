// Using calloc
// Printing the sum of elements
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int size;
    long sum = 0;

    printf("Enter the number of elements: ");
    scanf(" %d", &size);

    // Dynamically allocate the memory
    int *arr = (int*)calloc(size, sizeof(int));

    // Check if the memory has been successfully allocated
    if(arr == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }
    // Check if zero initialisation is successful or not
    for(int i=0; i < size; i++)
    {
        printf(" %d", arr[i]);
    }

    printf("\n");

    // Input elements into the array and sum them up
    for(int i=0; i < size; i++)
    {
        printf("Enter element number %d: ", i+1);
        scanf(" %d", &arr[i]);
        sum += arr[i];
    }
    // Print the sum of elements
    printf("The sum of all elements is: %ld", sum);
    return 0;
}
/* Program that uses malloc to dynamically allocate an array for a specified number of
float values entered by user and then stores user-entered numbers into it */
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int size;
    printf("Enter the number of elements: ");
    scanf(" %d", &size);

    float *arr = (float *) malloc (sizeof(float));
    if(arr == NULL)
    {
        printf("Memory is not allocated!!");
        return 1;
    }
    for(int i = 0; i < size; i++)
    {
        printf("Now enter the element number %d: ", i + 1);
        scanf(" %f", &arr[i]);
    }
    printf("Here are your elements: ");
    for(int i = 0; i < size; i++)
    {
        printf(" %.2f", arr[i]);
    }
    free(arr);
    arr = NULL;
    return 0;
}
// Program to find the largest and smallest element in an array
#include<stdio.h>
int main()
{
    int arr[10];
    printf("Welcome to finding the largest and smallest element of array\n");
    for(int i = 0; i < 10; i++)
    {
        printf("Enter element number %d: ", i + 1);
        scanf(" %d", &arr[i]);
    }
    int max = arr[0];
    int min = arr[0];
    for(int i = 1; i < 10; i++)
    {
        if(max < arr[i])
        {
            max = arr[i];
        }
        if(min > arr[i])
        {
            min = arr[i];
        }
    }
    printf("\nThe largest element of the array is: %d", max);
    printf("\nThe smallest element of the array is: %d", min);
    return 0;
}
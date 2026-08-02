// Program to check if the given array is sorted or unsorted
#include<stdio.h>
int is_sorted(int arr[], int size);
int main()
{
    int arr1[6] = {1, 2, 4, 5, 5, 7}; // Sorted in increasing/non-decreasing order
    int arr2[6] = {30, 28, 26, 22, 22, 21}; // Sorted in decreasing/non-increasing order
    int arr3[6] = {55, 24, 37, 19, 23, 33}; // Unsorted

    printf("\nChecking if array is sorted or unsorted");

    if(is_sorted(arr1, 6))
    {
        printf("\nThe array 'arr1' is sorted");
    }
    else
    {
        printf("\nThe array 'arr1' is unsorted");
    }

    if(is_sorted(arr2, 6))
    {
        printf("\nThe array 'arr2' is sorted");
    }
    else
    {
        printf("\nThe array 'arr2' is unsorted");
    }

    if(is_sorted(arr3, 6))
    {
        printf("\nThe array 'arr3' is sorted");
    }
    else
    {
        printf("\nThe array 'arr3' is unsorted");
    }
}
int is_sorted(int arr[], int size)
{
    int increasing_order = 1;
    int decreasing_order = 1;

    for(int i = 1; i < 6; i++)
    {
        if(arr[i] > arr[i-1])
        {
            decreasing_order = 0;
        } else if(arr[i] < arr[i-1])
        {
            increasing_order = 0;
        }
    }
    return increasing_order + decreasing_order;
}
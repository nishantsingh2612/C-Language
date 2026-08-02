// Program to find the number of occurrence of an element in an array
#include<stdio.h>
int occurrence(int arr[], int size, int element);
int main()
{
    int arr[] = {1, 2, 4, 5, 6, 7, 8, 4, 8, 10};

    int res = occurrence(arr, sizeof(arr), 4);
    printf("\nThe number of occurrence of 4 in the array is: %d", res);
    res = occurrence(arr, sizeof(arr), 9);
    printf("\nThe number of occurrence of 9 in the array is: %d", res);
    res = occurrence(arr, sizeof(arr), 8);
    printf("\nThe number of occurrence of 8 in the array is: %d", res);
    res = occurrence(arr, sizeof(arr), 10);
    printf("\nThe number of occurrence of 10 in the array is: %d", res);
    return 0;
}
int occurrence(int arr[], int size, int element)
{
    int occur = 0;
    for(int i = 0; i < size; i++)
    {
        if(arr[i] == element)
        {
            occur++;
        }
    }
    return occur;
}
// Program to return a new array by deleting a specific element
#include<stdio.h>
void delete(int arr[], int size, int new_array[], int *new_size, int element);
void print_arr(int arr[], int size);

int main()
{
    int arr[6] = {11, 15, 19, 19, 22, 26};
    printf("\nThe original array is:");
    for(int i = 0; i < 6; i++)
    {
        printf(" %d", arr[i]);
    }
    int new_arr[6];
    int new_size;

    delete(arr, 6, new_arr, &new_size, 11);
    printf("\nThe array after deleting 11 is:");
    print_arr(new_arr, new_size);

    delete(arr, 6, new_arr, &new_size, 19);
    printf("\nThe array after deleting 19 is:");
    print_arr(new_arr, new_size);

    delete(arr, 6, new_arr, &new_size, 30);
    printf("\nThe array after deleting 30 is:");
    print_arr(new_arr, new_size);
}
void print_arr(int arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        printf(" %d", arr[i]);
    }
}
void delete(int arr[], int size, int new_arr[], int *new_size, int element)
{
    int j = 0;
    for(int i = 0; i < size; i++)
    {
        if(arr[i] != element)
        {
            new_arr[j] = arr[i];
            j++;
        }
    }
    *new_size = j;
}
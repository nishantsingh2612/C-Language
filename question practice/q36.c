// Program to reverse an array
#include<stdio.h>
void reverse_arr(int arr[], int size);
void swap_num(int *first, int *second);
void print_arr(int arr[], int size);

int main()
{
    int arr1[5] = {1, 4, 5, 7, 8};
    printf("\nArray 'arr1' before reversing:");
    for(int i = 0; i < 5; i++)
    {
        printf(" %d", arr1[i]);
    }
    printf("\nArray 'arr1' after reversing:");
    reverse_arr(arr1, 5);
    print_arr(arr1, 5);
    
    int arr2[6] = {10, 17, 18, 21, 22, 26};
    printf("\nArray 'arr2' before reversing:");
    for(int i = 0; i < 6; i++)
    {
        printf(" %d", arr2[i]);
    }
    printf("\nArray 'arr2' after reversing:");
    reverse_arr(arr2, 6);
    print_arr(arr2, 6);
    return 0;

}
void reverse_arr(int arr[], int size)
{
    for(int i = 0; i < size/2; i++)
    {
        swap_num(&arr[i], &arr[size - 1 - i]);
    }
}
void swap_num(int *first, int *second)
{
    int temp = *first;
    *first = *second;
    *second = temp;
}
void print_arr(int arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        printf(" %d", arr[i]);
    }
}
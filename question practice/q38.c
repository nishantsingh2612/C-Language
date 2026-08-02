// Function that uses pointer arithmetic to copy an array of char into another
#include<stdio.h>
void copy_arr(char *arr, int size, char *new_arr);
void print_arr(char arr[], int size);
int main()
{
    char arr[7] = {'N', 'I', 'S', 'H', 'A', 'N', 'T'};
    char new_arr[7];

    printf("\nOriginal array is: ");
    print_arr(arr, 7);

    copy_arr(arr, 7, new_arr);
    printf("\nCopied array is: ");
    print_arr(new_arr, 7);
}
void copy_arr(char *arr, int size, char *new_arr)
{
    for(int i = 0; i < size; i++)
    {
        *new_arr = *arr;
        new_arr++;
        arr++;
    }
}
void print_arr(char arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("%c", arr[i]);
    }
}
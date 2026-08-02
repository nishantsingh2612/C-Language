// Program to search an element in an array
#include<stdio.h>
int element_finder(int arr[], int size, int element);
int main()
{
    int arr[8] = {1, 2, 4, 5, 6, 7, 8, 10};
    printf("Welcome to element finder\n");
    printf("Searching if there is number 10 present in the array or not\n");
    int res = element_finder(arr, 8, 10);
    if(res == 1)
    {
        printf("The number 10 is present in the array\n");
    }
    else 
    {
        printf("The number 10 is not present in the array\n");
    }
}
int element_finder(int arr[], int size, int element)
{
    for(int i = 0; i < size; i++)
    {
        if(arr[i] == element)
        {
            return 1;
        }
    }
    return 0;
}
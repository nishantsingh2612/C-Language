// Program to check if the array is palindrome or not
#include<stdio.h>
int check_palindrome(int arr[], int size);
int main()
{
    int arr1[6] = {3, 2, 1, 1, 2, 3};
    int arr2[3] = {1, 2, 1};
    int arr3[3] = {1, 2, 3};

    int res = check_palindrome(arr1, 6);
    if(res == 0)
    {
        printf("\nThe array 'arr1' is not palindrome");
    }
    else
    {
        printf("\nThe array 'arr1' is palindrome");
    }
    res = check_palindrome(arr2, 3);
    if(res == 0)
    {
        printf("\nThe array 'arr2' is not palindrome");
    }
    else
    {
        printf("\nThe array 'arr2' is palindrome");
    }
    res = check_palindrome(arr3, 3);
    if(res == 0)
    {
        printf("\nThe array 'arr3' is not palindrome");
    }
    else
    {
        printf("\nThe array 'arr3' is palindrome");
    }
}
int check_palindrome(int arr[], int size)
{
    for(int i = 0; i < size/2; i++)
    {
        if(arr[i] != arr[size - 1 - i])
        {
            return 0;
        }
    }
    return 1;
}
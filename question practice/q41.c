// Program to search an element in a 2-D array
#include<stdio.h>
int element_finder(int arr[3][3], int rows, int columns, int element);
int main()
{
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {1, 2, 3}};
    
    printf("Welcome to element finder\n");

    printf("Searching for 1 in the array\n");
    int res = element_finder(arr, 3, 3, 1);
    if(res >= 1)
    {
        printf("1 is present in the array for %d times\n", res);
    }
    else
    {
        printf("1 is not present in the array\n");
    }

    printf("Searching for 5 in the array\n");
    res = element_finder(arr, 3, 3, 5);
    if(res >= 1)
    {
        printf("5 is present in the array for %d times\n", res);
    }
    else
    {
        printf("5 is not present in the array\n");
    }

    printf("Searching for 7 in the array\n");
    res = element_finder(arr, 3, 3, 7);
    if(res >= 1)
    {
        printf("7 is present in the array for %d times\n", res);
    }
    else
    {
        printf("7 is not present in the array\n");
    }
}
int element_finder(int arr[3][3], int rows, int columns, int element)
{
    int num = 0;
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < columns; j++)
        {
            if(arr[i][j] == element)
            {
                num++;
            }
        }
    }
    return num;
}
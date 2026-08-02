// Program to do sum and average of all elements in a 2-D array
#include<stdio.h>
int sum_arr(int arr[3][3], int rows, int columns);
float average_arr(int arr[3][3], int rows, int columns);
int main()
{
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {10, 11, 12}};

    printf("Welcome to finding sum and average of all the elements in a 2-D array\n");

    int res1 = sum_arr(arr, 3, 3);
    printf("The sum of all the elements is: %d\n", res1);

    float res2 = average_arr(arr, 3, 3);
    printf("The average of all the elements is: %.2f\n", res2);
}

int sum_arr(int arr[3][3], int rows, int columns)
{
    int add = 0;
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < columns; j++)
        {
            add += arr[i][j];
        }
    }
    return add;
}

float average_arr(int arr[3][3], int rows, int columns)
{
    int addition = sum_arr(arr, 3, 3);
    int avg = addition / 9.0;
    return avg;
}
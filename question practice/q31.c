// Program to find the sum and average of all elements in an array
#include<stdio.h>
int sum(int arr[], int size);
float average(int arr[], int size);

int main()
{
    int arr[10];
    printf("Welcome to finding sum and average of array elements\n");

    for(int i = 0; i < 10; i++)
    {
        printf("Enter elememt number %d: ", i + 1);
        scanf(" %d", &arr[i]);
    }

    int res1 = sum(arr, 10);
    printf("\nThe sum of all the array elements is: %d", res1);

    float res2 = average(arr, 10);
    printf("\nThe average of all the array elements is: %.2f", res2);
    return 0;
}
int sum(int arr[], int size)
{
    int add = 0;
    for(int i = 0; i < 10; i++)
    {
        add += arr[i];
    }
    return add;
}
float average(int arr[], int size)
{
    int addition = sum(arr, 10);
    float avg = addition / 10.0;
    return avg;
}
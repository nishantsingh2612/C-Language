// Arrays and pointers
// Function to calculate the sum of array elements
#include<stdio.h>
int sumArray(int *arr, int size);
int main()
{
    int myArray[]={1,2,3,4,5,6};
    int size = sizeof(myArray) / sizeof(myArray[0]);
    // Array decays into a pointer when passed
    int total = sumArray(myArray, size);
    printf("The sum of the array elements is %d", total);
    return 0;
}
int sumArray(int *arr, int size)
{
    int sum = 0;
    for(int i=0; i < size; i++)
    {
        // Access elements via pointer arithmetic
        sum += arr[i];
    }
    return sum;
}
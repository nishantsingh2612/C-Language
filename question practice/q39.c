// Program to merge two sorted arrays
#include<stdio.h>
void merge_sorted_arr(int arr1[],int size1,int arr2[],int size2,int arr3[],int size3);
void print_arr(int arr[], int size);
int main()
{
    int arr1[5] = {1, 3, 5, 7, 9};
    int arr2[7] = {2, 4, 6, 8, 10, 12, 14};
    int arr3[12];

    printf("\nFirst sorted array 'arr1' is:");
    print_arr(arr1, 5);
    printf("\nSecond sorted array 'arr2' is:");
    print_arr(arr2, 7);
    printf("\nMerged array is:");
    merge_sorted_arr(arr1, 5, arr2, 7, arr3, 12);
    print_arr(arr3, 12);
}
void print_arr(int arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        printf(" %d", arr[i]);
    }
}
void merge_sorted_arr(int arr1[],int size1,int arr2[],int size2,int arr3[],int size3)
{
    int i = 0;
    int j = 0;
    int k = 0;

    while(k < size3)
    {
        if(j == size2 || (i < size1 && arr1[i] < arr2[j]))
        {
            arr3[k] = arr1[i];
            i++;
        }
        else
        {
            arr3[k] = arr2[j];
            j++;
        }
        k++;
    }
}
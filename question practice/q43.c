// Program to find the sum of the elements of both the diagonals of a 2-D array
#include<stdio.h>
void print_diagonal_sums(int size, const int arr[size][size]);
int main()
{
    int arr1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int arr2[4][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};

    printf("Welcome to finding the sum of the elements of both the diagonals of a 2-D array\n");

    printf("For arr1:\n");
    print_diagonal_sums(3, arr1);
    printf("For arr2:\n");
    print_diagonal_sums(4, arr2);
    return 0;
}
void print_diagonal_sums(int size, const int arr[size][size])
{
    int sum_left_diagonal = 0;
    int sum_right_diagonal = 0;

    for(int i = 0; i < size; i++)

    {
        sum_left_diagonal += arr[i][i];
        sum_right_diagonal += arr[i][size - 1 - i];
    }
    printf("The sum of the elements of left diagonal is: %d\n", sum_left_diagonal);
    printf("The sum of the elements of right diagonal is: %d\n", sum_right_diagonal);

    int sum_both_diagonal = sum_left_diagonal + sum_right_diagonal;

    // Subtract the centre element because it was counted twice
    if(size % 2 == 1)
    {
        int index = size / 2;
        sum_both_diagonal -= arr[index][index];
    }
    printf("The sum of the elements of both diagonals is: %d\n", sum_both_diagonal);
}
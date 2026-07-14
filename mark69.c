// 2D Array
// Program to print marks of 4 subjects each of 2 students while taking input from user
#include<stdio.h>
int main()
{
    int students=2;
    int subjects=4;
    int marks[2][4];
    for(int row=0; row < students; row++)
    {
        for(int column=0; column < subjects; column++)
        {
            printf("Enter the marks of student %d, subject %d: ",(row+1),(column+1));
            scanf(" %d", &marks[row][column]);
        }
    }
    for(int row=0; row < students; row++)
    {
        for(int column=0; column < subjects; column++)
        {
            printf("\nMarks of student %d, subject %d are %d",(row + 1),(column + 1), marks[row][column]);
        }
    }
}
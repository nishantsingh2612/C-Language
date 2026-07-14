// Most convenient way of accessing the array elements
#include<stdio.h>
int main()
{
    int marks[10];
    int num_of_students = 10;

    for(int i=0; i < num_of_students; i++)
    {
        printf("Enter the marks of student %d: ", i+1);
        scanf(" %d", &marks[i]);
    }
    for(int i=0; i < num_of_students; i++)
    {
        printf("\nMarks of student %d are %d",(i+1), marks[i]);
    }
    return 0;
}
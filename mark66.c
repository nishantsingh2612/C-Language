// Array traversal
#include<stdio.h>
int main()
{
    int marks[]={91,95,96,99,100};
    for(int i=0; i<5; i++)
    {
        printf("\nMarks of student %d are %d", i+1, marks[i]);
    }
    return 0;
}
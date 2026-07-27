// typedef keyword
#include<stdio.h>

typedef struct
{
    int rollno;
    char name[10];
    float marks;
} Student;

int main()
{
    Student students[2] = {
        {26, "Krishna", 99},
        {30, "Radha", 99.5}
    };

    for(int i = 0; i < 2; i++)
    {
        printf("\nRollNo: %d, Name: %s, Marks: %.2f", 
        students[i].rollno, students[i].name, students[i].marks);
    }
}
// Structure Pointer
#include<stdio.h>
struct Student
{
    int rollno;
    char name[10];
    float marks;
};
int main()
{
    // Declare a Student structure variable
    struct Student student = {1, "Ram", 90};
    // Pointer to the structure
    struct Student *student_ptr = &student;
}`
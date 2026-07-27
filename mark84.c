// Arrow (->) Operator
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

    printf("\nRollNo: %d, Name: %s, Marks: %.2f",
    student.rollno, student.name, student.marks);

    // printf("\nRollNo: %d, Name: %s, Marks: %.2f",
    // (*student_ptr).rollno, (*student_ptr).name, (*student_ptr).marks);
    
    printf("\nRollNo: %d, Name: %s, Marks: %.2f",
    student_ptr->rollno, student_ptr->name, student_ptr->marks);
}
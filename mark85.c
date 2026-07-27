// Structure as Function Arguments
#include<stdio.h>
struct Student
{
    int rollno;
    char name[10];
    float marks;
};
void printStudent(struct Student student); // Function Declaration
int main()
{
    struct Student student = {1, "Krishna", 95};
    struct Student *student_ptr = &student;

    printStudent(student);
    printStudent(*student_ptr);

    // printf("\nRollNo: %d, Name: %s, Marks: %.2f",
    // student.rollno, student.name, student.marks);

    // printf("\nRollNo: %d, Name: %s, Marks: %.2f",
    // (*student_ptr).rollno, (*student_ptr).name, (*student_ptr).marks);
    
    // printf("\nRollNo: %d, Name: %s, Marks: %.2f",
    // student_ptr->rollno, student_ptr->name, student_ptr->marks);
}
void printStudent(struct Student student)
{
    printf("\nRollNo: %d, Name: %s, Marks: %.2f",
    student.rollno, student.name, student.marks);
}
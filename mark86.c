// Structure as Function Arguments
#include<stdio.h>
#include<string.h>

struct Student
{
    int rollno;
    char name[10];
    float marks;
};
void printStudent(struct Student student); // Call by value

void print_student_from_pointer(struct Student *student); // Call by reference

int main()
{
    struct Student student = {1, "Krishna", 95};
    struct Student *student_ptr = &student;

    printf("\nRollNo: %d, Name: %s, Marks: %.2f",student.rollno, student.name, student.marks);
    printStudent(student);
    printf("\nRollNo: %d, Name: %s, Marks: %.2f",student.rollno, student.name, student.marks);
    print_student_from_pointer(student_ptr);
    printf("\nRollNo: %d, Name: %s, Marks: %.2f",student.rollno, student.name, student.marks);
}
void printStudent(struct Student student)
{
    student.rollno = 7;
    printf("\nRollNo: %d, Name: %s, Marks: %.2f",
    student.rollno, student.name, student.marks);
}
void print_student_from_pointer(struct Student *student_ptr)
{
    strcpy(student_ptr->name, "Radha");
    student_ptr->rollno = 4;
    student_ptr->marks = 96;
    printf("\nRollNo: %d, Name: %s, Marks: %.2f",
    student_ptr->rollno, student_ptr->name, student_ptr->marks);
}
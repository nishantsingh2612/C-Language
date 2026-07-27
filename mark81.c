// Structure Initialisation
#include<stdio.h>
struct Student
{
    int rollno;
    char name[10];
    float marks;
};
int main()
{
    // Direct initialisation
    struct Student s1 = {1, "Ram", 90};
    // Designated initialisation
    struct Student s2 = {.name = "Shyam", .rollno = 2, .marks = 85.5};
    // Zero initialisation
    struct Student s3 = {0};
    // Copy initialisation
    struct Student s4 = s2;

    printf("\nRollNo: %d, Name: %s, Marks: %.2f", s1.rollno, s1.name, s1.marks);
    printf("\nRollNo: %d, Name: %s, Marks: %.2f", s2.rollno, s2.name, s2.marks);
    printf("\nRollNo: %d, Name: %s, Marks: %.2f", s3.rollno, s3.name, s3.marks);
    printf("\nRollNo: %d, Name: %s, Marks: %.2f", s4.rollno, s4.name, s4.marks);
}
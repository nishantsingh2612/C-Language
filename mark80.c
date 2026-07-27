// Structure
#include<stdio.h>
struct Student // Structure declaration
{
    int rollno;
    char name[10];
    float marks;
};
int main()
{
    struct Student student1;

    printf("Enter the student details\n");
    printf("Enter the roll no: ");
    scanf(" %d", &student1.rollno);
    printf("Enter the name: ");
    scanf(" %9s", student1.name);
    printf("Enter the marks: ");
    scanf(" %f", &student1.marks);

    printf("Here are the student details\n");
    printf("RollNo: %d, Name: %s, Marks: %.2f", student1.rollno, student1.name, student1.marks);
    return 0;
}
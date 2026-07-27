// Array of Structures
#include<stdio.h>
struct Student
{
    int rollno;
    char name[10];
    float marks;
};
int main()
{
    // Initialising an array of Student structure
    struct Student students[4] = {
        {1, "Ram", 90},
        {2, "Shyam", 85.5},
        {3, "Sita", 92},
        {4, "Geeta", 88}
    };
    // Loop to print each student's data
    for(int i=0; i<4; i++)
    {
        printf("\nStudent name: %s, RollNo: %d, Marks: %.2f",
            students[i].name, students[i].rollno, students[i].marks);
    }
}
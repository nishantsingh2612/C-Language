/* Function that accepts a pointer to a Student structure with fields for
id, name, year, gpa and modifies its grades */
#include<stdio.h>

typedef struct
{
    char id[10];
    char name[50];
    char year[10];
    char grade;
} Student;

void increase_grade(Student *);
void decrease_grade(Student *);
void print_student(Student *);

int main()
{
    Student stu1 = {.id = "CSE001", .name = "Nishant", .year = "first", .grade = 'A'};
    Student stu2 = {.id = "CSE002", .name = "NSR", .year = "fourth", .grade = 'B'};

    printf("Here are the student's details:\n\n");
    print_student(&stu1);
    print_student(&stu2);

    increase_grade(&stu2);

    printf("\nAfter updation:\n\n");
    print_student(&stu1);
    print_student(&stu2);

    return 0;
}

void increase_grade(Student *stu)
{
    stu->grade--;
}
void decrease_grade(Student *stu)
{
    stu->grade++;
}
void print_student(Student *stu)
{
    printf("The student %s has id %s and studies in %s year and has achieved %c grade\n",
    stu->name, stu->id, stu->year, stu->grade);
}
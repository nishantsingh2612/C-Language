/* Function where the Student structure also has the books they have 
borrowed inside, showing nested structure usage */
#include<stdio.h>
#include<string.h>

struct Book
{
    char title[50];
    char author[50];
    float price;
};
typedef struct Book Book;

typedef struct
{
    char id[10];
    char name[50];
    char year[10];
    char grade;
    int no_of_books;
    Book borrowed_books[2];
} Student;

void print_student(Student *);
void print_book(Book *);

int main()
{
    Student stu1 = {
        .id = "CSE001",
        .name = "Nishant",
        .year = "first",
        .grade = 'A',
        .no_of_books = 2,
        .borrowed_books = {
            {.title = "Ego", .author = "Virat Kohli", .price = 180},
            {.title = "Humility", .author = "Leo Messi", .price = 1000}
        }
    };

    printf("\nHere are the student's details:\n\n");
    print_student(&stu1);

}
void print_student(Student *stu)
{
    printf("The student %s has id %s and studies in %s year and has achieved %c grade\n",
    stu->name, stu->id, stu->year, stu->grade);

    printf("\nHere are the books borrowed:\n");
    for(int i = 0; i < stu->no_of_books; i++)
    {
        print_book(&(stu->borrowed_books[i]));
    }
}
void print_book(Book *book)
{
    printf("\n%s is written by %s and is sold for rupees %.2f",
        book->title, book->author, book->price);
}
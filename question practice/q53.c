/* Program that initialises an array of Book structure with different data
for each book using designated initialisers */
#include<stdio.h>

struct Book
{
    char title[50];
    char author[50];
    float price;
};
typedef struct Book Book;

void print_book(Book *book)
{
    printf("\n%s is written by %s and is sold for rupees %.2f",
        book->title, book->author, book->price);
}

int main()
{
    printf("Welcome to the book store\n");
    Book books[3] = {
        {.title = "Ego", .author = "Virat Kohli", .price = 180}, // Designated initialising
        {.title = "Humility", .author = "Leo Messi", .price = 1000}, // Designated initialising
        {"Comeback", "Virat and Leo", 1800} // Un-designated initialising
    };
    printf("Here are the details of the book\n");
    for(int i = 0; i < 3; i++)
    {
        print_book(&books[i]);
    }
    return 0;
}
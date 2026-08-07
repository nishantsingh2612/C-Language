/* Program to store and process data for 2 books with attributes like title,
author and price */
#include<stdio.h>
#include<string.h>

struct Book
{
    char title[50];
    char author[50];
    float price;
};
typedef struct Book Book;

void input_book(Book *book)
{
    printf("Enter the book's title: ");
    fgets(book->title, 50, stdin);
    book->title[strcspn(book->title, "\n")] = 0;

    printf("Enter the book's author: ");
    fgets(book->author, 50, stdin);
    book->author[strcspn(book->author, "\n")] = 0;

    printf("Enter the book's price in rupees: ");
    scanf(" %f", &(book->price));
    while(getchar() != '\n');
}

void print_book(Book *book)
{
    printf("\n%s is written by %s and is sold for rupees %.2f",
        book->title, book->author, book->price);
}

int main()
{
    printf("Welcome to the book store\n");

    Book books[2];

    for(int i = 0; i < 2; i++)
    {
        input_book(&books[i]);
    }
    printf("Here are the details of the book: \n");
    for(int i = 0; i < 2; i++)
    {
        print_book(&books[i]);
    }
    return 0;
}
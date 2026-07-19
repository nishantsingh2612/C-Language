// Format specifiers of string
#include<stdio.h>
int main()
{
    char name[50];
    printf("Enter your name: ");
    scanf(" %s", name);
    printf("Good morning %s", name);

    // char name[50];
    // printf("Enter your name: ");
    // scanf(" %4s", name);
    // printf("Good morning %s", name);

    // char name[50];
    // printf("Enter your name: ");
    // scanf(" %49s", name);
    // printf("Good morning %s", name);
}
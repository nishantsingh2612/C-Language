// fgets and puts
#include<stdio.h>
int main()
{
    char name[50];
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    printf("Good morning %s", name);
    return 0;

    // char name[50];
    // printf("Enter your name: ");
    // fgets(name, sizeof(name), stdin);
    // printf("Good morning ");
    // puts(name);
}
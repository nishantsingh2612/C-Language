// string.h (strlen)
#include<stdio.h>
#include<string.h>

int main()
{
    char name[50];
    printf("Enter your name: ");
    fgets(name, 50, stdin);
    // strlen usage
    int len = strlen(name);
    printf("The length of the name is %d", len);
    return 0;
}
// 2-D Array of Characters
#include<stdio.h>
#include<string.h>

int main()
{
    // Declare and initialise a 2D array of characters
    char names[4][20] = {"Prashant", "Nishant", "Aryan", "Arin"};

    // Printing all names
    for(int i=0; i<4; i++)
    {
        // printf("%s", names[i]);
        // printf("\n");
        puts(names[i]);
    }
    for(int i=0; i<4; i++)
    {
        for(int j=0; j < strlen(names[i]); j++)
        {
            printf("%c", names[i][j]);
        }
        printf("\n");
    }
    // Accessing and printing a specific character
    printf("The sixth character of the second name is: %c", names[1][5]);
    return 0;
}
// Function that removes leading and trailing spaces from a string
#include<stdio.h>
#include<string.h>
int main()
{
    char text[100];
    char trimmed_text[100];
    printf("Welcome to trimming of the string\n");
    printf("Enter your text: ");
    fgets(text, sizeof(text), stdin);

    int index_start = 0;
    int index_end = strlen(text) - 1;

    while(text[index_start] == ' ')
    {
        index_start++;
    }
    while(text[index_end] == ' ')
    {
        index_end--;
    }

    int i = 0;
    while(i <= index_end - index_start)
    {
        trimmed_text[i] = text[i + index_start];
        i++;
    }
    
    trimmed_text[i] = '\0';
    printf("Trimmed text is: %s", trimmed_text);
    return 0;
}
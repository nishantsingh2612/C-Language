// string.h (strcat)
#include<stdio.h>
#include<string.h>

int main()
{
    char str1[]="You Know ";
    char str2[]="Who I Am";
    // strcat usage
    strcat(str1, str2);
    printf("The concatenated string is: %s", str1);
    return 0;

//     char first_name[50];
//     char last_name[50];
//     printf("Enter your first name: ");
//     fgets(first_name, 50, stdin);
//     printf("Enter your last name: ");
//     fgets(last_name, 50, stdin);

//     strcat(first_name, last_name);
//     printf("Your full name is: %s", first_name);
}
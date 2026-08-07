// Text-based user login system that compares a stored password string using strcmp
#include<stdio.h>
#include<string.h>
int main()
{
    const char OG_PASSWORD[25] = "Password";
    char password[25];

    printf("Welcome to login system\n");

    do {
        printf("Enter the password: ");
        scanf(" %s", password);
        if(strcmp(password, OG_PASSWORD) == 0)
        {
            printf("Access Granted\n");
            break;
        }
        else
        {
            printf("Access Denied\n");
        }
    } while(password != OG_PASSWORD);

    return 0;
}
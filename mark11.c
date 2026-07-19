// Program to check the nature of a character
#include<stdio.h>
int main()
{
    char x;
    while(1)
    {
        printf("Enter a character: ");
        scanf(" %c",&x);
        if(x>='A' && x<='Z')
        printf("Uppercase Alphabet\n");
        else if(x>='a' && x<='z')
        printf("Lowercase Alphabet\n");
        else if(x>='0' && x<='9')
        printf("Digit\n");
        else
        printf("Special Character\n");
    }
}
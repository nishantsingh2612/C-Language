// Program to print alphabets from A to Z using function
#include<stdio.h>
void A_to_Z();
int main()
{
    printf("Welcome to learning alphabets!\n");
    A_to_Z();
    return 0;
}
void A_to_Z()
{
    char k='A';
    for(int i=1; i<=26; i++)
    {
        printf("%c ",k);
        k++;
    }
}
#include <stdio.h>
int main()
{
    int age;
    printf("Enter the age to check whether a person is eligible to vote or not: ");
    scanf("%d",&age);
    if(age>=18)
    printf("The person is eligible to vote");
    else
    printf("The person is not eligible to vote yet");
    return 0;      
}
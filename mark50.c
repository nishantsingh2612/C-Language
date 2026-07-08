#include <stdio.h>
int main()
{
    int age;
    printf("Enter the age to check whether the individual is eligible to vote or not: ");
        scanf("%d",&age);
            if(age>=18)
            printf("You are eligible to vote");
            else
            printf("You are  not eligible to vote yet");
            return 0;
            
}
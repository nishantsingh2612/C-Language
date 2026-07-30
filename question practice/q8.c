/* Program to categorize student's score as "High", "Moderate" or "Low"
using conditional operator (High for scores > 80, Moderate for 50-80
and low for <50) */

#include<stdio.h>
int main()
{
    int marks;
    printf("Enter the marks: ");
    scanf(" %d", &marks);

    printf("The marks are in the category: ");
    marks > 80 ? printf("High") 
          : (marks >=50 ? printf("Moderate")
                        : printf("Low"));
    return 0;
}
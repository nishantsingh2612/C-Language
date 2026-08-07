// Program to print a date string(day,date,month,year) using printf with format specifiers
#include<stdio.h>
int main()
{
    char day[10];
    int date;
    char month[10];
    int year;

    printf("Enter the current day: ");
    scanf("%s", day);
    printf("Enter the current date: ");
    scanf("%d", &date);
    printf("Enter the current month: ");
    scanf("%s", month);
    printf("Enter the current year: ");
    scanf("%d", &year);

    printf("\nThe current day is: %s, %d %s, %d", day, date, month, year);
}
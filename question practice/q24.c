// Function that prints the current date
#include<stdio.h>
#include<time.h>

void print_date();
int main()
{
    printf("Hello, World!\n");
    print_date();
    return 0;
}
void print_date()
{
    time_t current_time;
    time(&current_time);

    char *date_str = asctime(localtime(&current_time));
    printf("Current date is: %s", date_str);
}
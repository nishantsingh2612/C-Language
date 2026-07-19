// string.h (strcmp)
#include<stdio.h>
#include<string.h>

int main()
{
    // Comparing "apple" with "banana"
    int comparisonResult = strcmp("apple", "banana");
    printf("\nResult of comparison of apple with banana: %d", comparisonResult);

    // Comparing "cherry" with "banana"
    comparisonResult = strcmp("cherry", "banana");
    printf("\nResult of comparison of cherry with banana: %d", comparisonResult);

    // Comparing "date" with "date"
    comparisonResult = strcmp("date", "date");
    printf("\nResult of comparison of date with date: %d", comparisonResult);
}
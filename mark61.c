/* Function to swap two numbers using pointers 
(call by reference) */
#include<stdio.h>
void swap(int *a, int *b);
int main()
{
    int x=10,y=20;
    printf("Before swap: x=%d, y=%d",x,y);
    printf("\n");
    // Pass the address of x and y to the swap function
    swap(&x, &y);
    printf("After swap: x=%d, y=%d",x,y);
    printf("\n");
    return 0;
}
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    printf("Inside swap: a=%d, b=%d",*a,*b);
    printf("\n");
}
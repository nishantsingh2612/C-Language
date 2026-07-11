// Use of Pointer 
#include<stdio.h>
int main()
{
    int i=5;
    printf("Value of i is %d\n",i);
    printf("Address of i is %p\n",&i);
    printf("Value of i is %d\n",*(&i));
    return 0;
}
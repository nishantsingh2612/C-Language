// Pointer Declaration
#include<stdio.h>
int main()
{
    int i=17;
    int *j;
    j=&i;
    printf("Value of i is %d\n",i);
    printf("Value of i is %d\n",*j);
    printf("Value of i is %d\n",*(&i));
    printf("Address of i is %p\n",&i);
    printf("Address of i is %p\n",j);
    printf("Value of j is %p\n",j);
    printf("Value of j is %p\n",&i);
    printf("Address of j is %p\n",&j);
    return 0;
}
// Pointer to a pointer
#include<stdio.h>
int main()
{
    int i=18;
    int *j;
    j=&i;
    int **k;
    k=&j;
    printf("Value of i is %d\n",i);
    printf("Value of i is %d\n",*j);
    printf("Value of i is %d\n",*(&i));
    printf("Value of i is %d\n",**k);
    printf("Value of i is %d\n",**(&j));
    printf("Address of i is %p\n",&i);
    printf("Address of i is %p\n",j);
    printf("Address of i is %p\n",*(&j));
    printf("Address of i is %p\n",*k);
    printf("Value of j is %p\n",j);
    printf("Value of j is %p\n",&i);
    printf("Value of j is %p\n",*(&j));
    printf("Value of j is %p\n",*k);
    printf("Address of j is %p\n",&j);
    printf("Address of j is %p\n",k);
    printf("Address of j is %p\n",*(&k));
    printf("Value of k is %p\n",k);
    printf("Value of k is %p\n",&j);
    printf("Value of k is %p\n",*(&k));
    printf("Address of k is %p\n",&k);
    return 0;
}
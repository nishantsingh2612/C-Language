// Program to change the value of an integer variable using a pointer and the *operator
#include<stdio.h>
int main()
{
    int i = 26;
    int *ptr = &i;
    printf("\nValue of i is: %d", i);

    *ptr = 30;
    printf("\nNew value of i is: %d", i);
    return 0;
}

// #include<stdio.h>
// int value_changer(int *j);
// int main()
// {
//     int i = 19;
//     printf("\nValue of i is: %d", i);

//     int res = value_changer(&i);
//     printf("\nNew value of i is: %d", res);
//     return 0;
// }
// int value_changer(int *j)
// {
//     *j = 10;
//     return *j;
// }
/* A game like program in which the user has to
enter an even number to win within 3 chances */
#include<stdio.h>
int main()
{
    int x,i;
    for(i=1; i<=3; i++)
    {
        printf("Enter an even number: ");
        scanf("%d",&x);
        if(x%2==0)
        {
        printf("Right\n");
        break;
        }
        if(x%2==1)
        printf("Wrong\n");
    }
    if(i==4)
    printf("Game Over");
    else
    printf("You Won");
}
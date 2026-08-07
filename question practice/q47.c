// Program that uses a 2-D character array to store and display a tic-tac-toe board
#include<stdio.h>
int main()
{
    char board[3][3] = {
        {'X', 'O', 'O'},
        {'O', 'X', 'X'},
        {'X', 'O', 'X'}
    };
    printf("Welcome to tic-tac-toe board\n\n");

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            printf("%c", board[i][j]);
            if(j < 2)
            {
                printf("|");
            }
        }
        if(i < 2)
        {
            printf("\n-----\n");
        }
    }
    printf("\n\n");
    return 0;
}
#include<stdio.h>
#include<stdlib.h>

char board[3][3];
const char player = 'X';
const char computer = 'O';

void resetBoard();
void printBoard();
int checkEmptySpaces();
void playerMove();
void computerMove();
char checkWinner();
void printWinner(char);

int main()
{
    char winner = ' ';
    resetBoard();
    
    while(checkEmptySpaces() != 0 && ' ' == winner)
    {
        playerMove();
        winner = checkWinner();
        if(winner == 'P')
        {
            
        }

        computerMove();
        winner = checkWinner();
    }
    

    return 0;
}

void resetBoard()
{
    for(int x = 0; x < 3; x++)
    {
        for(int y = 0; y < 3; y++)
        {
            board[x][y] = '-';
        }
    }
}

void printBoard()
{
    printf(" %c | %c | %c \n", board[0][0], board[0][1], board[0][2]);
    printf(" %c | %c | %c \n", board[1][0], board[1][1], board[1][2]);
    printf(" %c | %c | %c \n", board[2][0], board[2][1], board[2][2]);
}

int checkEmptySpaces()
{
    int result = 0;
    
    for(int x = 0; x < 3; x++)
    {
        for(int y = 0; y < 3; y++)
        {
            if('-' == board[x][y])
            {
                result += 1;
            }
        }
    }

    return result;
}

void playerMove()
{
    int row = 0;
    int column = 0; 
    printf("Please enter a column number\n");
    scanf("%i", &column);

    printf("Please enter a row number\n");
    scanf("%i", &row);

    board[row - 1][column - 1] = player;
    printf("The board is now:\n");
    printBoard();
}

void computerMove()
{

}

char checkWinner()
{
    char result = ' ';
    
    for(int x = 0; x < 3; x++)
    {
        if(board[0][x] == 'X' && board[1][x] == 'X' && board[2][x] == 'X')
        {
            result = 'P';
        }

        if(board[0][x] == 'O' && board[1][x] == 'O' && board[2][x] == 'O')
        {
            result = 'C';
        }
    }

    for(int x = 0; x < 3; x++)
    {
        if(board[x][0] == 'X' && board[x][1] == 'X' && board[x][2] == 'X')
        {
            result = 'P';
        }

        if(board[x][0] == 'O' && board[x][1] == 'O' && board[x][2] == 'O')
        {
            result = 'C';
        }
    }

    return result;
}

void printWinner(char winner)
{
    
}
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

char board[3][3];
char winner = ' ';
const char player = 'X';
const char computer = 'O';

void resetBoard();
void printBoard();
int checkEmptySpaces();
void playerMove();
void computerMove();
char checkWinner();
void printWinner(char);
int miniMax(int, int);

int main()
{
    resetBoard();
    
    while(checkEmptySpaces() != 0 && ' ' == winner)
    {
        playerMove();
        winner = checkWinner();
        if(winner == player)
        {
            printWinner(player);
            return 0;
        }

        computerMove();
        winner = checkWinner();
        if(winner == computer)
        {
            printWinner(computer);
            return 0;
        }
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
    printf("-----------\n");
    printf(" %c | %c | %c \n", board[1][0], board[1][1], board[1][2]);
    printf("-----------\n");
    printf(" %c | %c | %c \n\n", board[2][0], board[2][1], board[2][2]);
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
    scanf("%i", &row);

    printf("Please enter a row number\n");
    scanf("%i", &column);

    if(board[column - 1][row - 1] == player || board[column - 1][row - 1] == computer)
    {
        printf("That is already taken!\n");
        playerMove();
    }else
    {
        board[column - 1][row - 1] = player;
        printf("\nYou went here:\n");
        printBoard();
    }
}

void computerMove()
{
    float bestScore = -INFINITY;
    int bestMove[2];
    
    for(int x = 0; x < 3; x++)
    {
        for(int y = 0; y < 3; y++)
        {
            if(board[x][y] == '-')
            {
                board[x][y] = computer;
                int score = miniMax(2, 0); 
                board[x][y] = '-';
                if(score > bestScore)
                {
                    bestScore = score;
                    bestMove[0] = x;
                    bestMove[1] = y;
                }
            }
        }
    }
    
    board[bestMove[0]][bestMove[1]] = computer;
    printf("\nThe computer went here:\n");
    printBoard();
}

char checkWinner()
{
    char result = ' ';
    
    for(int x = 0; x < 3; x++)
    {
        if(board[0][x] == 'X' && board[1][x] == 'X' && board[2][x] == 'X')
        {
            result = player;
        }

        if(board[0][x] == 'O' && board[1][x] == 'O' && board[2][x] == 'O')
        {
            result = computer;
        }
    }

    for(int x = 0; x < 3; x++)
    {
        if(board[x][0] == 'X' && board[x][1] == 'X' && board[x][2] == 'X')
        {
            result = player;
        }

        if(board[x][0] == 'O' && board[x][1] == 'O' && board[x][2] == 'O')
        {
            result = computer;
        }
    }

    if(board[0][0] == 'O' && board[1][1] == 'O' && board[2][2] == 'O')
    {
        result = computer;
    }
    else if(board[0][0] == 'X' && board[1][1] == 'X' && board[2][2] == 'X')
    {
        result = player;
    }

    if(board[2][0] == 'O' && board[1][1] == 'O' && board[0][2] == 'O')
    {
        result = computer;
    }
    else if(board[2][0] == 'X' && board[1][1] == 'X' && board[0][2] == 'X')
    {
        result = player;
    }

    if(checkEmptySpaces() == 0)
    {
        result = 'T';
    }

    return result;
}

void printWinner(char winner)
{
    
    if(winner == player)
    {
        printf("\nThe winner is the player!!!");
    }

    if(winner == computer)
    {
        printf("\nThe winner is the computer!!!");
    }

    if(winner == 'T')
    {
        printf("\nA tie has been reached!!!");
    }
}

int miniMax(int depth, int isMaximising)
{
    float bestScore;
    
    if(checkWinner() == 'T')
    {
        return 0;
    }

    if(checkWinner() == player)
    {
        return -1;
    }

    if(checkWinner() == computer)
    {
        return 1;
    }

    if(isMaximising == 1)
    {
        bestScore = -INFINITY;
        for(int x = 0; x < 3; x++)
        {
            for(int y = 0; y < 3; y++)
            {
                if(board[x][y] == '-')
                {
                    board[x][y] = computer;
                    int score = miniMax(depth + 1, 0);
                    board[x][y] = '-';
                    if(score > bestScore)
                    {
                        bestScore = score;
                    }
                }
            }
        }

        return bestScore;
    }
    
    if(isMaximising == 0)
    {
        bestScore = INFINITY;
        
        for(int x = 0; x < 3; x++)
        {
            for(int y = 0; y < 3; y++)
            {
                if(board[x][y] == '-')
                {
                    board[x][y] = player;
                    int score = miniMax(depth + 1, 1);
                    board[x][y] = '-';
                    if(score < bestScore)
                    {
                        bestScore = score;
                    }
                }
            }
        }

        return bestScore;
    }
}
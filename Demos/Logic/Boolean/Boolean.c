<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

bool AskIsHappy();
void Greet(int, char[3], char[3]);

int main()
{
    bool isHappy = 1;

    isHappy = AskIsHappy();
    Greet(isHappy, "YAY", "Aww");

    return 0;
}

bool AskIsHappy()
{
    bool ReturnVal = 0;
    char *userInput = malloc(4 * sizeof(char));
    printf("Are you happy?\n");
    scanf("%s", &*userInput);
    
    if(userInput[0] == 'y')
    {
        ReturnVal = 1;
    }else if(userInput[0] == 'n')
    {
        ReturnVal = 0;
    }else if(userInput[0] == 'Y')
    {
        ReturnVal = 1;
    }else if(userInput[0] == 'N')
    {
        ReturnVal = 0;
    }

    free(userInput);
    return ReturnVal;
}

void Greet(int isHappy, char happy[3], char sad[3])
{
    if(isHappy == 1)
    {
        printf("%s\n", happy);
    }

    if(isHappy == 0)
    {
        printf("%s\n", sad);
    }
=======
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

bool AskIsHappy();
void Greet(int, char[3], char[3]);

int main()
{
    bool isHappy = 1;

    isHappy = AskIsHappy();
    Greet(isHappy, "YAY", "Aww");

    return 0;
}

bool AskIsHappy()
{
    bool ReturnVal = 0;
    char *userInput = malloc(4 * sizeof(char));
    printf("Are you happy?\n");
    scanf("%s", &*userInput);
    
    if(userInput[0] == 'y')
    {
        ReturnVal = 1;
    }else if(userInput[0] == 'n')
    {
        ReturnVal = 0;
    }else if(userInput[0] == 'Y')
    {
        ReturnVal = 1;
    }else if(userInput[0] == 'N')
    {
        ReturnVal = 0;
    }

    free(userInput);
    return ReturnVal;
}

void Greet(int isHappy, char happy[3], char sad[3])
{
    if(isHappy == 1)
    {
        printf("%s\n", happy);
    }

    if(isHappy == 0)
    {
        printf("%s\n", sad);
    }
>>>>>>> main
}
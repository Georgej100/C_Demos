#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *saveFile;
    int state;
    char awnser;

    saveFile = fopen("state.txt", "r");
    if(NULL == saveFile)
    {
        perror("Error: ");
        return -1;
    }

    state = getw(saveFile);
    printf("The current state is %i\n Would you like to change it? Y/N \n ", state);

    scanf("%c", &awnser);
    if('Y' == awnser)
    {
        printf("Please enter the new state:\n");
        scanf("%i", &state);
    }

    printf("The state is now %i", state);

    saveFile = fopen("state.txt", "w");
    putw(state, saveFile);
    
    fclose(saveFile);
    saveFile = NULL;
    return 0;
}
#include <stdio.h>
#include <stdlib.h>

void SayHiTo(char[], int);
int AskAge();
char* AskName();




int main()
{
    char* name = AskName();
    int age = AskAge();
    

    SayHiTo(name, age);
    free(name);
    return 0;
}




char* AskName()
{
    char* pname = calloc(12, sizeof(char));

    printf("Whats your name?\n");
    scanf("%s", &pname);

    return(pname);
}

void SayHiTo(char* name, int age)
{
    printf("Hi %s, you are %i years old!", &name, age);
}

int AskAge()
{
    int awnser = 0;

    printf("How old are you?\n");
    scanf("%i", &awnser);

    return awnser;
}
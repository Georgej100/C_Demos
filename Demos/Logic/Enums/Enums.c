#include<stdio.h>
#include<stdlib.h>

int main()
{
    enum anger
    {
        HAPPY,
        ANNOYED,
        FRUSTRATED,
        ANGRY,
        RAGE
    };

    enum anger level = HAPPY;

    printf("You are %i on the anger meter!", level + 1);

    return 0;
}
#include <stdio.h>

int main()
{
    int age;
    char name[20];

    printf("Whats your name? ");
    fgets(name, 20, stdin);
    

    printf("\nWhats your age? ");
    scanf("%i", &age);

    printf("\nYou are %i years old %s", age, name);

    return 0;
}
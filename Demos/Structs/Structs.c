#include <stdio.h>
#include <string.h>

struct Person
{
    char name[14];
    int age;
};

int main()
{

    struct Person user;
    char name[14];
    int age = 0;

    printf("Whats your name?\n");
    scanf("%s", &name);
    printf("How old are you?\n");
    scanf("%i", &age);

    strcpy(user.name, name);
    user.age = age;

    printf("You are:\n");
    printf("%s\n", name);
    printf("%i", age);

    return 0;
}
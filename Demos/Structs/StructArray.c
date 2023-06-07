#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Person
{
    
    int age;
};

int main()
{
    struct Person people[20];
    struct Person *pPerson = &people[1];
    
    pPerson->age = 12;
    printf("%i", pPerson->age);
    
    return 0;
}
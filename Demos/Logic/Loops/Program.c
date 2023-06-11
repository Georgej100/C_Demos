#include<stdio.h>

int main()
{
    for(int x = 0; x < 5; x++)
    {
        printf("This was printed from a for loop!\n");
    }

    printf("\nWill a while loop with the argument of 4 == 3 run?\n");
    while(4 == 3)
    {
        printf("Yes???\n");
    }
    printf("No!\n");

    printf("\nHow many times will a do while loop run if the argument is 4 == 3?\n");
    do
    {
        printf("Once!\n");
    }while(4 == 3);

    return 0;
}
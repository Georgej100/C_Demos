<<<<<<< HEAD
//This was one of my first projects and looking back there was such an easier way to do it!!!

#include <stdio.h>
#include <stdlib.h>

int main()
{
    
    int * input = malloc(10 * sizeof(int)); //Alocates to bytes of memory

    input[0] = 1; //Sets the data
    input[1] = 2;
    input[2] = 3;
    input[3] = 4;
    input[4] = 5;
    input[5] = 6;
    input[6] = 7;
    input[7] = 8;
    input[8] = 9;
    input[9] = 10;

    for(int i = 0; i < 10; i++) //Loops through data and prints
    {
        printf("%i", input[i]);
    }

    free(input); //Frees memory
    input = NULL;
    return 0;
=======
//This was one of my first projects and looking back there was such an easier way to do it!!!

#include <stdio.h>
#include <stdlib.h>

int main()
{
    
    int * input = malloc(10 * sizeof(int)); //Alocates to bytes of memory

    input[0] = 1; //Sets the data
    input[1] = 2;
    input[2] = 3;
    input[3] = 4;
    input[4] = 5;
    input[5] = 6;
    input[6] = 7;
    input[7] = 8;
    input[8] = 9;
    input[9] = 10;

    for(int i = 0; i < 10; i++) //Loops through data and prints
    {
        printf("%i", input[i]);
    }

    free(input); //Frees memory
    input = NULL;
    return 0;
>>>>>>> main
}
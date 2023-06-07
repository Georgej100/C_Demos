<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>

int main()
{

    int lenght = 0;
    int valueIndex = 0;

    printf("How long do you want the array to be?\n");
    scanf("%i", &lenght);
    int * array = calloc(lenght, sizeof(int));

    printf("Start entering the values %i times\n", lenght);

    for(int x = 0; x < lenght; x++)
    {
        scanf("%i", &array[x]);
    }

    for(int i = 0; i < lenght + 1; i++)
    {
        printf("What value index would you like to see?\n");
        scanf("%i", &valueIndex);

        printf("%i\n", array[valueIndex]);
    }

    free(array);
    return 0;
=======
#include <stdio.h>
#include <stdlib.h>

int main()
{

    int lenght = 0;
    int valueIndex = 0;

    printf("How long do you want the array to be?\n");
    scanf("%i", &lenght);
    int * array = calloc(lenght, sizeof(int));

    printf("Start entering the values %i times\n", lenght);

    for(int x = 0; x < lenght; x++)
    {
        scanf("%i", &array[x]);
    }

    for(int i = 0; i < lenght + 1; i++)
    {
        printf("What value index would you like to see?\n");
        scanf("%i", &valueIndex);

        printf("%i\n", array[valueIndex]);
    }

    free(array);
    return 0;
>>>>>>> main
}
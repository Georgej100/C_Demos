#include <stdio.h>
#include <stdlib.h>

int main()
{
    
    int * inputStatic = malloc(1 * sizeof(int));
    int inputDynamic = 8;

    scanf("%i", inputStatic);
    printf("%i\n", *inputStatic);
    

    scanf("%i", &inputDynamic);
    printf("%i", inputDynamic);

    free(inputStatic);
    inputStatic = NULL;
    return 0;
}
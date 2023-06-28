#include<stdio.h>
#include<stdlib.h>

void printArray(int*, int*);
void assignBaseValues(int*, int*);

int main()
{
    int* array = calloc(10, sizeof(int));
    int* size = malloc(sizeof(int));
    *size = 10;
    
    assignBaseValues(array, size);

    printf("Here is the unsorted array:\n");
    printArray(array, size);

    for(int pos = 0; pos < *size; pos++)
    {
        int min = pos;
        
        for(int compPos = pos + 1; compPos < *size; compPos++)
        {
            if(array[compPos] < array[min])
            {
                min = compPos;
            }
        }

        if(min != pos)
        {
            int temp = array[pos];
            array[pos] = array[min];
            array[min] = temp;
        }
    }

    printf("\nHere is the array sorted:\n");
    printArray(array, size);

    free(array);
    return 0;
}

void printArray(int* array, int* size)
{
    
    for(int x = 0; x < *size - 1; x++)
    {
        printf("%i, ", array[x]);
    }

    printf("%i", array[*size - 1]);
    printf("\n");
}

void assignBaseValues(int* array, int* size)
{
    for(int x = 0; x < *size; x++)
    {
        array[x] = (*size - x) * 14; //Added 14 for some variation
    }
}
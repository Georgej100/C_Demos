#include <stdio.h>
#include <stdlib.h>

int Ask();
void Report(int, int, int*, int);

int main()
{
    int input = 0;
    int sum = 0;
    int threshold = 0;
    int count = 0;
    int* list = calloc(threshold + 1, sizeof(int));

    printf("When would you like to stop the program at?\n");
    scanf("%i", &threshold);

    while(sum < threshold)
    {
        input = Ask();
        list[count] = input;
        sum = sum + input;
        Report(sum, input, list, count);
        count++;
    }

    printf("The final sum was %i, %i over the threshold\n", sum, sum - threshold);
    
    free(list);
    return 0;
}

int Ask()
{
    int awnser = 0;
    printf("What would you like to add to the sum?\n");
    scanf("%i", &awnser);

    return awnser;
}

void Report(int sum, int input, int* list, int count)
{
    printf("You just entered %i, and the sum is now %i\n" , input, sum);
    printf("You entered:\n");

    for(int x = 0; x <= count; x++)
    {
        printf("%i\n", list[x]);
    }
}
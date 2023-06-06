#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *file;
    file = fopen("Data.txt", "w");
    if(NULL == file)
    {
        perror("Error ");
        return -1;
    }

    fprintf(file, "Hello world");
    printf("Sucessfully added content");

    fprintf(file, "\nI like dogs!");
    printf("\nSucessfully added content");

    fclose(file);
    file = NULL;
    return 0;
}
#include<stdio.h>

int main()
{
    FILE *fakeFile = fopen("FakeFile.txt", "r");
    if(NULL == fakeFile)
    {
        goto error;
    }

    return 0;

    error:
        printf("File doesn't exist");
}
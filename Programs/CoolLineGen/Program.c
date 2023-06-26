#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    srand(time(0));
    
    while (1)
    {
        if((rand() % 6 ) > 3)
        {
            printf("\\");
        }
        else 
        {
            printf("/");
        }

        _sleep(10);
    }

    return 0;
}
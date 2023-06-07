#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 10;

    int * px = &x;

    printf("%i\n", px); //Address of x via a pointer!
    printf("%i\n", &x); //Address of x via &x 
    printf("%i", *px);  //Data of x via a pointer!

    return 0;
}
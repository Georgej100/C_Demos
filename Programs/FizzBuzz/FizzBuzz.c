<<<<<<< HEAD
#include<stdio.h>
#include<string.h>

int main()
{
    char output[8] = "";
    
    for(int x = 0; x < 100; x++)
    {
        if(x % 3 == 0 && x % 5 == 0)
        {
            printf("FizzBuzz\n");
        }
        else if(x % 3 == 0)
        {
            printf("Fizz\n");
        }
        else if(x % 5 == 0)
        {
            printf("Buzz\n");
        }
        else
        {
            printf("%i\n", x);
        }
    }

    return 0;
=======
#include<stdio.h>
#include<string.h>

int main()
{
    char output[8] = "";
    
    for(int x = 0; x < 100; x++)
    {
        if(x % 3 == 0 && x % 5 == 0)
        {
            printf("FizzBuzz\n");
        }
        else if(x % 3 == 0)
        {
            printf("Fizz\n");
        }
        else if(x % 5 == 0)
        {
            printf("Buzz\n");
        }
        else
        {
            printf("%i\n", x);
        }
    }

    return 0;
>>>>>>> main
}
#include<stdio.h>
#include<stdlib.h>

double Celsius(int input)
{
    double result = 0;
    result = (input * 9 / 5) + 32;

    return result;
}

double Fahrenheit(int input)
{
    double result = 0;
    result = (input - 32) * 5 / 9;

    return result;
}

int main()
{
    char sign;
    double input = 0;

    printf("Please enter the sign your input temperature will be\n");
    scanf("%c", &sign);

    printf("Please input your temperature\n");
    scanf("%lf", &input);

    if(sign == 'C')
    {
        printf("%lf F\n", Celsius(input));
    }else if(sign == 'F')
    {
        printf("%lf C\n", Fahrenheit(input));
    }

    return 0;
}
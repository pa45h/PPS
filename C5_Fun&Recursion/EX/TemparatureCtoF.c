//  write a function to convert celcius temperature into farenheit.
//  F=(C*1.80)+32

#include <stdio.h>

float F(float C)
{
    return ((C * 9 / 5) + 32);
}

int main()
{
    float f, c;

    printf("Enter the temperature in Celceius:");
    scanf("%f", &c);

    f = F(c);

    printf("The temperature in Farenheit= %0.2f", f);

    return 0;
}

// write a prgram to convert centigrade to farenheit.

#include <stdio.h>

int main()
{
    double c,f;
    
    printf("Enter the temperature in centigrade=");
    scanf("%lf", &c);

    f=(c*9/5)+32;
    printf("Given temerature into farenheit=%lf \n", f);
    return 0;
}
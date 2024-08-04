// Ch1: Variables, datatypes, constants and keywords

#include <stdio.h>

int main()
{
    char a = 'C';
    int b = 1;
    float c = 2.3;
    double d = 3.1434567;

    printf("This is CHARACTER: %c \n", a);
    printf("This is INTEGER: %d \n", b);
    printf("This is FLOAT: %f \n", c);
    printf("This is DOUBLE: %lf \n", d);

    int e;
    int f;
    printf("Give number e:");
    scanf("%d", &e);
    printf("Give number f:");
    scanf("%d", &f);

    printf("The sum of e and f is = %d \n", e + f);

    return 0;
}
#include <stdio.h>

int main()
{
    int a = 10;
    int *ptri = &a;

    char b = 'V';
    char *ptrc = &b;

    printf("**********FOR INT********** \n\n");

    printf("Value of ptri : %u \n", ptri);
    ptri++;
    printf("Value of ptri after increament : %u \n", ptri);
    ptri = ptri + 5;
    printf("Value of ptri after increacing 5 memory location : %u \n", ptri);
    ptri--;
    printf("Value of ptri after decreament : %u \n\n", ptri);

    printf("**********FOR CHAR********** \n\n");

    printf("Value of ptrc : %u \n", ptrc);
    ptrc++;
    printf("Value of ptrc after increament : %u \n", ptrc);
    ptrc = ptrc + 5;
    printf("Value of ptrc after increacing 5 memory location : %u \n", ptrc);
    ptrc--;
    printf("Value of ptrc after decreament : %u \n\n", ptrc);

    return 0;
}

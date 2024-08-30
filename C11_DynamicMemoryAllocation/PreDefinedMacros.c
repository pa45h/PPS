#include <stdio.h>

int main()
{
    printf("\nDATE : %s\n", __DATE__);
    printf("TIME : %s\n", __TIME__);
    printf("FILE : %s\n", __FILE__);
    printf("LINE : %d\n", __LINE__);
    printf("STDC : %d\n", __STDC__);

    return 0;
}
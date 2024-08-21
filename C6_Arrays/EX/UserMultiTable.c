// repeat the ex6_1 for a general input provided by the user using scanf.

#include <stdio.h>

int main()
{
    int n, tbl[10];

    printf("Enter the no of the table you want : ");
    scanf("%d", &n);

    for (int i = 0; i < 10; i++)
    {
        tbl[i] = (n * (i + 1));
        printf("%d\n", tbl[i]);
    }
    return 0;
}
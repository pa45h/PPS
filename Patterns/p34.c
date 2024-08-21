// 1
// 62
// 1073
// 131184
// 15141295

#include <stdio.h>

int main()
{
    int i, j, rows, p, k = 1;

    printf("Enter the no of rows:");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++)
    {
        p = k;
        for (j = 1; j <= i; j++)
        {
            printf("%d", p);
            p = p - (rows + j - i);
        }
        k = k + 1 + rows - i;

        printf("\n");
    }
    return 0;
}
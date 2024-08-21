#include <stdio.h>

int main()
{
    int r1, c1, r2, c2;

    printf("Enter the no of rows for A : ");
    scanf("%d", &r1);
    printf("Enter the no of columns for A : ");
    scanf("%d", &c1);

    printf("Enter the no of rows for B : ");
    scanf("%d", &r2);
    printf("Enter the no of columns for B : ");
    scanf("%d", &c2);

    if (c1 != r2)
    {
        printf("\nMultiplication of matrics A & B is not possible.\n");
    }
    else
    {
        int a[r1][c1];

        printf("\n");

        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c1; j++)
            {
                printf("Enter (%d,%d) element of A : ", i, j);
                scanf("%d", &a[i][j]);
            }
        }
        int b[r2][c2];

        printf("\n");

        for (int i = 0; i < r2; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                printf("Enter (%d,%d) element of B : ", i, j);
                scanf("%d", &b[i][j]);
            }
        }

        int ab[r1][c2];

        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                ab[i][j] = 0;
                for (int k = 0; k < r2; k++)
                {
                    ab[i][j] += a[i][k] * b[k][j];
                }
            }
        }
        printf("\nMultiplication of matrics A & B:\n");
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                printf("%d ", ab[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}
#include <stdio.h>

int main()
{
    int m1, n1, m2, n2;

    printf("\n\n======= Matrix Multiplication =======\n\n");

    printf("\nEnter m1: ");
    scanf("%d", &m1);
    printf("\nEnter n1: ");
    scanf("%d", &n1);
    printf("\nEnter m2: ");
    scanf("%d", &m2);
    printf("\nEnter n2: ");
    scanf("%d", &n2);

    if (n1 == m2)
    {
        int A[m1][n2];
        int B[m2][n2];
        int AB[m1][n2];

        printf("\nFor A:\n");
        for (int i = 0; i < m1; i++)
        {
            for (int j = 0; j < n1; j++)
            {
                printf("Enter element-(%d,%d): ", i, j);
                scanf("%d", &A[i][j]);
            }
        }

        printf("\nFor B:\n");
        for (int i = 0; i < m2; i++)
        {
            for (int j = 0; j < n2; j++)
            {
                printf("Enter element-(%d,%d): ", i, j);
                scanf("%d", &B[i][j]);
            }
        }
        for (int i = 0; i < m1; i++)
        {
            for (int j = 0; j < n2; j++)
            {
                int sum = 0;
                for (int k = 0; k < n1; k++)
                {
                    sum += A[i][k] * B[k][j];
                }
                AB[i][j] = sum;
            }
        }

        printf("\nA: \n");
        for (int i = 0; i < m1; i++)
        {
            for (int j = 0; j < n1; j++)
            {
                printf("%d ", A[i][j]);
            }
            printf("\n");
        }

        printf("\nB: \n");
        for (int i = 0; i < m2; i++)
        {
            for (int j = 0; j < n2; j++)
            {
                printf("%d ", B[i][j]);
            }
            printf("\n");
        }

        printf("\nA * B: \n");
        for (int i = 0; i < m1; i++)
        {
            for (int j = 0; j < n2; j++)
            {
                printf("%d ", AB[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("\nA * B is not possible!\n");
    }
    return 0;
}
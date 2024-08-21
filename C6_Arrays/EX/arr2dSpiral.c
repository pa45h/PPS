#include <stdio.h>

int main()
{
    int m, n;

    printf("Enter the no of rows: ");
    scanf("%d", &m);
    printf("Enter the no of columns: ");
    scanf("%d", &n);

    int a[m][n];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Enter (%d,%d) element of array: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("\n");

    int minR = 0;
    int maxR = m - 1;
    int minC = 0;
    int maxC = n - 1;
    int te = m * n;
    int count = 0;

    while (count < te)
    {
        // print minR : minC --> maxC
        for (int j = minC; j <= maxC && count < te; j++)
        {
            printf("%d ", a[minR][j]);
            count++;
        }
        minR++;

        // print maxC : minR --> maxR
        for (int i = minR; i <= maxR && count < te; i++)
        {
            printf("%d ", a[i][maxC]);
            count++;
        }
        maxC--;

        // print maxR : maxC --> minC
        for (int j = maxC; j >= minC && count < te; j--)
        {
            printf("%d ", a[maxR][j]);
            count++;
        }
        maxR--;

        // print minC : maxR --> minR
        for (int i = maxR; i >= minR && count < te; i--)
        {
            printf("%d ", a[i][minC]);
            count++;
        }
        minC++;
    }

    return 0;
}
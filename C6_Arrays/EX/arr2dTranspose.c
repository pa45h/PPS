#include <stdio.h>

int main()
{
    int m, n;

    printf("Enter the no of rows: ");
    scanf("%d", &m);
    printf("Enter the no of columns: ");
    scanf("%d", &n);

    int a[m][n];
    int aT[n][m];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Enter (%d,%d) element of array: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("\n");

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            aT[j][i]=a[i][j];
        }
        
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ",aT[i][j]);
        }
        printf("\n");
        
    }
    

    return 0;
}
#include <stdio.h>
#include <limits.h>

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

    int max = INT_MIN;
    int flag = 0;
    int sum;

    for (int i = 0; i < m; i++)
    {
        sum = 0;
        for (int j = 0; j < n; j++)
        {
            sum = sum + a[i][j];
        }
        if (sum > max)
        {
            max = sum;
            flag = i;
        }
    }

    printf("\n Max sum of the row= %d \n", max);
    printf("\n No of row= %d \n", flag);

    return 0;
}
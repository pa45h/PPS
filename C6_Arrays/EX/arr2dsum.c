#include<stdio.h>

int main()
{
    int m,n;

    printf("Enter the no of rows: ");
    scanf("%d",&m);
    printf("Enter the no of columns: ");
    scanf("%d",&n);

    int a[m][n];
    int b[m][n];
    int c[m][n];
    
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("Enter (%d,%d) element of 1st array: ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("Enter (%d,%d) element of 2nd array: ",i,j);
            scanf("%d",&b[i][j]);
        }
    }

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("\nThe sum of given two array: \n\n");

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",c[i][j]);
        }
            printf("\n");
    }


    return 0;
}
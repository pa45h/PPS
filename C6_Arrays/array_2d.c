#include <stdio.h>

void displayMatrix(int matrix[3][4]) // fun to print matrix
{

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf(" %d", matrix[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int matrix[3][4];
    int i, j;

    for (i = 0; i < 3; i++) // loop to get matrix elements from user 
    {
        for (j = 0; j < 4; j++)
        {
            printf("Enter (%d,%d) element of Metrix : ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("Your Matrix: \n");

    displayMatrix(matrix);

    return 0;
}
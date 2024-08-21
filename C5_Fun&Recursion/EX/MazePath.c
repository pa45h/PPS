// Maze Path: if you are standing on (1,1) cordinates of maze and want to go to (row,col) cordinates by using only down and right ways, how many ways it would be needed?

#include <stdio.h>

int mazePath(int cr, int cc, int er, int ec)
// cr= current row,    cc= current column,    er= ending row,    ec= ending column;
{
    int down = 0;
    int right = 0;

    if (cr == er && cc == ec)
    {
        return 1;
    }
    if (cr == er)
    {
        right += mazePath(cr, cc + 1, er, ec);
    }
    if (cc == ec)
    {
        down += mazePath(cr + 1, cc, er, ec);
    }
    if (cr < er && cc < ec)
    {
        right += mazePath(cr, cc + 1, er, ec);
        down += mazePath(cr + 1, cc, er, ec);
    }
    return down + right;
}

int main()
{
    int row, col;

    printf("Enter rows of the maze: ");
    scanf("%d", &row);

    printf("Enter columns of the maze: ");
    scanf("%d", &col);

    int noOfWays = mazePath(1, 1, row, col);

    printf("No of ways to go to the end = %d ", noOfWays);
}
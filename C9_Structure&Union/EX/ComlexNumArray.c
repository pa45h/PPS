// create an array of 5 comlex numbers and display them with the help of a display function.

#include <stdio.h>

typedef struct comlexNum
{
    int real;
    int img;
} cmp;

void display(cmp c[])
{
    for (int i = 0; i < 5; i++)
    {
        printf("c%d = %d + %di\n", i + 1, c[i].real, c[i].img);
    }
}

int main()
{
    cmp c[5];
    for (int i = 0; i < 5; i++)
    {
        printf("For c%d:\n", i + 1);
        printf("Real part: ");
        scanf("%d", &c[i].real);
        printf("Imaginary part: ");
        scanf("%d", &c[i].img);
    }
    display(c);
    return 0;
}
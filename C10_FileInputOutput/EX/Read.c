#include <stdio.h>

int main()
{
    int a, b, c;
    FILE *fptr = fopen("Read.txt", "r");
    fscanf(fptr, "%d %d %d", &a, &b, &c);
    printf("%d %d %d", a, b, c);
    return 0;
}
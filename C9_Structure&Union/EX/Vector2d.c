// Create 2d vector using structure.

#include<stdio.h>

struct vector
{
    int x;
    int y;
}v1; 

int main()
{
    v1.x=2;
    v1.y=3;

    printf("Vector= %di + %dj",v1.x,v1.y);
    return 0;
}
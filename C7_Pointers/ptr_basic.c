#include <stdio.h>

int main()
{
    int a = 5;
    int *ptr = &a;
    int *nullPtr = NULL;

    printf("Value of a : %d\n", a);
    printf("Address of a : %u\n", &a);

    printf("Value of ptr : %u\n", ptr);
    printf("Address of ptr : %u\n", &ptr);
    printf("Value of a : %u\n", *ptr);

    printf("Value of ptr : %u\n", *(&ptr));
    printf("Value of a : %d\n", *(&a));

    printf("Value of Null Pointer : %d\n", nullPtr);
    printf("Address of Null Pointer : %u\n", &nullPtr);
    
    return 0;
}
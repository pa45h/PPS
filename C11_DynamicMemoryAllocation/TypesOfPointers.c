#include <stdio.h>

// int *ptr()
// {
//     int x=10;
//     return &x;       Dandling pointer
// }

int main()
{
    int i = 13;
    char c = 'P';
    float f = 3.14;
    void *vP;       // Void Pointer
    
    int *wP;        // Uninitialized pointer is called wild pointer

    float *nP = NULL; // NULL Pointer

    vP = &i;            // vP is no longer a void pointer
    printf("\nVoid ptr: %d", *(int*)vP);
    vP = &c;            // vP is no longer a void pointer
    printf("\nVoid ptr: %c", *(char*)vP);

    nP = &f;        // nP is no longer a null ptr.
    printf("\nNULL ptr: %.2f", *(float*)nP);

    {
        int y=10;
        int *dP=&y;     // Dangling Pointer
    }

    return 0;
    
}
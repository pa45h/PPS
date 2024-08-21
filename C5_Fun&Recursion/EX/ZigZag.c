// Based on pre-in-post

#include <stdio.h>

void ZigZag(int n)
{
    if (n == 0)
        return;

    printf("%d ", n);
    ZigZag(n - 1);

    printf("%d ", n);
    ZigZag(n - 1);

    printf("%d ", n);
    ZigZag(n - 1);

    return;
}

int main()
{
    int n;

    printf("Enter a no: ");
    scanf("%d", &n);

    ZigZag(n);

    return 0;
}
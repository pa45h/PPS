#include <stdio.h>

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};

    printf("%d ", arr[0]);
    printf("%d ", arr[1]);
    printf("%d ", arr[2]);
    printf("%d ", arr[3]);
    printf("%d\n\n", arr[4]);

    printf("Memory storage of array = %d\n", sizeof(arr));
    printf("Size of array = %d\n", (sizeof(arr) / sizeof(arr[0])));

    return 0;
}
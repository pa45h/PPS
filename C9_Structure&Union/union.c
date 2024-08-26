#include <stdio.h>
#include <string.h>

union data
{
    int i;        // 4 bytes
    float f;      // 4 bytes
    int arr[5];   // 20 bytes
    char str[15]; // 15 bytes
} u;              // sizeof(u) = MaxOf(all) = 20 bytes

struct dataS
{
    int i;        // 4 bytes
    float f;      // 4 bytes
    int arr[5];   // 20 bytes
    char str[15]; // 15 bytes
} s;              // sizeof(s) = 4+4+20+15 = 44 bytes

int main()
{
    u.i = 13;
    printf("Integer = %d\n", u.i);

    u.f = 13.31;
    printf("Float = %f\n", u.f);

    u.arr[0] = 1;
    u.arr[1] = 2;
    u.arr[2] = 3;
    u.arr[3] = 4;
    u.arr[4] = 5;

    for (int i = 0; i < 5; i++)
    {
        printf("Array[%d] = %d\n", i, u.arr[i]);
    }

    strcpy(u.str, "Hello!");
    printf("String = %s\n", u.str);

    printf("Size of Union = %d\n", sizeof(u));
    printf("Size of Structure = %d\n", sizeof(s));

    return 0;
}
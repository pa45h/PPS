// write a program change the value of a variable to ten times of its current value. write a function to and pass the value by reference.

#include <stdio.h>

int tenTimes(int *n)
{
    *n = (*n) * 10;
    return *n;
}

int main()
{
    int n;

    printf("Enter a num: ");
    scanf("%d", &n);

    printf("Before= %d\n", n);

    printf("After= %d\n", tenTimes(&n));

    return 0;
}
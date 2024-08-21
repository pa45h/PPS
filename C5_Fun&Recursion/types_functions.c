// Types of user defined functions:

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// (1) Function without argument & without return value

void greet()
{
    printf("Hello C!\n");
}

// (2) Function without argument & with return value

int randNum()
{
    int num;
    srand(time(0));
    num = rand() % 100;
    printf("Random Number=%d\n", num);
    return num;
}

// (3) Function with argument & without return value

void printStar()
{
    int n;
    printf("Enter the number of star you want to print:");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("%c\n", '*');
    }
}

// (4) Function with argument & with return value

int sum(int a, int b)
{

    int c = a + b;
    return c;
}

int main()
{
    int a, b, add;

    greet();

    randNum();

    printStar();

    printf("Enter Two Numbers:");
    scanf("%d %d", &a, &b);

    add = sum(a, b);
    printf("The sum of the two numbers= %d\n", add);

    return 0;
}

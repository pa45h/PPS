// You have to create a command line utility to add/subtract/divide/multiply two numbers.
// For example:
// >> Command.c 45 + 4
//>> 49

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int n1 = atoi(argv[1]);
    char *op = argv[2];
    int n2 = atoi(argv[3]);

    if (strcmp(op, "+") == 0)
    {
        printf("\n%d + %d = %d", n1, n2, n1 + n2);
    }
    else if (strcmp(op, "-") == 0)
    {
        printf("\n%d - %d = %d", n1, n2, n1 - n2);
    }
    else if (strcmp(op, "*") == 0)
    {
        printf("\n%d * %d = %d", n1, n2, n1 * n2);
    }
    else if (strcmp(op, "/") == 0)
    {
        printf("\n%d / %d = %d", n1, n2, n1 / n2);
    }

    return 0;
}
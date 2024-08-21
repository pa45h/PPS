#include<stdio.h>

int main()
{
    int a=2;
    printf("%d %d %d \n", a, ++a, a++);
    return 0;
}

// In GCC, the arguments will be evaluated from right to left.

// Here's a speculative evaluation order:

// 1. The third argument a++ is evaluated first. It increments a to 3 but returns the previous value 2.
// 2. The second argument ++a is evaluated next. It increments a from 3 to 4 and evaluates to 4.
// 3. The first argument a is evaluated last. It has been incremented to 4 by the previous ++a.

// The printf() function then prints these values in the specified format, resulting in 4 4 2.
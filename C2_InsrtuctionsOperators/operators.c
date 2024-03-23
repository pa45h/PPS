// Operetors:-

#include <stdio.h>

int main()
{
    // (1) Arithmatic operators:

    int a = 10;
    int b = 5;

    printf("(1) Arithmatic operators:\n\n");

    printf("Addition= %d\n", a + b);
    printf("subtraction= %d\n", a - b);
    printf("Multiplication= %d\n", a * b);
    printf("Division= %d\n", a / b);
    printf("Modulus= %d\n\n", a % b); // 5%2=1

    // (2) Relational operators:

    printf("(2) Relational operators:\n\n");

    printf("a==b : %d\n", a == b);
    printf("a!=b : %d\n", a != b);
    printf("a>b : %d\n", a > b);
    printf("a<b : %d\n", a < b);
    printf("a>=b : %d\n", a >= b);
    printf("a<=b : %d\n\n", a <= b);

    // (3) Logical operetors:

    printf("(3) Logical operetors:\n\n");

    int c = 0;

    printf("a&&b (AND): %d\n", a && b);
    printf("a||b (OR): %d\n", a || b);
    printf("!(a&&b) (NAND): %d\n", !(a && b));
    printf("!(a||b) (NOR): %d\n\n", !(a || b));

    printf("a&&c (AND): %d\n", a && c);
    printf("a||c (OR): %d\n", a || c);
    printf("!(a&&c) (NAND): %d\n", !(a && c));
    printf("!(a||c) (NOR): %d\n\n", !(a || c));

    return 0;
}
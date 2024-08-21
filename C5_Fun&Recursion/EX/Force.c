// write a function to calculate force of attraction on a body of mass m by earth(g=9.8).
// F=mg.

#include <stdio.h>

float F(float m)
{
    return (m * 9.8);
}

int main()
{
    float f, m;

    printf("Enter the mass, m :");
    scanf("%f", &m);

    f = F(m);

    printf("The force on the body = %0.2f N", f);

    return 0;
}

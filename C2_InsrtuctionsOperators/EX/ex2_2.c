// Explain step by step the evaluation of 3*x / y - z + k, where x=2,y=3,z=3,k=1.

#include <stdio.h>

int main()
{
    int x = 2;
    int y = 3;
    int z = 3;
    int k = 1;

    printf("3*x/y-z+k= %d\n", 3 * x / y - z + k);
    printf("3*x/y+z+k= %d\n", 3 * x / y + z + k);
    return 0;

    /*explanation:
        =3*2/3-3+1  (Left-->Right)
        =6/3-3+1
        =2-3+1
        =-1+1
        =0

        =3*2/3+3+1  (Left-->Right)
        =6/3+3+1
        =2+3+1
        =6
    */
}
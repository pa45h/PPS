/* While loop:
                while(condition)
                {
                    code;
                }

*/

#include <stdio.h>

int main()
{
    int i = 0;

    while (i <= 10)
    {
        printf("%d\n", i);
        i = i + 1; // also writter as i++.
    }

    return 0;
}
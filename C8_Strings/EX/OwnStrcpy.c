//  write your own version of strcpy().

#include <stdio.h>
#include <string.h>

void my_strcpy(char *src, char *trgt)
{
    while (*src)
    {
        *trgt = *src;
        trgt++;
        src++;
    }
    *trgt = '\0';
}

int main()
{
    char src[50], trgt[50];

    printf("Enter the string: ");
    gets(src);

    my_strcpy(src, trgt);

    printf("copied string:\n ");
    puts(trgt);

    return 0;
}
#include <stdio.h>

int main()
{
    char str1[] = {'H', 'e', 'l', 'l', 'o', '\0'};
    printf("%s \n", str1); // have to put NULL manualy

    char str2[] = {"Hello Parth"};
    printf("%s \n", str2); // puts NULL('\0') automaticaly

    char str3[20];
    printf("Enter a string: ");
    scanf("%s", str3);
    printf("%s \n", str3); // prints till occurs space (single word)

    char *strptr = "I am learning C";
    printf("%s", strptr); // initializing using pointer

    return 0;
}
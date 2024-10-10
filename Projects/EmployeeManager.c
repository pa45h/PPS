// Dynamic Memory Allocation
// ABC Pvt Ltd. manages employee records of other companies.
// Employee Id can be of any length and it can contain any character
// For 3 employees, you have to take 'length of employee id' as input in a length integer variable.
// Then, you have to take employee id as an input and display it on screen.
// Store the employee id in a character array which is allocated dynamically.
// You have to create only one character array dynamically

// EXAMPLE:
// Employee 1:
// Enter no of characters in your eId
// 45
// Dynamically allocate the character array.
// take input from user

// Employee 2:
// Enter no of characters in your eId
// 4
// Dynamically allocate the character array.
// take input from user

// Employee 3:
// Enter no of characters in your eId
// 9
// Dynamically allocate the character array.
// take input from user

#include <stdio.h>
#include <stdlib.h>

typedef struct employee
{
    int IdLen;
    char *ptr;
} emp;

int main()
{
    emp e[3];

    for (int i = 0; i < 3; i++)
    {
        printf("\nEnter the length of eId for Employee-%d : ", i + 1);
        scanf("%d", &e[i].IdLen);

        e[i].ptr = (char *)malloc(e[i].IdLen * sizeof(char));

        printf("\nEnter eId for Employee-%d : ", i + 1);
        scanf("%s", e[i].ptr);

    }

    for (int i = 0; i < 3; i++)
    {
        printf("\n\nId length of Employee-%d = %d", i + 1, e[i].IdLen);
        printf("\nId Employee-%d = %s", i + 1, e[i].ptr);
        free(e[i].ptr);
    }

    return 0;
}
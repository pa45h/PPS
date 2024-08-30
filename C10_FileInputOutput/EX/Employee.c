#include <stdio.h>

typedef struct Employee
{
    char name[50];
    float slry;
} emp;

int main()
{
    emp e1, e2;

    printf("Enter name of e1 : ");
    scanf("%s", e1.name);
    printf("Enter salary of e1 : ");
    scanf("%f", &e1.slry);

    printf("Enter name of e2 : ");
    scanf("%s", e2.name);
    printf("Enter salary of e2 : ");
    scanf("%f", &e2.slry);

    FILE *fptr = fopen("Employee.txt", "w");

    fprintf(fptr, "%s, %.2f\n", e1.name, e1.slry);
    fprintf(fptr, "%s, %.2f\n", e2.name, e2.slry);
    return 0;
}
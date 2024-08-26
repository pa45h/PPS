#include <stdio.h>

struct employee
{
    int id;
    int strtYr;
    float strtSlry;
    float crntSlry;
};

int main()
{
    int n;

    printf("How many employees do you have? ");
    scanf("%d", &n);

    struct employee e[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter details for employee-%d :\n", i + 1);
        printf("Id No.:");
        scanf("%d", &e[i].id);
        printf("Starting Year:");
        scanf("%d", &e[i].strtYr);
        printf("Starting salary:");
        scanf("%f", &e[i].strtSlry);
        printf("Current salary:");
        scanf("%f", &e[i].crntSlry);
        printf("\n");
    }
    printf("\n");

    for (int i = 0; i < n; i++)
    {
        printf("%d\t\t%d\t\t%f\t\t%f\n", e[i].id, e[i].strtYr, e[i].strtSlry, e[i].crntSlry);
    }
    return 0;
}
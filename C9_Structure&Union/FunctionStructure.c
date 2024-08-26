#include <stdio.h>
#include <string.h>

struct student
{
    int id;
    char name[50];
    float marks;

} s1;

void studentInfo(struct student s1)
{
    s1.id = 73;
    strcpy(s1.name, "Parth");
    s1.marks = 8.3;

    printf("%d\t%s\t%0.2f\n", s1.id, s1.name, s1.marks);
}

int main()
{
    studentInfo(s1);
    return 0;
}
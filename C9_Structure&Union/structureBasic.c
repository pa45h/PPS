#include <stdio.h>
#include <string.h>

struct student
{
    int id;
    char name[50];
    float marks;

} s3; //     declaring variable s1 along with structure

int main()
{
    struct student s1 = {1, "Parth", 89}; //    declaring with initialization

    struct student s2; //   declaring variable s2 in main fun
    printf("Enter 2nd student's id no.: ");
    scanf("%d", &s2.id);
    printf("Enter 2nd student's name: ");
    scanf("%s", s2.name);
    printf("Enter 2nd student's marks: ");
    scanf("%f", &s2.marks);

    printf("Enter 3rd student's id no.: ");
    scanf("%d", &s3.id);
    printf("Enter 3rd student's name: ");
    scanf("%s", s3.name);
    printf("Enter 3rd student's marks: ");
    scanf("%f", &s3.marks);

    struct student s4; //  declaring and initializing seperatly
    s4.id = 4;
    strcpy(s4.name,"Name");
    s4.marks = 100;

    printf("Details of students:\n\n");
    printf("Id No.\tName\tMarks\n");
    printf("%d\t%s\t%f\n", s1.id, s1.name, s1.marks);
    printf("%d\t%s\t%f\n", s2.id, s2.name, s2.marks);
    printf("%d\t%s\t%f\n", s3.id, s3.name, s3.marks);
    printf("%d\t%s\t%f\n", s4.id, s4.name, s4.marks);

    return 0;
}
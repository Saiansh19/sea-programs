#include<stdio.h>
#include<string.h>

struct student 
{
    char name[100];
    int rollNo;
    float marks;
} student1;

int main()
{
    strcpy(student1.name, "Arjun");
    student1.rollNo = 23;
    student1.marks = 89.5;

    printf("Name: %s\n", student1.name);
    printf("Roll Number: %d\n", student1.rollNo);
    printf("Marks: %.2f\n", student1.marks);

    return 0;
}
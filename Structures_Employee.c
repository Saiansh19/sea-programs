#include<stdio.h>
#include<string.h>

struct employee {
    char name[100];
    int empNo;
    float salary;
} emp1;

int main() {
    strcpy(emp1.name, "Rahul");
    emp1.empNo = 1984;
    emp1.salary = 8000;

    printf("Name: %s\n", emp1.name);
    printf("Employee Number: %d\n", emp1.empNo);
    printf("Salary: %.2f\n", emp1.salary);

    return 0;
}

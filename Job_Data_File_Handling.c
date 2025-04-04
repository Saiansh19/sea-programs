#include<stdio.h>
#include<string.h>

union JobData {
    char title[50];
    float salary;
    int experience;
} job;

int main() {
    FILE *file;
    char filename[] = "employee_data.txt";

    file = fopen(filename, "w");
    if (file == NULL) {
        printf("Error opening file for writing\n");
        return 1;
    }

    strcpy(job.title, "Software Engineer");
    fprintf(file, "Job Title: %s\n", job.title);

    job.salary = 75000.00;
    fprintf(file, "Salary: %.2f\n", job.salary);

    job.experience = 5;
    fprintf(file, "Years of Experience: %d\n", job.experience);

    fclose(file);

    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error opening file for reading\n");
        return 1;
    }

    printf("\nEmployee Data from file:\n");
    char buffer[100];
    while (fgets(buffer, sizeof(buffer), file) != NULL) {
        printf("%s", buffer);
    }
    printf("\n");

    fclose(file);

    return 0;
}

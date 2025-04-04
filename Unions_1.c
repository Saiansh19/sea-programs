#include<stdio.h>
union unionJob
{
    char name[32];
    float salary;
    int workerNo;
} uJob;

struct structJob
{
    char name[32];
    float salary;
    int workerNo;
}sJob;

int main()
{
    printf("Size of Union = %d bytes", sizeof(uJob));
    printf("\nSize of Structure = %d bytes", sizeof(sJob));
    return 0;
}
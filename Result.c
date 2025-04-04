#include<stdio.h>
int main()
{
    int n;
    int sum=0;
    printf("Enter a number\n");
    scanf("%d", &n);
    sum=((n+1)/2)*n;
    printf("Result: %d", sum);
}
#include <stdio.h>
int main()
{
    int n2, sum2=0;
    printf("Enter the value of limit of sum of odd numbers:");
    scanf("%d", &n2);

    int k=0;

    for (;k<=n2;k+=2)
    {
        sum2=sum2+k;
    }
    printf("Sum of odd numbers using for loop is= %d", sum2);
}
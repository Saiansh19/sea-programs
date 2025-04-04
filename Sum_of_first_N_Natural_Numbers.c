#include <stdio.h>
int main()
{
    int n, sum=0;
    printf("Enter the limit of the numbers using while loop");
    scanf("%d", &n);
    
    int i=1;
    while (i<=n)
    {
        sum+=i;
        i++;
    }
    printf("Sum of numbers using while loop= %d\n",sum);
}
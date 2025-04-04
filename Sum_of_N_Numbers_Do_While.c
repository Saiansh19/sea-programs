#include <stdio.h>
int main()
{
    int n,i=1,sum=0,count=0;
    printf("Enter a number");
    scanf("%d", &n);
    do
    {
        if (i%2 != 0)
        {
            sum+=i;
            count++;
        }
        i++;
    } 
    while (count<n);
    {
    printf("%d\n", sum);
    }
    return 0;
}
#include <stdio.h>
int main()
{
    int a,b;
    printf("enter 2 numbers");
    scanf("%d", &a);
    scanf("%d", &b);
    if ((a%2)==0)
    {
        printf("the number is even");
    }
    else
    {
        printf("the given number is odd");
    }
}
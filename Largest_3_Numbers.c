#include <stdio.h>

int main()
{ 
    int a,b,c;
    printf("Enter the three numbers");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    if (a>b)
    {
        if (a>c)
        {
            printf("The biggest number is %d", a);
        }
    }
    if (b>a)
    {
        if (b>c)
        {
            printf("The biggest number is %d", b);
        }
    }
    if (c>a)
    {
        if (c>b)
        {
            printf("The biggest number is %d", c);   
        }
    }
}
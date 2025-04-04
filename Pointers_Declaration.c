#include<stdio.h>
int main()
{
    int a=3;
    int b;
    int *p=&a;
    int *q=p;
    int *r=&b;
    printf("Enter the values");
    scanf("%d",r);
    printf("%d %d\n",a,b);
    printf("%d %d %d\n", p,q,r);
    printf("%d %d %d\n", *p,*q,*r);
    q=&b;

    if (p==q)
    {
        printf("1\n");
    }
    if (q==r)
    {
        printf("2\n");
    }
    if (*p==*q)
    {
        printf("3\n");
    }
    if (*q==*r)
    {
        printf("4\n");
    }
    if (*p==*r)
    {
        printf("5\n");
    }
}

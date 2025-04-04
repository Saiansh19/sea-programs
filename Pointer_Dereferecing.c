#include<stdio.h>
int main()
{
    int x=50, deref;
    int *ptr;
    ptr=&x;
    deref=ptr;
    printf("%d\n",deref);
    printf("%d\n", x);
    printf("%d\n", *x);
    printf("%d\n", ptr);
    printf("%d\n", *ptr);
    printf("%d\n", &ptr);
    printf("%d\n", &x);
}
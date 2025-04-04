#include<stdio.h>
#include<conio.h>
void swap(int a, int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("\n Value of a:%d",a);
    printf("\n Value of b:%d",b);
}

void main()
{
    int a=100, b=200;
    swap(a,b);
    printf("\n Value of a:%d",a);
    printf("\n Value of b:%d",b);
    getch();
}
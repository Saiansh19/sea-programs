#include<stdio.h>
int main()
{
    int a =20, b=10;
    int add, sub, div, mul, mod;
    int *x, *y;
    x=&a;
    y=&b;
    add=*x + *y;
    sub=*x - *y;
    mul=*x * *y;
    div=*x / *y;
    mod=*x % *y;

    printf("Addition=%d\n", add);
    printf("Subtraction=%d\n", sub);
    printf("Multiplication=%d\n", mul);
    printf("Division=%d\n", div);
    printf("Modulo=%d\n", mod);
    return 0;
}
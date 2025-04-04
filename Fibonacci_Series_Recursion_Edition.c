#include<stdio.h>
void fib(int n)
{
    static int n1=0, n2=1,n3;
    for (;n>0;n--)
    {
        n3=n1+n2;
        n1=n2;
        n2=n3;
        printf("%d", n3);
        fflush(stdout);
    }
}

int main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Fibonacci Series: ");
    printf("%d %d", 0,1);
    fib(n-2);
    return 0;
}
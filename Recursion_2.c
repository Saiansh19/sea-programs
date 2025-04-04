#include<stdio.h>
int factorial(int);
int main()
{
    int num=0, fact;
    printf("Enter a positive number");
    scanf("%d", &num);
    fact=factorial(num);
    printf("\n Factorial of %d=%5d\n", num, fact);
}

int factorial(int n)
{
    int result;
    if (n==0)
    {
        return(1);
    }
    else
    {
        result=n*factorial(n-1);
    }
    return result;   
}
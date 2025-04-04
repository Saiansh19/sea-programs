#include<stdio.h>

int factorial(int n, int *fact)
{
    *fact = 1;
    for(int i = 1; i <= n; i++) 
    {
        *fact *= i;
    }
    return *fact;
}

int main() {
    int num = 5;
    int result;
    factorial(num, &result);
    printf("Factorial of %d is %d \n", num, result);
    return 0;
} 
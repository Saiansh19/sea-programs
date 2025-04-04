#include <stdio.h>
int main()
{
    int n,rem,sum=0;
    printf(" Enter the number: ");
    scanf("%d",&n);

    for(int i=n; i>0 ;i/=10)
    {
        rem=i%10;
        sum=sum*10+rem;
    }
    if(sum==n)
        printf("Palindrome number");
    else
        printf(" Not a Palindrome number");
}
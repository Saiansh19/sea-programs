#include <stdio.h>

int main()
{
    int s;
    int b;
    scanf("%d",&s);
    if(s>=5000)
    {
        b=s*0.1;
        printf("Bonus received is: %d",b);
    }
    else
    {
        printf("no bonus");
    }
}
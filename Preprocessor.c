#include<stdio.h>
#define rectangulararea(a,b) (a*b)
#define upper 2

int main()
{
    int a, b, area;
    #ifdef upper
    printf("enter a&b values");
    scanf("%d%d", &a,&b);
    area=rectangulararea(a,b);
    printf("area of rectangle is:  %d", area);
    #endif
    printf("\n end of the program");
    return 0;
}
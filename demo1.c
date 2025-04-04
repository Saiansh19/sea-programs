#include <stdio.h>
#include <math.h>

int main()
{
	int a=0, b=0, w=0, y=0;
    float c=0, d=0, x=0, z=0;

    scanf("%d %d", &a,&b);
    scanf("%f %f", &c, &d);
    
    w=a+b;
    x=c+d;
    y=a-b;
    z=c-d;
    
    printf("%d %d\n", w, y);
    printf("%f %f", x, z);    
    
    return 0;
}
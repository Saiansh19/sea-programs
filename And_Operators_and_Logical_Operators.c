#include <stdio.h>

int main()
{
    int x=20;
    int y=25;
    int z=18;
    if (x<y || y==z)
    {
        printf("Either x is lesser than y, or y is equal to z \n");
    }
    else if (x>15 && z<20)
    {
        printf("x is greater than 15 and z is lesser than 20 \n");
    }
    else if (!(y==30))
    {
        printf("y is not equal to 30 \n");
    }
}
#include <stdio.h>
int main()
{
    for (int i=1; i<=3; i++)
    {
        for (int j=1; j<=3; j++)
        {
            printf("(%d,%d)", i,j);
            if (i==2 && j==2)
            {
                break;
            }
        }
    printf("\n");
    }
return 0;
}

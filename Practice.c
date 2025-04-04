#include <stdio.h>

int main()

{

   int x = 2, y = 1, z = 6;

   int a = x && y && z++;

   printf("%d", z);

    return 0;

}
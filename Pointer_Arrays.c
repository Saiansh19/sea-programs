#include<stdio.h>
int main()
{
    int arr[]={10,20,36,72,45,35};
    int *j, *k;
    j=&arr[4];
    k=(arr+4);

    if (j==k)
    {
        printf("the two pointers point to the same location");
    }
    else
    {
        printf("The two pointers do not point at the same location");
    }
}
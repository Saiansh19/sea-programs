#include<stdio.h>
int main()
{
    int n, i, arr[3], largest, smallest;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    for (i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    largest=smallest=arr[0];
    for (i=1; i<n; i++)
    {
        if(arr[i]>largest)
        {
            largest=arr[i];
        }
        if (arr[i]<smallest)
        {
            smallest=arr[i];
        }
    }
    printf("Largest : %d\nSmallest: %d\n", largest, smallest);
}
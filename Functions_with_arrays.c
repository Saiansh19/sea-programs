#include<stdio.h>
void func(int arr[2])
{
    printf("Size of arr[] in func(): %d bytes", sizeof(arr));
}

int main ()
{
    int arr[8]={1,2,3,4,5,6,7,8};
    printf("Size of arr[] in main(): %d bytes \n", sizeof(arr));
    func(arr);
    return 0;
}
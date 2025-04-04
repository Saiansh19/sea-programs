#include<stdio.h>
#include<string.h>
int main()
{
    char source[]="Hello BCA";
    char destination[20];
    strncpy(destination,source, 5);
    printf("strcpy(): %s\n",destination);
} 
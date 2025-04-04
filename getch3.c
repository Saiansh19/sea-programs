#include<stdio.h>
#include<conio.h>
int main()
{
    char character;
    printf("enter any random character between a-z: ");
    character=getchar();
    printf("The entered character is: ");
    putchar(character);
    getchar();
    return 0;
}
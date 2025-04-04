#include<stdio.h>
#include<conio.h>
int main()
{
    char character, character1;
    printf("Enter any random character between a-z: ");
    character1=getch();
    character = getchar();
    printf("The entered character is ");
    putch(character1);
    putchar(character);
    getchar();
    return 0;
}
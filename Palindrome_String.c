#include<stdio.h>
#include<string.h>
#include<conio.h>

int main()
{
    int comp;
    char S1[]="abcd";
    char S2[10];
    strcpy(S2,S1);
    strrev(S2);
    comp=strcmp(S2,S1);
    if (comp==0)
    {
        printf("The String is Palindrome");
    }
    else
    {
        printf("The String is not a Palindrome");
    }
}
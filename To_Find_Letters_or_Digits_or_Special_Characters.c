/*write a program to find letters and digits and special characters*/
#include<stdio.h>
int main()
{
    char word;
    printf("Enter a word: ");
    scanf("%c", &word);
    if (word>'a' && word<'z' || word>'A' && word>'Z')
    {
        printf("The word consists of letters");
    }
    else if (word>='0' && word<='9')
    {
        printf("The word consists of digits");
    }
    else
    {
        printf("The word consists of special characters");
    }
}

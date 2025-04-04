#include<stdio.h>
#include<string.h>
struct Books
{
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
};

void printBook(struct Books book);
int main()
{
    struct Books Book1;
    struct Books Book2;
    strcpy(Book1.title, "C Programming");    
};
/**************************************************************
142.13. Let us work on the menu of a library.
Create a structure containing book information like accession number,
name of author, book title and flag to know whether book is issued or not.
Create a menu in which the following can be done.
1 - Display book information
2 - Add a new book
3 - Display all the books in the library of a particular author
4 - Display the number of books of a particular title
5 - Display the total number of books in the library
6 - Issue a book
(If we issue a book, then its number gets decreased by 1 and if we add a book, its number gets increased by 1)

Author : Rohit Kumar
Ad.No. : 2019B101051
**************************************************************/
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int f=0;
/**************************************************************/
 struct book
 {
     int accno;
     char tittle[20];
     char author[20];
     int num=0;
 }b[2];

/**************************************************************/
void displaybookinformation()
{
    int temp,i=0,c=0;
    printf("Enter Accession Number :\n");
    scanf("%d",&temp);
    while (c == 0)
    {
        if (b[i].accno == temp)
        {
            printf("%s\t%s\n",b[i].tittle,b[i].author);
            c++;
        }
        i++;
    }
}
/**************************************************************/
void displayall()
{
    printf("Total Available Books:\n");
    scanf("%d",&temp);
    while (c == 0)
    {
        if (b[i].accno == temp && b[i].num == 0)
        {
            printf("%s\t%s\n",b[i].tittle,b[i].author);
            c++;
        }
        i++;
    }
}
/**************************************************************/
void displaybytittle()
{
    int i=0,c=0;
    char tit[20];
    printf("Enter Tittle :\n");
    gets (tit);
    while (c == 0)
    {
        if (b[i].n1 == temp)
        {
            printf("%d\t%s\t%s\n",b[i].acno,b[i].tittle,b[i].author);
            c++;
        }
        i++;
    }
}
/**************************************************************/
void displayno()
{
    int i,c=0;
    while(c>10)
    {
        if (b[i].num == 0)
        {
            c++;
        }
        i++;
    }
    printf("Total No. of Books :%d",c);
}
/**************************************************************/
void addbook()
{
    int i=0;
    do
    {
        printf("Enter Name ,Author Name,Accession No\n");
        fflush(stdin);
        gets(b[i].tittle);
        fflush(stdin);
        gets(b[i].author);
        scanf("%d",b[i].accno);
        b[i].num=1;
    }
    while (0)
}
/**************************************************************/
void issuebook()
{
    int temp,i=0,c=0;
    printf("Enter Accession Number :\n");
    scanf("%d",&temp);
    while (c == 0)
    {
        if (b[i].accno == temp)
        {
            printf("%s\t%s\n",b[i].tittle,b[i].author);
            c++;
        }
        i++;
    }

}
/**************************************************************/
void main()
{
    int no;
    switch(no)
    {
        case 1 :displaybookinformation();
                break;
        case 2 :addbook():
                break;
        case 3 :displayall();
                break;
        case 4 :displaybytittle();
                break;
        case 5 :displayno();
                break;
        case 6 :issuebook();
                break;
        default:printf("Invalid Choice");
    }
}
/**************************************************************/




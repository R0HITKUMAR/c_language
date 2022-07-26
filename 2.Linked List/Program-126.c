/**************************************************************
126.Program to count the nodes in the Linked List.
Author : Rohit Kumar
Ad.No. : 2019B101051
**************************************************************/
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int info;
    struct node *next;
};
struct node *START;
getnode()
{
    struct node *p;
    p=(struct node*)malloc(sizeof(struct node));
    return p;
}
void InsBeg(int x)
{
    struct node *temp;
    temp=getnode();
    temp->info=x;
    temp->next=START;
    START=temp;
}
void Traverse()
{
    struct node *t;
    t=START;
    while (t!=NULL)
    {
      printf("%d\t",t->info);
      t=t->next;
    }
}
void Count()
{
    int c=0;
    struct node *t;
    t=START;
    while (t!=NULL)
    {
        c++;
        t=t->next;

    }
    printf("\nNo of Nodes :   %d",c);
}
void main ()
{
    START=NULL;
    InsBeg(600);
    InsBeg(500);
    InsBeg(400);
    InsBeg(300);
    InsBeg(200);
    InsBeg(100);
    Traverse();
    Count();
}


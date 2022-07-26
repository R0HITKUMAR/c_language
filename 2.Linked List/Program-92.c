/**************************************************************
92.Program for Doubly linked list Primitive operations
Author : Rohit Kumar
Ad.No. : 2019B101051
**************************************************************/
#include<stdio.h>
#include<stdlib.h>
/************************************************************/
struct node
{
    int info;
    struct node *next;
    struct node *prev;
};
struct node *dSTART;
/************************************************************/
struct node *GetNode()
{
    struct node *p;
    p=(struct node*)malloc(sizeof(struct node));
    return p;
}
/************************************************************/
void InsBeg(int x)
{
    struct node *p;
    p=GetNode();
    p->next=NULL;
    p->prev=NULL;
    p->info=x;
    p->next=dSTART;
    if (dSTART!=NULL)
        dSTART->prev=p;
    dSTART=p;
}
/************************************************************/
void InsLeft(int key,int x)
{
    struct node *p,*q,*r;
    p=dSTART;
    while (p->info!=key)
    {
        p=p->next;
    }
    q=p->prev;
    r=GetNode();
    r->prev=NULL;
    r->next=NULL;
    r->info=x;
    p->prev=r;
    r->next=p;
    r->prev=q;
    if (q!=NULL)
        q->next=r;

}
/************************************************************/
void InsRight(int key,int x)
{
    struct node *p,*q,*r;
    p=dSTART;
    while (p->info!=key)
    {
        p=p->next;
    }
    q=p->next;
    r=GetNode();
    r->prev=NULL;
    r->next=NULL;
    r->info=x;
    p->next=r;
    r->prev=p;
    if (q!=NULL)
        r->next=q;
    q->prev=r;
}
/************************************************************/
void Traverse()
{
    struct node *p;
    p=dSTART;
    while (p!=NULL)
    {
      printf("%d\t",p->info);
      p=p->next;
    }
}
/************************************************************/
void main ()
{
    dSTART=NULL;
    InsBeg(600);
    InsBeg(500);
    InsBeg(400);
    InsBeg(300);
    InsBeg(200);
    InsBeg(100);
    InsLeft(600,550);
    InsLeft(500,450);
    InsLeft(300,350);
    InsLeft(200,150);
    InsRight(600,625);
    InsRight(500,525);
    InsRight(300,325);
    InsRight(200,225);

    Traverse();
}



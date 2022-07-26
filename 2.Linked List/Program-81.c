/**************************************************************
81.Program for Creation of Ascending Order Linear Linked List
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
GetNode()
{
    struct node *p;
    p=(struct node*)malloc(sizeof(struct node));
    return p;
}
/**************(INSERTION)**************/
void InsBeg(struct node **list,int x)
{
    struct node *temp;
    temp=GetNode();
    temp->info=x;
    temp->next=*list;
    *list=temp;
}

void InsEnd(struct node **list,int x)
{
    struct node *temp,*p;
    temp=*list;
    if (*list==NULL)
        InsBeg(*list,x);
    else
    {
        while (temp->next!=NULL)
            temp=temp->next;
        p=GetNode();
        p->info=x;
        p->next=NULL;
        temp->next=p;
    }
}
void InsAft(struct node **temp,int x)
{
    struct node *p;
    p=GetNode();
    p->info=x;
    p->next=(*temp)->next;
    (*temp)->next=p;

}
AscendingInsertion(struct node **START,int x)
{
    struct node *p,*q;
    p=(*START);
    q=NULL;
    while (p!=NULL && x >= p->info)
    {
        q=p;
        p=p->next;
    }
    if (q==NULL)
        InsBeg(&(*START),x);
    else
        InsAft(&q,x);

}
/***************************************/
void Traverse(struct node *list)
{
    struct node *t;
    t=list;
    while (t!=NULL)
    {
      printf("%d\t",t->info);
      t=t->next;
    }
}
void main ()
{
    struct node *LIST1,*LIST2;
    LIST1=NULL;
    LIST2=NULL;
    AscendingInsertion(&LIST1,30);
    AscendingInsertion(&LIST1,40);
    AscendingInsertion(&LIST1,50);
    AscendingInsertion(&LIST1,10);
    AscendingInsertion(&LIST1,20);
    Traverse(LIST1);
    AscendingInsertion(&LIST2,35);
    AscendingInsertion(&LIST2,45);
    AscendingInsertion(&LIST2,55);
    AscendingInsertion(&LIST2,5);
    AscendingInsertion(&LIST2,15);
    AscendingInsertion(&LIST2,25);
    printf("\n");
    Traverse(LIST2);

}


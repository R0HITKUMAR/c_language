/**************************************************************
76.Program for Linear Linked List Primitive operations
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
GetNode()
{
    struct node *p;
    p=(struct node*)malloc(sizeof(struct node));
    return p;
}
void InsBeg(int x)
{
    struct node *temp;
    temp=GetNode();
    temp->info=x;
    temp->next=START;
    START=temp;
}
void InsAft(int y,int x)
{
    struct node *temp,*p;
    temp=START;
    while (temp!=NULL)
    {
        if (temp->info==y)
            break;
        else
            temp=temp->next;
    }
    p=GetNode();
    p->info=x;
    p->next=temp->next;
    temp->next=p;

}
void InsEnd(int x)
{
    struct node *temp,*p;
    temp=START;
    if (START==NULL)
        InsBeg(x);
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
void FreeNode(struct Node *p)
 {
     free(p);
 }
int DelBeg(struct node **list)
{
     int x;
     struct node *temp;
     if ((*list) == NULL)
         printf("Void Deletion");
     else
     {
         temp=(*list);
         (*list)=(*list)->next;
         x=temp->info;
         FreeNode(temp);
         return x;
     }
}
int DelEnd (struct node **list)
{
    int x;
    struct node *temp,*last;
    temp = (*list);
    while (temp->next != NULL)
        temp = temp->next;
    last = temp->next;
    x = last->info;
    temp ->next = NULL;
    FreeNode(last);
    return x;
}
void main ()
{
    START=NULL;
    printf("Insert Begin:\n");
    InsBeg(300);
    InsBeg(200);
    InsBeg(100);
    Traverse();
    printf("\nInsert Begin + Insert End:\n");
    InsEnd(400);
    InsEnd(500);
    InsEnd(600);
    Traverse();
    printf("\nInsert Begin + Insert End + Insert After:\n");
    InsAft(100,150);
    InsAft(200,250);
    InsAft(300,350);
    Traverse();
    DelBeg();
    printf("\nDelete Begin:\n");
    Traverse();
    DelEnd();
    printf("\nDelete End:\n");
    Traverse();
}

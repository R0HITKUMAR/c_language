
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
void FreeNode(struct Node *p)
 {
     free(p);
 }
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
void InsAft(struct node **list,int y,int x)
{
    struct node *temp,*p;
    temp=*list;
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
    struct node *START;
    START=NULL;
    int x;
    InsBeg(&START,300);
    InsBeg(&START,200);
    InsBeg(&START,100);
    InsEnd(&START,400);
    InsEnd(&START,500);
    InsEnd(&START,600);
    InsAft(&START,100,150);
    InsAft(&START,200,250);
    InsAft(&START,300,350);
    printf("%d\n",DelBeg(&START));
    //printf("%d",DelEnd(&START));
    Traverse(START);
}

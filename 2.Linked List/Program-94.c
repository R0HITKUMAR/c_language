/**************************************************************
94.Program of Linked List Implementation of Linear Queue using Menu.
Author : Rohit Kumar
Ad.No. : 2019B101051
**************************************************************/
#include<stdio.h>
#include<stdlib.h>

//Linked List Primitive Operations
struct node
{
    int info;
    struct node *next;

};
struct node *Front;
struct node *Rear;

GetNode()
{
    struct node *p;
    p=(struct node*)malloc(sizeof(struct node));
    return p;
}
void Freenode(struct node *p)
{
     free(p);
}
void InsBeg(int x)
{
    struct node *temp;
    temp=GetNode();
    temp->info=x;
    temp->next=Front;
    Front=temp;
}
void InsAft(int y,int x)
{
    struct node *temp,*p;
    temp=Front;
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
int DelBeg()
 {
     struct node *temp;
     int x;
     if (Front == NULL)
         printf("Void Deletion");
     else
     {
         temp=Front;
         Front=Front->next;
         x=temp->info;
         free(temp);
         return x;
     }
 }
void display()
{
    struct node *P;
    P = Front;
    if(Front == NULL)
    {
        printf("\nEmpty Queue\n");
    }
    else
    {
        while(P != NULL)
        {
            printf("%c\t",P -> info);
            P = P -> next;
        }
    }
    printf("\n");
}

// Queue Primitive Operation
void EnQueue(int x)
{
    if (Rear==NULL)
    {
        InsBeg(x);
        Front=Rear;
    }
    else
    {
       InsAft(Rear,x);
       Rear=Rear->next;
    }
}
char DeQueue (void)
{
    char x;
    if(Front==NULL)
    {
        printf("Void Deletion");
        exit(1);
    }
    else
    {
        x=DelBeg();
        if (Front == NULL)
            Rear=NULL;
    }
    return x;
}

int main(void)
{
     int i;
     char x,ch;
     do
     {
        printf("Enter Your Choice:\n1.EnQueue\t2.DeQueue\t3.Display\t4.Exit\n");
        scanf("%d",&i);
        switch(i)
        {
            case    1:  printf("Enter any Element :\n");
                        scanf(" %c",&x);
                        EnQueue(x);
                        break;
            case    2:  x = DeQueue();
                        printf("Deleted Item : %c\n",x);
                        break;
            case    3:  display();
                        break;
            case    4:  exit(0);
                        break;
            default:printf("\n Void Choice\n");
                    break;

        }
        fflush(stdin);
        printf("Perform Another Operation Type x:");
        scanf("%c",&ch);
    }while(ch=='x');
    return 0;
}
/**************************************************************/


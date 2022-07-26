/**************************************************************
90.Program for Circular Linked List Primitive Operations
Author : Rohit Kumar
Ad.No. : 2019B101051
**************************************************************/
#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int info;
    struct Node *next;
};

/*********GET NODE**********************************************************/
struct Node *GetNode()
 {
     struct Node *p;
     p = (struct Node*)malloc(sizeof(struct Node));
     return p;
 }
/*************FREE NODE****************************************************/
 void FreeNode(struct Node *p)
 {
     free(p);
 }

 /**********INSERTION AT BEGINING******************************************/
 void InsBeg(struct Node **cSTART, int x)
 {
     struct Node *p, *q;
     p = GetNode();
     p->info = x;
     if(*cSTART == NULL)
     {
         *cSTART = p;
     }
     else
     {
         q = (*cSTART)->next;
         p->next = q;
     }
     (*cSTART)->next = p;
 }

 /*****************INSERTION AT END***************************************/
 void InsEnd(struct Node **cSTART, int x)
 {
     struct Node *p, *q;
     p = GetNode();
     p->info = x;
     if((*cSTART) != NULL)
     {
         q = (*cSTART)->next;
         p->next = q;
     }
     else
     {
         *cSTART = p;
     }
     (*cSTART)->next = p;
     *cSTART = p;
 }

 /**************DELETION AT BEGINNING*************************************/
 int DelBeg(struct Node **cSTART)
 {
     struct Node *p;
     int x;
     if(*cSTART == NULL)
     {
         printf("Void Deletion");
     }
     else
     {
         p = (*cSTART)->next;
         if((*cSTART)->next == cSTART)
         {
             *cSTART = NULL;
         }
         else
         {
             (*cSTART)->next = p->next;
         }
         x = p->info;
         FreeNode(p);
         return x;
     }
 }
 /**
int DelEnd()
 {
    struct node *p, *q;
    int x;
    p=CSTART;
    while (p->next!=CSTART)
        p=p->next;
    p->next=CSTART->next;
    q=CSTART;
    CSTART=p;
    x=q->info;
    free(q);
    return x;
 }
 int DelAft(struct node *p)
 {
     struct node *q;
     int x;
     q = p->next;
     p->next=q->next;
     x=q->info;
     FreeNode(q);
     return x;

 }**/
 /****************TRAVERSAL***********************************************/
 void Traversal(struct Node *cSTART)
 {
     struct Node *temp = cSTART->next;
     while(temp!=cSTART)
     {
         printf("%d\t", temp->info);
         temp = temp->next;
     }
     printf("%d\t", temp->info);

 }

 /***************MAIN*****************************************************/
 void main()
 {
     struct Node *cSTART = NULL;
     int x;
     InsEnd(&cSTART, 90);
     InsEnd(&cSTART, 80);
     InsEnd(&cSTART, 70);
     InsEnd(&cSTART, 60);
     InsEnd(&cSTART, 50);
     InsEnd(&cSTART, 40);
     InsEnd(&cSTART, 30);
     InsEnd(&cSTART, 20);
     Traversal(cSTART);
     x = DelBeg(&cSTART);
     printf("\nDeletion rom Begining : %d \n", x);
     Traversal(cSTART);
 }

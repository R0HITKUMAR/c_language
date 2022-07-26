/**************************************************************
##.Program for Linear Linked List Primitive operations
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
 struct Node *START;

struct Node *GetNode()
 {
     struct Node *p;
     p = (struct Node*)malloc(sizeof(struct Node));
     return p;
 }

FreeNode(struct Node *p)
 {
     free(p);
 }

InsBeg(int x)
 {
     struct Node *p;
     p = GetNode();
     p->info = x;
     p->next = START;
     START = p;
 }

InsAft(struct Node *p, int x)
 {
     struct Node *q, *r;
     q = GetNode();
     q->info = x;
     r = p->next;
     p->next = q;
     q->next = r;
 }

InsEnd(int x)
 {
     struct Node *p;
     if (START == NULL)
        InsBeg(x);
     else
     {
         p = START;
         while(p->next!=NULL)
            p = p->next;
         InsAft(p, x);
     }

 }

DelBeg()
 {
     struct Node *p;
     int x;
     if (START == NULL)
     {
         printf("Deletion is not possible");
         return;
     }
     else
     {
         p =START;
         START = START->next;
         x = p->info;
         FreeNode(p);
         return x;
     }
 }

DelEnd()
 {
     struct Node *p, *q;
     int x;
     if (START == NULL)
     {
         printf("Not Possible");
         return;
     }
     else
     {
        q = NULL;
        p = START;
        while(p->next!=NULL)
        {
            q = p;
            p = p->next;
        }
        if (q!=NULL)
            q->next = NULL;
        else
            START = NULL;
        x = p->info;
        FreeNode(p);
        return x;
     }
 }

Traversal()
 {
     struct Node *temp;
     temp = START;
     while(temp != NULL)
     {
         printf("%d\t", temp->info);
         temp = temp->next;
     }
 }

main()
 {
     int x;
     START = NULL;
     InsEnd(50);
     InsEnd(100);
     InsEnd(200);
     InsEnd(300);
     InsEnd(400);
     InsEnd(500);
     x = DelBeg();
     printf("The deleted element is : %d\n", x);
     Traversal();
 }

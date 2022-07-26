/**************************************************************
78.Program to print Linked List contents in reverse order
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

struct Node *GetNode()
 {
     struct Node *p;
     p = (struct Node*)malloc(sizeof(struct Node));
     return p;
 }

 void FreeNode(struct Node *p)
 {
     free(p);
 }

 void InsBeg(struct Node **list, int x)
 {
     struct Node *p;
     p = GetNode();
     p->info = x;
     p->next = *list;
     *list = p;
 }

  void InsAft(struct Node *p, int x)
 {
     struct Node *q, *r;
     q = GetNode();
     q->info = x;
     r = p->next;
     p->next = q;
     q->next = r;
 }

 void InsEnd(struct Node **list, int x)
 {
     struct Node *p;
     if (*list == NULL)
        InsBeg(&(*list), x);
     else
     {
         p = *list;
         while(p->next!=NULL)
            p = p->next;
         InsAft(p, x);
     }

 }

 void PrintReverse(struct Node *list)
 {
     if(list->next == NULL)
     {
         printf("%d\t", list->info);
     }
     else
     {
         PrintReverse(list->next);
         printf("%d\t", list->info);
     }
 }

 void main()
 {
     struct Node *START;
     START = NULL;
     InsEnd(&START, 100);
     InsEnd(&START, 200);
     InsEnd(&START, 300);
     InsEnd(&START, 400);
     InsEnd(&START, 500);
     PrintReverse(START);
 }

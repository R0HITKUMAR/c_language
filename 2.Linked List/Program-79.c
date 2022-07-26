/**************************************************************
79.Program for Reversing the Linear Linked List
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

 void Reverse(struct Node **list)
 {
     struct Node *prev, *next, *current;
     prev = NULL;
     current = *list;
     while(current!=NULL)
     {
         next = current->next;
         current->next = prev;
         prev = current;
         current = next;
     }
     *list = prev;

 }

 void Traversal(struct Node *list)
 {
     struct Node *temp;
     temp = list;
     while(temp != NULL)
     {
         printf("%d\t", temp->info);
         temp = temp->next;
     }
 }

  void main()
 {
     struct Node *START;
     START = NULL;
     InsEnd(&START, 50);
     InsEnd(&START, 100);
     InsEnd(&START, 200);
     InsEnd(&START, 300);
     InsEnd(&START, 400);
     InsEnd(&START, 500);
     InsBeg(&START, 45);
     Reverse(&START);
     printf("The reversed linked list is : %d\n");
     Traversal(START);
 }


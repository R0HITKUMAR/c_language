/**************************************************************
77.Program for Pair wise swap of elements in linked list
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
 void FreeNode(struct Node *p)
 {
     free(p);
 }

 void InsBeg(int x)
 {
     struct Node *p;
     p = GetNode();
     p->info = x;
     p->next = START;
     START = p;
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
 void InsEnd(int x)
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
 int CountNode()
 {
     int c=0;
     struct Node *temp;
     temp = START;
     while(temp!=NULL)
     {
        c++;
        temp = temp->next;
     }
     return c;
 }
 void swap(int c)
 {
     int i, temp;
     struct Node *p, *q;
     p = START;
     c = c/2;
     for (i=1; i<=c; i++)
     {
         q = p->next;
         temp = p->info;
         p->info = q->info;
         q->info = temp;
         p = q->next;
     }
 }
 void Traversal()
 {
     struct Node *temp;
     temp = START;
     while(temp != NULL)
     {
         printf("%d\t", temp->info);
         temp = temp->next;
     }
 }

 void main()
 {
     int count;
     START = NULL;
     InsBeg(600);
     InsBeg(500);
     InsBeg(400);
     InsBeg(300);
     InsBeg(200);
     InsBeg(100);
     printf("Original Node\n");
     Traversal();
     count = CountNode();
     swap(count);
     printf("\nSwapped Node\n");
     Traversal();

 }



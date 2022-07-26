/**************************************************************
80.Program for concatenation of Linear Linked List
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

struct Node *Concat(struct Node **list1, struct Node **list2)
{
    struct Node *temp, *list3;
    temp = *list1;
    while(temp->next!=NULL)
    {
        temp = temp->next;
    }
    temp->next = *list2;
    list3 = *list1;
    return list3;
}

void main()
{
    struct Node *START, *LAST, *List = NULL;
     START = NULL;
     LAST = NULL;
     InsEnd(&START, 50);
     InsEnd(&START, 100);
     InsEnd(&START, 200);
     InsEnd(&START, 300);
     InsEnd(&START, 400);
     InsEnd(&START, 500);
     InsBeg(&START, 45);
     printf("1st Linked List:\n");
     Traversal(START);
     InsEnd(&LAST, 600);
     InsEnd(&LAST, 700);
     InsEnd(&LAST, 800);
     InsEnd(&LAST, 900);
     InsEnd(&LAST, 1000);
     InsEnd(&LAST, 1100);
     printf("\n2nd Linked List:\n");
     Traversal(LAST);
     List = Concat(&START, &LAST);
     printf("\nCombined Linked List:\n");
     Traversal(List);
}

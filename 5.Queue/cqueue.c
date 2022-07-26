/**************************************************************
67.Program of Array Implementation of Circular Queue
Author : Rohit Kumar
Ad.No. : 2019B101051
**************************************************************/
#include<stdio.h>
#include<stdlib.h>
#define MAXQUEUE 6
#define TRUE 1
#define FALSE 0

/******************************************/
struct CQueue
{
    char item[MAXQUEUE];
    int REAR;
    int FRONT;
};

struct CQueue CQ;
/******************************************/
void Initialize()
{
    CQ.REAR=MAXQUEUE-1;
    CQ.FRONT=MAXQUEUE-1;
}
/******************************************/
void EnQueue(char x)
 {
     if ((CQ.REAR+1)%MAXQUEUE==CQ.FRONT)
     {
         printf("Queue Overflow");
         exit(1);
     }
     else
     {
        CQ.REAR=(CQ.REAR+1)%MAXQUEUE;
        CQ.item[CQ.REAR]=x;
     }
 }
/******************************************/
int Empty()
 {

     if (CQ.FRONT==CQ.REAR)
        return TRUE;
     else
        return FALSE;
 }
/******************************************/
char DeQueue()
 {
    char x;
    if (Empty())
     {
         printf("Queue Underflows");
         exit(1);
     }
     else
     {
        CQ.FRONT=(CQ.FRONT+1)%MAXQUEUE;
        x=CQ.item[CQ.FRONT];
        return x;
     }
 }
 /******************************************/
void display()
{
    int i;
    i=CQ.FRONT+1;
    while (i!=(CQ.REAR +1))
    {
        printf("%c ", CQ.item[i]);
        i=(i+1)%MAXQUEUE;
    }
}
 /******************************************/
 void main()
 {
     char x;
     Initialize();
     EnQueue('A');
     EnQueue('B');
     EnQueue('C');
     EnQueue('D');
     x=DeQueue();
     printf("The Deleted element is = %c\n",x);
     display();

 }


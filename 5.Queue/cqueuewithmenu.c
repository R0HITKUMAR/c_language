/**************************************************************
67.Program of Array Implementation of Circular Queue
Author : Rohit Kumar
Ad.No. : 2019B101051
**************************************************************/
#include<stdio.h>
#include<stdlib.h>
#define MAXQUEUE 10
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
    printf("\n");
}
 /******************************************/
void main()
 {
     int i;
     char x,ch;
     Initialize();
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
 }



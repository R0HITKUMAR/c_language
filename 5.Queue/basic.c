/**************************************************************
66.Program of Array Implementation of Linear Queue
Author : Rohit Kumar || 1900320100131 || 2019B101051
**************************************************************/
#include<stdio.h>
#include<stdlib.h>
#define MAXQUEUE 10
#define TRUE 1
#define FALSE 0

/******************************************/
struct Queue
{
    char item[MAXQUEUE];
    int REAR;
    int FRONT;
};

struct Queue Q;
/******************************************/
void Initialize()
{
    Q.REAR=-1;
    Q.FRONT=0;
}
/******************************************/
void EnQueue(char x)
 {
     if (Q.REAR == MAXQUEUE -1)
     {
         printf("Queue Overflow");
         exit(1);
     }
     else
     {
        Q.REAR++;
        Q.item[Q.REAR]=x;
     }
 }
/******************************************/
int Empty()
 {

     if (Q.REAR - Q.FRONT+1==0)
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
        x=Q.item[Q.FRONT];
        Q.FRONT++;
        return x;
     }
 }
  /******************************************/
 void display()
{
    int i;
    if (Q.FRONT == 0)
        printf("Queue is empty \n");
    else
    {
        printf("Queue  : \t");
        for (i = Q.FRONT; i <= Q.REAR; i++)
            printf("%c\t", Q.item[i]);
        printf("\n");
    }
}
 /******************************************/
 void main()
 {
     char x;
     Initialize();
     EnQueue('1');
     x=DeQueue();
     printf("The Deleted element is = %c\n",x);
     EnQueue('2');
     x=DeQueue();
     printf("The Deleted element is = %c\n",x);
     EnQueue('3');
     EnQueue('4');
     EnQueue('5');
     display();
 }

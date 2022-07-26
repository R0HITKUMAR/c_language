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
        Q.Item[Q.REAR]=x;
     }
 }
/******************************************/
int Empty()
 {

     if (Q.REAR-Q.FRONT+1=0)
        return TRUE;
     else
        return FALSE;
 }
/******************************************/
void DeQueue(char x)
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
 void main()
 {
     char x;
     Initialize();
     EnQueue('A');
     EnQueue('B');
     EnQueue('C');
     EnQueue('D');
     x=DeQueue;
     printf("The Deleted element is = %c\n",x);
     x=DeQueue;
     printf("The Deleted element is = %c\n",x);
     x=DeQueue;
     printf("The Deleted element is = %c\n",x);
     x=DeQueue;
     printf("The Deleted element is = %c\n",x);
     x=DeQueue;
     printf("The Deleted element is = %c\n",x);

 }

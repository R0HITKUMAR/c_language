/**************************************************************
66.Program of Array Implementation of Linear Queue using Menu.
Author : Rohit Kumar
Ad.No. : 2019B101051
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
        x = Q.item[Q.FRONT];
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
        printf("Queue  :\t");
        for (i = Q.FRONT; i <= Q.REAR; i++)
            printf("%c ", Q.item[i]);
        printf("\n");
    }
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
        printf("Perform Another Operation Type x\n");
        scanf("%c",&ch);
    }while(ch=='x');
 }
 /******************************************/

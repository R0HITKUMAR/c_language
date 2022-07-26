#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0
#define MAXQUEUE 30

/*******************************************************/
 struct Queue
 {
     char Item[MAXQUEUE];
     int FRONT;
     int REAR;
 };

 struct Queue Q;

 /*********INITIALIZE*********************************/
 void Initialize()
 {
     Q.FRONT = 0;
     Q.REAR = -1;
 }

 /******EnQUEUE**************************************/
 void EnQueue(char x)
 {
     if(Q.REAR == MAXQUEUE - 1)
     {
         printf("Queue overflow");
         exit(1);
     }
     else
     {
         Q.REAR++;
         Q.Item[Q.REAR] = x;
     }
 }

 /*********Empty*************************************/
 int Empty()
 {
     if(Q.REAR-Q.FRONT+1 == 0)
     {
         return TRUE;
     }
     else
     {
         return FALSE;
     }
 }

 /*********DeQueue***********************************/
 char DeQueue()
 {
     char x;
     if(Empty())
     {
         printf("Queue Underflow");
         exit(1);
     }
     else
     {
         x = Q.Item[Q.FRONT];
         Q.FRONT++;
         return x;
     }
 }

 /***********DISPLAY*************************************/
 void Display()
 {
     int i;
     if(!Empty())
     {
         printf("The queue is : \n");
        for(i = Q.FRONT; i<=Q.REAR; i++)
        {
            printf("%c\t", Q.Item[i]);
        }
        printf("\n");
     }
     else
     {
         printf("Empty Queue\n");
     }

 }

 /************MAIN***************************************/
 void main()
 {
     int ch = 0;
     char x;
     Initialize();
     printf("Enter : \n1. EnQueue\n2. DeQueue\n3. Display\n4. Exit\n");
     do
     {
         printf("Enter the choice: \n");
         scanf("%d", &ch);
         switch(ch)
         {
             case 1:printf("Enter the element to be inserted :\n");
                    scanf(" %c", &x);
                    EnQueue(x);
                    break;
             case 2:x = DeQueue();
                    printf("The deleted element is : %c\n", x);
                    break;
             case 3:Display();
                    break;
             case 4:printf("Exiting the process\n");
                    break;
             default:printf("Invalid input");
         }
     }while(ch != 4);

 }

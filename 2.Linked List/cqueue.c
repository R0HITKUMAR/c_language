/**************************************************************
Program of Linked List Implementation of Circular Queue
Author : Rohit Kumar || 1900320100131 || 2019B101051
**************************************************************/
#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
struct node
{
	int data;
	struct node* next;
};
struct node *Front = NULL;
struct node *Rear = NULL;

GetNode()
{
    struct node *p;
    p=(struct node*)malloc(sizeof(struct node));
    return p;
}
void FreeNode(struct Node *p)
 {
     free(p);
 }
void EnQueue(int x)
{
	struct node* P;
	P = GetNode();
	P->data = x;
	P->next = NULL;
	if((Rear==NULL)&&(Front==NULL))
	{
		Front = Rear = P;
		Rear->next = Front;
	}
	else
	{
		Rear->next = P;
		Rear = P;
		P->next = Front;
	}
}
char DeQueue()
{
    struct node* temp;
    char x;
    if(!Rear)
    {
        printf("\nQueue is Empty\n");
        return 0;
    }
    if(!Rear->next)
    {
        x = Rear->data;
        FreeNode(Rear);
        return x;
    }
    temp = Rear->next;
    x = temp->data;
    Rear->next = temp->next;
    FreeNode(temp);
    return x;
}

void display()
{
	struct node* P;
	P = Front;
	printf("Elements in Queue are :\n");
	if((Front==NULL)&&(Rear==NULL))
		printf("\nQueue is Empty");
	else{
		do{
			printf("%c\t",P->data);
			P = P->next;
		}while(P != Front);
	}
	printf("\n");
}
int main(void)
{
     int i;
     char x,ch;
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
    return 0;
}

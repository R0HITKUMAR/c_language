/**************************************************************
97.Program of Linked List Implementation of Stack
Author : Rohit Kumar
Ad.No. : 2019B101051
**************************************************************/
#include <stdio.h>
#include <stdlib.h>

//Linked List Primitive Operations
struct node
{
    int info;
    struct node *next;
};
struct node *START;

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
void InsBeg(int x)
{
    struct node *temp;
    temp=GetNode();
    temp->info=x;
    temp->next=START;
    START=temp;
}
void display()
{
    struct node *ptr;
    ptr=START;
    if(ptr == NULL)
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("Display:\n");
        while(ptr!=NULL)
        {
            printf("%c\t",ptr->info);
            ptr = ptr->next;
        }
    }
    printf("\n");
}
int DelBeg()
 {
     struct node *temp;
     int x;
     if (START == NULL)
         printf("Void Deletion");
     else
     {
         temp=START;
         START=START->next;
         x=temp->info;
         FreeNode(temp);
         return x;
     }
 }

// Stack Primitive Operations
void Push (char x)
{
    InsBeg(x);
}

char Pop(void)
{
    char x;
    if (START==NULL)
        printf("Stack Underflow");
    else
        x=DelBeg();
    return x;
}
char StackTop()
{
    char x;
    if (START == NULL)
        printf("Stack Underflow");
    else
        x = START ->info;
    return x;
}
int main(void)
{
     int i;
     char x,ch;
     do
     {
        printf("Enter Your Choice:\n1.Push\t2.Pop\t3.Display\t4.Exit\n");
        scanf("%d",&i);
        switch(i)
        {
            case    1:  printf("Enter any Element :\n");
                        scanf(" %c",&x);
                        Push(x);
                        break;
            case    2:  x = Pop();
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
/**************************************************************/

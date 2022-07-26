#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0

struct node
{
    char info;
    struct node *next;
};

struct node *REAR, *FRONT;
GetNode()
{
    struct node *p;
    p=(struct node*)malloc(sizeof(struct node));
    return p;
}
void initialize()
{
    REAR=NULL;
    FRONT=NULL;
}
int Empty()
{
    if (FRONT == NULL)
        return TRUE;
    else
        return FALSE;
}
void EnQueue (char x)
{
    struct node *p;
    p=GetNode();
    p->info=x;
    p->next=NULL;
    if (REAR==NULL)
    {
        REAR=p;
        FRONT=p;
    }
    else
    {
        REAR->next=p;
        REAR=p;
    }
}
char DeQueue()
{
    char x;
    struct node *p;
    if (Empty())
    {
        printf("Queue Underflows\n");
        exit(1);
    }
    else
    {
        p=FRONT;
        FRONT=FRONT->next;
        x=p->info;
        free(p);
        if (FRONT==NULL);
            REAR=NULL;
        return x;
    }
}
void main()
{
    char x;
    initialize();
    EnQueue('A');
    EnQueue('B');
    EnQueue('C');
    EnQueue('D');
    x=DeQueue();
    printf("Deleted Element iS : %c\n",x);
    x=DeQueue();
    printf("Deleted Element iS : %c",x);

}


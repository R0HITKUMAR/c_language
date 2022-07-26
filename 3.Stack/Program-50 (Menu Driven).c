/**************************************************************
50.Program for Stack Primitive Operations (Menu Driven)
Author : Rohit Kumar || 1900320100131 || 2019B101051
**************************************************************/
#include <stdio.h>
#define SIZE 10
#define TRUE 1
#define FALSE 0
struct stack
{
	char item[SIZE];
	int TOP;
};

struct stack S;

void Initialise(void)
{
    S.TOP=-1;
}

//Push Function for Stack
void Push(char x)
{
    if (S.TOP == SIZE-1)
        printf("Stack Overflow");
    else
    {
        S.TOP++;
        S.item[S.TOP]=x;
    }
}
//Pop function for Stack
char Pop(void)
{
    char x;
    if (S.TOP == NULL)
        printf("Stack Underflow");
    else
    {
        x=S.item[S.TOP];
        S.TOP--;
    }
    return x;
}

//Empty Check
int Empty(void)
{
    if(S.TOP==-1)
        return TRUE;
    else
        return FALSE;
}

//Function for Top Element for Stack.
char StackTop(void)
{
	char x;
	x=S.item[S.TOP];
	return x;
}
int main(void)
{
     int i;
     char x,ch;
     Initialise();
     do
     {
        printf("Enter Your Choice:\n1.Push\t2.Pop\t3.StackTop\t4.Exit\n");
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
            case    3:  x =StackTop();
                        printf("Stack Top : %c\n",x);
                        break;
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
/**************************************************************/


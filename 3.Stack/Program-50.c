/**************************************************************
50.Program for Stack Primitive Operations
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

void Initialize(void)
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
int main(void) {
    char m;
    Initialize();
    Push('7');
    Push('6');
    Push('5');
    Push('4');
    Push('3');
    Push('2');
    Push('1');
    printf("Top element is %c",StackTop());
    printf("\nDeleted element is %c",Pop());
    printf("\nDeleted element is %c",Pop());
    printf("\nDeleted element is %c",Pop());
    printf("\nTop element is %c",StackTop());
    printf("\nDeleted element is %c",Pop());
    printf("\nDeleted element is %c",Pop());
    printf("\nDeleted element is %c",Pop());
    printf("\nTop element is %c",StackTop());
    return 0;
}
/**************************************************************/

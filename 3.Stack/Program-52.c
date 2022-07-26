/**************************************************************
52.Program for Infix to Postfix Conversion
Author : Rohit Kumar
Ad.No. : 2019B101051
**************************************************************/
#include <stdio.h>
#define SIZE 20
#define TRUE 1
#define FALSE 0

/****************************************/
struct Stack
{
    char Item[20];
    int TOP;
};

struct Stack S;

/*************Initialization****************************/
void Initialize()
{
    S.TOP = -1;
}

/*****************Push***********************/
void Push(char x)
{
     if(S.TOP == SIZE-1)
    {
        printf("Stack Overflow\n");
    }
    else
    {
        S.TOP++;
        S.Item[S.TOP] = x;
    }
}


/********************Empty************************/
int Empty()
{
    if(S.TOP == -1)
        return TRUE;
    else
        return FALSE;
}

/******************Pop************************/
char Pop()
{
    if(Empty())
    {
        printf("Stack Underflow\n");
        return '\0';
    }
    else
    {
        char x = S.Item[S.TOP];
        S.TOP--;
        return x;
    }
}

/******************Stack Top**************************/
char StackTop()
{
    char x = S.Item[S.TOP];
    return x;
}


/***************PRCD Function**************/

int Prcd(char op1, char op2)
{
    if(op1 == '(' || op2 == '(')
    {
        return FALSE;
    }
    else if(op2 == ')')
    {
        return TRUE;
    }
    else if(op1 == '^' || op1 == '*' || op1 == '/' || op1 == '%')
    {
        if(op2 == '^')
            return FALSE;
        else
            return TRUE;
    }
    else
    {
        if(op1 == '+' || op1 == '-')
        {
            if(op2 == '+' || op2 == '-')
                return TRUE;
            else
                return FALSE;
        }
    }
}


/************Infix to Postfix*************************/
void InfixToPostfix(char InfixExp[])
{
    int i=0, j=0;
    char x, symbol;
    char PostfixExp[30];
    Initialize();
    while(InfixExp[i] != '\0')
    {
        symbol = InfixExp[i];
        if(symbol>='a' && symbol<='z' && symbol>='A' && symbol<='Z' && symbol>='0' && symbol<= '9')
        {
            PostfixExp[j] = symbol;
            j++;
        }
        else
        {
            while(Empty()==0 && Prcd(StackTop(), symbol)==1)
            {
                x = Pop();
                PostfixExp[j] = x;
                j++;
            }
            if(symbol == ')')
            {
                Pop();
            }
            else
            {
                Push(symbol);
            }
        }
        i++;
    }
    while(Empty() == 0)
    {
        x = Pop();
        PostfixExp[j] = x;
        j++;
    }
    PostfixExp[j] = '\0';
    printf("Postfix Expression is : \n");
    puts(PostfixExp);
}

/************Main*************************************/
void main()
{
    char Exp[30];
    printf("Enter an Infix Expression : \n");
    gets(Exp);
    InfixToPostfix(Exp);
}

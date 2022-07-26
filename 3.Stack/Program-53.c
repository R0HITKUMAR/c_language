/**************************************************************
53.Program for Infix to Prefix Coversion
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
    char x = S.Item[S.TOP];
    S.TOP--;
    return x;

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
void InfixToPrefix(char InfixExp[])
{
    int i=0, j=0;
    char x, symbol;
    char PrefixExp[30];
    Initialize();
    while(InfixExp[i] != '\0')
    {
        symbol = InfixExp[i];
        if(symbol != '+' && symbol != '-' && symbol != '*' && symbol != '/' && symbol != '^' && symbol != '%' && symbol != '(' && symbol != ')')
        {
            PrefixExp[j] = symbol;
            j++;
        }
        else
        {
            while(!Empty()&& !Prcd(StackTop(),symbol))
            {
                x = Pop();
                PrefixExp[j] = x;
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
        PrefixExp[j] = x;
        j++;
    }
    PrefixExp[j] = '\0';
    reverse(PrefixExp);
    printf("Prefix Expression is : \n");
    puts(PrefixExp);
}
/************Reverse*************************/
void reverse(char st[])
{
    int i=0,j=0;
    char x;
    while(st[i]!= '\0')
    {
        Push(st[i]);
        i++;
    }
    while(!Empty())
    {
        x = Pop();
        st[j] = x;
        j++;
    }
    st[j]='\0';
    return st;
}
/************Main*************************************/
void main()
{
    char Exp[30];
    printf("Enter an Infix Expression : \n");
    gets(Exp);
    reverse(Exp);
    InfixToPrefix(Exp);
}

/**************************************************************
51.Program for Postfix Evaluation
Author : Rohit Kumar
Ad.No. : 2019B101051
**************************************************************/
#include <stdio.h>
#include <math.h>
#define SIZE 20
#define TRUE 1
#define FALSE 0

/****************************************/
struct Stack
{
    int Item[40];
    int TOP;
};

struct Stack S;

/*************Initialization****************************/
void Initialize()
{
    S.TOP = -1;
}

/*****************Push***********************/
void Push(int x)
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
int Pop()
{
    if(Empty())
    {
        printf("Stack Underflow\n");
        return '\0';
    }
    else
    {
        int x = S.Item[S.TOP];
        S.TOP--;
        return x;
    }
}


/******************Stack Top**************************/
int StackTop()
{
    int x = S.Item[S.TOP];
    return x;
}

/**************Digit********************************/
int Digit(char c)
{
    switch(c)
    {
        case '0':return 0;
                 break;
        case '1':return 1;
                 break;
        case '2':return 2;
                 break;
        case '3':return 3;
                 break;
        case '4':return 4;
                 break;
        case '5':return 5;
                 break;
        case '6':return 6;
                 break;
        case '7':return 7;
                 break;
        case '8':return 8;
                 break;
        case '9':return 9;
                 break;
        default :return -1;
    }
}

/***************Calculator**************************/
int Calculator(int a, int b, char op)
{
    int res;
    switch(op)
    {
        case '+':res = a+b;
                 return res;
                 break;
        case '-':res = a-b;
                 return res;
                 break;
        case '*':res = a*b;
                 return res;
                 break;
        case '/':res = a/b;
                 return res;
                 break;
        case '%':res = a%b;
                 return res;
                 break;
        case '^':res = (int)pow(a, b);
                 return res;
                 break;
        default: return -1;

    }
}

/************Postfix Evaluation*********************/
int PostfixEvaluation(char Exp[])
{
    Initialize();
    int x, op1, op2, i=0;
    int value;
    char symbol;
    while(Exp[i] != '\0')
    {
        symbol = Exp[i];
        if(symbol == '+' || symbol == '-' || symbol == '*' || symbol == '/' || symbol == '%' || symbol == '^')
        {
            op2 = Pop();
            op1 = Pop();
            value = Calculator(op1, op2, symbol);
            Push(value);
        }
        else
        {
            Push(Digit(symbol));
        }
        i++;
    }
    x = StackTop();
    return x;
}

/******************Main***************************/
void main()
{
    char Exp[30];
    int res;
    printf("Enter a Postfix Expression\n");
    gets(Exp);
    res = PostfixEvaluation(Exp);
    printf("Postfix Evaluation : %d", res);
}

/**************************************************************
56.Program to check the validity of Bracketed Arithmetic Expression using Stack
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

/****************Matching brackets******************/
int Match(char a, char b)
{
    if(a == '(' && b==')')
        return 1;
    else if(a == '{' && b=='}')
        return 1;
    else if(a == '[' && b==']')
        return 1;
    else
        return 0;
}

/***************Bracket Check**********************/
void ParanthesisChek(char Exp[])
{
    int i = 0, flag = 1;
    char x;
    Initialize();
    while(Exp[i]!= '\0')
    {
        if(Exp[i] == '(' || Exp[i] == '{' || Exp[i] == '[')
        {
            Push(Exp[i]);
            i++;
        }
        else if (Exp[i] == ')' || Exp[i] == '}' || Exp[i] == ']')
        {
            if(Empty() == 0)
            {
                if(Match(StackTop(), Exp[i]))
                {
                     x = Pop();
                     i++;
                }
                else
                {
                    flag = 0;
                    break;
                }

            }
            else
            {
                flag = 0;
                break;
            }
        }
        else
            i++;

    }
     if(Empty() == 1)
        {
            if (flag == 1)
                printf("Valid Expression");
            else
                printf("Invalid Expression");
        }
        else
            printf("Invalid Expression");

}


/***********Main******************************/
void main()
{
    char str[40];
    printf("Enter an Expression\n");
    gets(str);
    ParanthesisChek(str);
}


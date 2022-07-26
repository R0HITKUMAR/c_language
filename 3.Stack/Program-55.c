/**************************************************************
55.Program to check the validity of Parenthesized Arithmetic Expression using Stack
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

//Push Function for Stack
void Push(char x)
{
    S.TOP++;
    S.item[S.TOP]=x;
}
//Pop function for Stack
char Pop(void)
{
    char x;
    x=S.item[S.TOP];
    S.TOP--;
    return x;
}

int Empty()
{
    if(S.TOP == -1)
        return TRUE;
    else
        return FALSE;
}



/******************Stack Top**************************/
char StackTop()
{
    char x = S.Item[S.TOP];
    return x;
}

/***************Reverse String**********************/
void ParanthesisChek(char Exp[])
{
    int i = 0, flag = 1;
    char x;
    Initialize();
    while(Exp[i]!= '\0')
    {
        if(Exp[i] == '(')
        {
            Push(Exp[i]);
            i++;
        }
        else if (Exp[i] == ')')
        {
            if(Empty() == 0)
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
/**************************************************************/

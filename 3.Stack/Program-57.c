/**************************************************************
57.Program to check if the given number is a palindrome using stacks
Author : Rohit Kumar
Ad.No. : 2019B101051
**************************************************************/
#include <stdio.h>
#define SIZE 20
#define TRUE 1
#define FALSE 0

struct Stack
{
    char Item[20];
    int TOP;
};

struct Stack S;

void Initialize()
{
    S.TOP = -1;
}

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

int Empty()
{
    if(S.TOP == -1)
        return TRUE;
    else
        return FALSE;
}

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
char StackTop()
{
    char x = S.Item[S.TOP];
    return x;
}

void Palindrome(char str[])
{
    int i = 0;
    char x;
    Initialize();
    while(str[i]!= '\0')
    {
        Push(str[i]);
        i++;
    }
    i = 0;
    while(Empty() == 0)
    {
        x = Pop();
        if(x != str[i])
            break;
        i++;
    }
    if(Empty() == 1)
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");
}

void main()
{
    char str[20];
    printf("Enter a string \n");
    gets(str);
    Palindrome(str);
}

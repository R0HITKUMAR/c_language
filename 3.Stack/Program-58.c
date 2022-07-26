/**************************************************************
58.Program to Reverse the given String using Stack
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
    S.TOP++;
    S.Item[S.TOP]=x;
}

char Pop(void)
{
    char x;
    x=S.Item[S.TOP];
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

char StackTop()
{
    char x = S.Item[S.TOP];
    return x;
}
char reverse(char st[])
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
void main()
{
    char str[20];
    Initialize();
    printf("Enter a string \n");
    gets(str);
    printf("The reversed string is : \n");
    reverse(str);
    puts(str);
}
/**************************************************************/

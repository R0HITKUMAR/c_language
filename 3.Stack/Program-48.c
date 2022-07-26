/**************************************************************
48.Program for Decimal to Hexadecimal Conversion
Author : Rohit Kumar
Ad.No. : 2019B101051
**************************************************************/
#include <stdio.h>
#define SIZE 20
#define TRUE 1
#define FALSE 0

struct Stack
{
    int Item[40];
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
    S.item[S.TOP]=x;
}

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

int StackTop()
{
    int x = S.Item[S.TOP];
    return x;
}

void DecimalToHexadecimal(int n)
{
    int x, i;
    char hex[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F', };
    Initialize();
    while(n>0)
    {
        x = n%16;
        Push(x);
        n = n/16;
    }
    printf("Hexadecimal No. = ");
    while(Empty() == 0)
    {
        i = Pop();
        printf("%c", hex[i]);
    }
}

void main()
{
    int n;
    printf("Enter a number : \n");
    scanf("%d", &n);
    DecimalToHexadecimal(n);
}
/**************************************************************/

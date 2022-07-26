/**************************************************************
47.Program for Decimal to Octal Conversion
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

int StackTop()
{
    int x = S.Item[S.TOP];
    return x;
}


/***************Decimal to Octal********************/
void DecimalToOctal(int n)
{
    int x;
    Initialize();
    while(n>0)
    {
        x = n%8;
        Push(x);
        n = n/8;
    }
    printf("Octal No. = ");
    while(Empty() == 0)
    {
        printf("%d", Pop());
    }
}

void main()
{
    int n;
    printf("Enter a number : \n");
    scanf("%d", &n);
    DecimalToOctal(n);
}
/**************************************************************/

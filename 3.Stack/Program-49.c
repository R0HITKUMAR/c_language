/**************************************************************
49.Program for Decimal to Any Base Conversion
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

/***************Decimal to Binary********************/
void DecimalToBinary(int n)
{
    int x;
    Initialize();
    while(n>0)
    {
        x = n%2;
        Push(x);
        n = n/2;
    }
    while(Empty() == 0)
    {
        printf("%d", Pop());
    }
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
    while(Empty() == 0)
    {
        printf("%d", Pop());
    }
}

/***************Decimal to Hexadecimal********************/
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
    while(Empty() == 0)
    {
        i = Pop();
        printf("%c", hex[i]);
    }
}

/************Main******************************************/
void main()
{
    int ch = 0, n;
    printf("Enter:\n1. - Decimal to Binary\n2. - Decimal to Octal\n3. - Decimal to Hexadecimal\n");
    scanf("%d", &ch);
    printf("Enter a decimal number \n");
    scanf("%d", &n);
    switch(ch)
    {
        case 1: DecimalToBinary(n);
                break;
        case 2: DecimalToOctal(n);
                break;
        case 3: DecimalToHexadecimal(n);
                break;
        default: printf("Invalid Choice");
    }
}

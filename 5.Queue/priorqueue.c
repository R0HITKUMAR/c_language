#include<stdio.h>
#include<stdlib.h>
#define SIZE 50

int PQueue[SIZE];
int key;

void PQInsert(int x)
{
    int i = key-1;
    if(key == 0)
    {
        PQueue[0]=x;
        key++;
    }
    else
    {
        while(PQueue[i] > x)
        {
            PQueue[i+1] = PQueue[i];
            i--;
        }
        PQueue[i+1] = x;
        key++;
    }
}

void display()
{
    int i=0;
    while(i<key)
    {
        printf("%d\t", PQueue[i]);
        i++;
    }
    printf("\n");
}

int PQRemove()
{
    int x,j;
    if(key == 0)
    {
        printf("Underflow");
        exit(1);
    }
    else
    {
        x = PQueue[0];
        for(j = 1; j<key; j++)
        {
            PQueue[j-1] = PQueue[j];
        }
        key = key-1;
        return x;
    }
}

void main()
{
    int x,A[100];
    key = 0;
    PQInsert(9);
    PQInsert(6);
    PQInsert(2);
    PQInsert(1);
    PQInsert(9);
    PQInsert(8);
    x = PQRemove();
    printf("Deleted Element: %d\n", x);
    display();
    x = PQRemove();
    printf("Deleted Element: %d\n", x);
    display();
}

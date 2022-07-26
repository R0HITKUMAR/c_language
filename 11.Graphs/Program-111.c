/**************************************************************
111.Program for BFS on a Graph
Author : Rohit Kumar
Ad.No. : 2019B101051
**************************************************************/
#include <stdio.h>
#include <stdlib.h>
#define TRUE 1
#define FALSE 0
struct queue
{
    int item[10];
    int front;
    int rear;
};
struct queue Q;

void Initialize()
{
    Q.front = 0;
    Q.rear = -1;
}
void EnQueue(char x)
{
    Q.rear++;
    Q.item[Q.rear] = x;
}

char DeQueue()
{
    int x;
    x = Q.item[Q.front];
    Q.front++;
    return x;
}
int Empty()
 {
    if(Q.front-Q.front+1 == 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    int x,i;
    /*Adjacency Matrix*/
    int A[4][4]=   { 0,1,1,0,
                    1,0,0,1,
                    1,0,0,1,
                    0,1,1,0};
    /*Adjacency List from Adjacency List*/
    int Adj[4][4]={ 2,3,0,0,
                    1,4,0,0,
                    1,4,0,0,
                    2,3,0,0
                };
    int color[4]={1,1,1,1}; // 1 means white, 2 means grey, 3 means black
    int u,v;
    Initialize();
    EnQueue(1);
    color[1-1]=2;
    while(!Empty())
    {
        u=Q.item[Q.front];
        i=0;
        while(Adj[u-1][i]!=0) //all vertex v which are Adjacent to u
        {
            v=Adj[u-1][i];
            if(color[v-1]==1)
            {
                EnQueue(v);
                color[v-1]=2;
            }
            i++;
        }
    color[u-1]=3;
    DeQueue();
    printf("%d",u); //Printing vertex which is black (next vertex in BFS Sequence
    }
    return 0;
}

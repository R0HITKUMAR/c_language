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
    int x,N,i,j,k,l;
    int color[10]={1,1,1,1,1,1,1,1,1,1}; // 1 means white, 2 means grey, 3 means black
    int u,v;
    /*Adjacency Matrix*/
    int A[10][10];
    int Adj[10][10];
    printf("How many vertices are there in the graph?  :  ");
    scanf("%d",&N);
    printf("Input the Adjaceny Matrix\n");
    for(i=0;i<=N-1;i++)
    {
        for(j=0;j<=N-1;j++)
            scanf("%d",&A[i][j]);
    }
    /*Adjacency List from Adjacency Matrix*/
    for(i=0;i<=N-1;i++)
    {
        k=0;
        for(j=0;j<=N-1;j++)
        {
            if(A[i][j]!=0)
            Adj[i][k++]=j+1;
        }
        for(l=k;l<=N-1;l++)
            Adj[i][l]=0;
    }
    /*Printing Adjacency List */
    printf("Adjacency List\n");
    for(i=0;i<=N-1;i++)
    {
        for(j=0;j<=N-1;j++)
        printf("%d ",Adj[i][j]);
        printf("\n");
    }
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
            v++;
        }
    color[u-1]=3;
    DeQueue();
    printf("%d",u); //Printing vertex which is black (next vertex in BFS Sequence
    }
    return 0;
}


/**************************************************************
99.Program for creation of Binary Tree and finding its height
Author : Rohit Kumar
Ad.No. : 2019B101051
**************************************************************/
#include<stdio.h>
#include <stdlib.h>
struct node
{
    char data;
    struct node *Left;
    struct node *Right;
};

/********(Creating a node)***************/
struct node *MakeNode(char x)
{
    struct node *p;
    p = (struct node *)malloc(sizeof(struct node));
    p->data = x;
    p->Left = NULL;
    p->Right = NULL;
    return p;
}

/*********(Pre Order Traversal)************/
void PreOrderTraversal(struct node *tree)//DLR
{
    if (tree!=NULL)
    {
        printf("\t%c", tree->data);
        PreOrderTraversal(tree->Left);
        PreOrderTraversal(tree->Right);
    }
}

/*********(In Order Traversal)**************/
void InOrderTraversal(struct node *tree)//LDR
{
    if(tree!=NULL)
    {
        InOrderTraversal(tree->Left);
        printf("\t%c", tree->data);
        InOrderTraversal(tree->Right);
    }
}

/*********(Post Order Traversal)************/
void PostOrderTraversal(struct node *tree)//LRD
{
    if(tree!=NULL)
    {
        PostOrderTraversal(tree->Left);
        PostOrderTraversal(tree->Right);
        printf("\t%c", tree->data);
    }
}

/************(Height of root)******************/
int Heightofroot(struct node *root)
{
    if (root==NULL)
        return 0;
   else if (root->Left==NULL && root->Right==NULL )
        return 0;
    else
        return  1+ Max(Heightofroot(root->Left),Heightofroot(root->Right));
}
/************(Maximum)******************/
int Max(int a,int b)
{
    if (a>b)
        return a;
    else
        return b;
}
/****************************************/
void main()
{
    struct node *root=NULL;
    root=NULL;
    root = MakeNode('A');
    root->Left = MakeNode('B');
    root->Right = MakeNode('C');
    root->Left->Left = MakeNode('D');
    root->Left->Right = MakeNode('E');
    printf("PreOrder Traversal : ");
    PreOrderTraversal(root);
    printf("\n");
    printf("InOrder Traversal : ");
    InOrderTraversal(root);
    printf("\n");
    printf("PostOrder Traversal : ");
    PostOrderTraversal(root);
    printf("\n");
    printf("Height of Root : %d", Heightofroot(root));
}
/**************************************************************/


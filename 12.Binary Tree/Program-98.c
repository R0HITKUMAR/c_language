/**************************************************************
98.Program for recursive creation of Binary Tree and Traversals
Author : Rohit Kumar
Ad.No. : 2019B101051
**************************************************************/
#include<stdio.h>
#include <stdlib.h>
/*************************************/
struct node
{
    int data;
    struct node *Left;
    struct node *Right;
};

/****** (Creating a node) ***************/
struct node *MakeNode(int x)
{
    struct node *p;
    p = (struct node *)malloc(sizeof(struct node));
    p->data = x;
    p->Left = NULL;
    p->Right = NULL;
    return p;
}

/***** (Pre Order Traversal) ************/
void PreOrderTraversal(struct node *tree)
{
    if (tree!=NULL)
    {
        printf("%d\t", tree->data);
        PreOrderTraversal(tree->Left);
        PreOrderTraversal(tree->Right);
    }
}

/****InOrder Traversal**************/
void InOrderTraversal(struct node *tree)
{
    if(tree!=NULL)
    {
        InOrderTraversal(tree->Left);
        printf("%d\t", tree->data);
        InOrderTraversal(tree->Right);
    }
}

/***** (PostOrder Traversal)************/
void PostOrderTraversal(struct node *tree)

{
    if(tree!=NULL)
    {
        PostOrderTraversal(tree->Left);
        PostOrderTraversal(tree->Right);
        printf("%d\t", tree->data);
    }
}

/******** (Create Tree)***************/
CreateTree(struct node **tree)
{
    int x,ch;
    struct node *p;
    printf("Whether left of %d exists (1/0) : ",(*tree)->data);
    scanf("%d",&ch);
    if(ch == 1)
    {
        printf("Input Information for Left node : ");
        scanf("%d",&x);
        p = MakeNode(x);
        (*tree)->Left = p;
        CreateTree(&p);
    }
    printf("Whether Right of %d exists (1/0) : ",(*tree)->data);
    scanf("%d",&ch);
    if(ch==1)
    {
        printf("Input Information for Right node : ");
        scanf("%d",&x);
        p = MakeNode(x);
        (*tree)->Right = p;
        CreateTree(&p);
    }
}

/********************** (Main) **************************/
void main()
{
    struct node *root;
    int x;
    root=NULL;
    printf("Enter the information of the root node : ");
    scanf("%d",&x);
    root = MakeNode(x);
    CreateTree(&root);
    printf("PreOrder Traversal : ");
    PreOrderTraversal(root);
    printf("\n");
    printf("InOrder Traversal : ");
    InOrderTraversal(root);
    printf("\n");
    printf("PostOrder Traversal : ");
    PostOrderTraversal(root);
    printf("\n");
}
/**************************************************************/

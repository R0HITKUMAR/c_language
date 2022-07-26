/**************************************************************
100.Program for creation of Binary Tree and finding count of nodes having 2 children
101.Program for creation of Binary Tree and finding count of nodes having 1 children
102.Program for creation of Binary Tree and finding count of nodes having 0 children
Program for finding Height of Root Node
Program for finding Number of Nodes.

Author : Rohit Kumar
Ad.No. : 2019B101051
**************************************************************/
#include<stdio.h>
#include <stdlib.h>

struct node
{
    char data;
    struct node *left;
    struct node *right;
};

/********(Creating a node)***************/
struct node *MakeNode(char x)
{
    struct node *p;
    p = (struct node *)malloc(sizeof(struct node));
    p->data = x;
    p->left = NULL;
    p->right = NULL;
    return p;
}

/*********(Pre Order Traversal)************/
void PreOrderTraversal(struct node *root)//DLR
{
    if (root!=NULL)
    {
        printf("\t%c", root->data);
        PreOrderTraversal(root->left);
        PreOrderTraversal(root->right);
    }
}

/*********(In Order Traversal)**************/
void InOrderTraversal(struct node *root)//LDR
{
    if(root!=NULL)
    {
        InOrderTraversal(root->left);
        printf("\t%c", root->data);
        InOrderTraversal(root->right);
    }
}

/*********(Post Order Traversal)************/
void PostOrderTraversal(struct node *root)//LRD
{
    if(root!=NULL)
    {
        PostOrderTraversal(root->left);
        PostOrderTraversal(root->right);
        printf("\t%c", root->data);
    }
}
/******** (Create Tree)***************/
void CreateTree(struct node **tree)
{
    char x;
    int ch;
    struct node *p;
    printf("Whether left %d exists (1/0)",(*tree)->data);
    scanf("%d",&ch);
    if(ch==1)
    {
        printf("Input Information for Left node");
        scanf("%c",&x);
        p = MakeNode(x);
        (*tree)->left = p;
        CreateTree(&p);
    }

    printf("Whether Right %d exists (1/0)",(*tree)->data);
    scanf("%d",&ch);
    if(ch==1)
    {
        printf("Input Information for Right node");
        scanf("%c",&x);
        p=MakeNode(x);
        (*tree)->right = p;
        CreateTree(&p);
    }
}
/************(Count Node)******************/
int CountNode(struct node *root)
{
    if(root == NULL)
        return 0;
    else
        return 1 + CountNode(root->left)+CountNode(root->right);
}
/************(Count Leaf Node)******************/
int CountLeafNode(struct node *root)
{
    if(root == NULL)
        return 0;
    else if (root->left==NULL && root->right==NULL)
        return 1;
    else
        return  CountLeafNode(root->left)+CountLeafNode(root->right);
}
/************(Count 1 Degree Node)******************/
int Count1degree(struct node *root)
{
    if (root==NULL)
        return 0;
    else if (root->left==NULL && root->right==NULL )
        return 0;
    else if (root->left!=NULL && root->right!=NULL )
        return Count1degree(root->left) + Count1degree(root->right);
    else
        return 1+Count1degree(root->left) + Count1degree(root->right);
}
/************(Count 2 Degree Node)******************/
int Count2degree(struct node *root)
{
    if (root==NULL)
        return 0;
    else if (root->left==NULL && root->right==NULL )
        return 0;
    else if (root->left!=NULL && root->right!=NULL )
        return 1+Count2degree(root->left) + Count2degree(root->right);
    else
        return Count2degree(root->left) + Count2degree(root->right);
}
/************(Height of root)******************/
int Heightofroot(struct node *root)
{
    if (root==NULL)
        return 0;
   else if (root->left==NULL && root->right==NULL )
        return 0;
    else
    return  1+ Max(Heightofroot(root->left),Heightofroot(root->right));
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
    char x;
    printf("Enter the information of the root node: \n");
    scanf("%c",&x);
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
    printf("Number of Nodes is : %d", CountNode(root));
    printf("\nNo of 0 Degree OR Leaf Nodes : %d", CountLeafNode(root));
    printf("\nNo of 1 Degree Nodes : %d", Count1degree(root));
    printf("\nNo of 2 Degree Nodes : %d", Count2degree(root));
    printf("\nHeight of root : %d", Heightofroot(root));
}
/**************************************************************/



/**************************************************************
Author : Rohit Kumar
Ad.No. : 2019B101051
**************************************************************/
#include<stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
    struct node *father;
};
struct node *root;

/********(Creating a node)***************/
struct node *MakeNode(int x)
{
    struct node *p;
    p=(struct node*)malloc(sizeof(struct node));
    p->data = x;
    p->left = NULL;
    p->right = NULL;
    p->father = NULL;
    return p;
}
/*********(InOrder Traversal)**************/
InOrderTraversal(struct node *tree)//LDR
{
    if(tree!=NULL)
    {
        InOrderTraversal(tree->left);
        printf("%d\t",tree->data);
        InOrderTraversal(tree->right);
    }
}
/*********(BST Search)**************/
struct node *BSTSearch(int key)
{
    struct node *p;
    p=root;
    while (p!=NULL)
    {
        if (p->data==key)
            return p;
        else
        {
            if (key < p->data)
                p=p->left;
            else
                p=p->right;
        }
    }
    return NULL;
}
/*********(BST Insertion)**************/
BSTInsertion(key)
{
    struct node *p,*q,*r;
    p=root;
    q=NULL;
    while (p!=NULL)
    {
        q=p;
        if (key<p->data)
            p=p->left;
        else
            p=p->right;
    }
    if (key < q->data)
    {
        r=MakeNode(key);
        q->left=r;
        r->father=q;
    }
    else
    {
        r=MakeNode(key);
        q->right=r;
        r->father=q;
    }
}
/*********(BST Minimum)**************/
struct node *BSTMinimum(struct node *p)
{
    while (p->left!=NULL)
        p=p->left;
    return p;
}
/*********(BST Maximum)**************/
struct node *BSTMaximum(struct node *p)
{
    while (p->right!=NULL)
        p=p->right;
    return p;
}
/*********(BST Succesor)**************/
struct node *BSTSuccesor(struct node *p)
{
    struct node *q;
    p=root;
    if (p->right!=NULL)
    {
        q=BSTMinimum(p->right);
        return q;
    }
    else
    {
        q=p->father;
        while (q!=NULL && p==q->right)
        {
            p=q;
            q=q->father;
        }
        return q;
    }
}
/*********(BST Predecessor()**************/
struct node *BSTPredecessor(struct node *p)
{
    struct node *q;
    p=root;
    if (p->left!=NULL)
    {
        q=BSTMinimum(p->left);
        return q;
    }
    else
    {
        q=p->father;
        while (q!=NULL && p==q->left)
        {
            p=q;
            q=q->father;
        }
        return q;
    }
}
/****************************************/
void main()
{
    int A[10]={400,70,160,150,200,40,30,69,84,65,100};
    int i;
    struct node *p,*q;
    root=NULL;
    root=MakeNode(A[0]);
    for (i=1;i<9;i++)
        BSTInsertion(A[i]);
    printf("InOrder Insertion :\n");
    InOrderTraversal(root);
    p=BSTMinimum(root);
    printf("\nMinimum Element => %d",p->data);
    p=BSTMaximum(root);
    printf("\nMaximum Element => %d",p->data);
    p = BSTSearch(200);
    q = BSTSuccesor(p);
    printf("\nSuccesor => %d",q);
    q = BSTPredecessor(p);
    printf("\nPredecessor => %d",q);
}
/**************************************************************/



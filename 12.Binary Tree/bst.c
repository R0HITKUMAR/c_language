#include<stdio.h>
#include <stdlib.h>

struct node
{
    char data;
    struct node *left;
    struct node *right;
    struct node *father;
};
struct node *root;

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

InOrderTraversal(struct node *t)
{
    if(t!=NULL)
    {
        InOrderTraversal(t->left);
        printf("%d\t",t->data);
        InOrderTraversal(t->right);
    }
}

BSTInsertion(int key)
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

void main()
{
    int a[10]={400,600,453,222,111,55,54,33,122,99};
    int i;
    struct node *p,*q;
    root=NULL;
    root=MakeNode(a[0]);
    for (i=1;i<9;i++)
        BSTInsertion(a[i]);
    printf("InOrder Insertion :\n");
    InOrderTraversal(root);
}
/**************************************************************/



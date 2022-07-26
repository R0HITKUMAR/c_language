#include <stdio.h>
#include <stdlib.h>
struct bst
{
    int data;
    struct bst *left;
    struct bst *right;
};
struct bst *root;

CreateTree(struct bst *root, int data)
{
    struct bst *temp;
    if (root == NULL)
    {
        temp= (struct bst*)malloc(sizeof(struct bst));
        temp->data = data;
        temp->left = temp->right = NULL;
        return temp;
    }
    if (data < (root->data))
        root->left = CreateTree(root->left, data);

    else if (data > root->data)
        root -> right = CreateTree(root->right, data);
    return root;
}

int Search(struct bst *root, int data)
{
    if(root == NULL)
        printf("Element not found\n");
    else if(data < root->data)
        root->left=Search(root->left, data);
    else if(data > root->data)
        root->right=Search(root->right, data);
    else
        printf("Element found\n");
    return root;

}
/***** (Pre Order Traversal) ************/
void PreOrderTraversal(struct bst *tree)
{
    if (tree!=NULL)
    {
        printf("%d\t", tree->data);
        PreOrderTraversal(tree->left);
        PreOrderTraversal(tree->right);
    }
    else
        printf("Tree is Empty\n");
}

/****InOrder Traversal**************/
void InOrderTraversal(struct bst *tree)
{
    if(tree!=NULL)
    {
        InOrderTraversal(tree->left);
        printf("%d\t", tree->data);
        InOrderTraversal(tree->right);
    }
    else
        printf("Tree is Empty\n");
}

/***** (PostOrder Traversal)************/
void PostOrderTraversal(struct bst *tree)

{
    if(tree!=NULL)
    {
        PostOrderTraversal(tree->left);
        PostOrderTraversal(tree->right);
        printf("%d\t", tree->data);
    }
    else
        printf("Tree is Empty\n");
}

int Minimum(struct bst *root)
{
    if(root==NULL)
        return NULL;
    if(root->left)
        return Minimum(root->left);
    else
        return root;
}

int Deletion(struct bst *root, int data)
{
    struct bst *temp;
    if(root == NULL)
        printf("Element not found\n");
    else if(data < root->data)
        root->left = Deletion(root->left, data);
    else if(data > root->data)
        root->right = Deletion(root->right, data);
    else
    {
        if(root->right && root->left)
        {
            temp = Minimum(root->right);
            root -> data = temp->data;
            root -> right = Deletion(root->right,temp->data);
        }
        else
        {
            temp = root;
            if(root->left == NULL)
                root = root->right;
            else if(root->right == NULL)
                root = root->left;
            free(temp);
        }
    }
    return root;
}

void main()
{
    int data, ch, i, n;
    struct bst *root=NULL;
    while (1)
    {
        printf("1.Insertion\t2.Search\t3.Deletion\t4.Traversal\t5.Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &ch);
        switch (ch)
        {
            case 1: printf("Enter No of Value : " );
                    scanf("%d", &n);
                    printf("Enter the Values : ");
                    for(i=0; i<n; i++)
                    {
                        scanf("%d",&data);
                        root=CreateTree(root, data);
                    }
                    break;
            case 2: printf("Enter the element to search: ");
                    scanf("%d", &data);
                    root=Search(root, data);
                    break;
            case 3: printf("Enter the element to delete: ");
                    scanf("%d", &data);
                    root=Deletion(root, data);
                    break;
            case 4: printf("PreOrder Traversal      : ");
                    PreOrderTraversal(root);
                    printf("\n");
                    printf("InOrder Traversal       : ");
                    InOrderTraversal(root);
                    printf("\n");
                    printf("PostOrder Traversal     : ");
                    PostOrderTraversal(root);
                    printf("\n\n");
                    break;
            case 5: exit(0);
            default:printf("\nWrong option");
                    break;
        }
    }
}

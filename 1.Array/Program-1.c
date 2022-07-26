/**************************************************************
1.Program for Array Insertion, Deletion and traversal in Array
Author : Rohit Kumar
Ad.No. : 2019B101051
**************************************************************/
#include <stdio.h>
#include <stdlib.h>
int ArrayInsertion(int A[100],int n,int ele,int pos)
{
    int i;
    for(i=n-1;i>=pos;i--)
        A[i+1]=A[i];
    A[pos]=ele;
    return A;
}
int ArrayDeletion(int A[100],int n,int pos)
{
    int x,i;
    x=A[pos-1];
    for(i=pos;i<=n-1;i++)
        A[i-1]=A[i];
    n=n-1;
    printf("Deleted Element : %d\n", x);
    return x;
}
void ArrayTraversal(int A[100], int n)
{
    int i;
    printf("Elements are:\n");
    for (i=0; i<n; i++)
        printf("%d\t", A[i]);
}
void main()
{
    int n,A[100],i,ch,ele,pos;
    printf("Enter Array Size:\n");
    scanf("%d",&n);
    printf("Enter Array Elements:\n");
    for(i=0;i<n;i++)
        scanf("%d",&A[i]);
    printf("Enter:\n1.Insertion\n2.Deletion \n3.Traversal\n");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1 :printf("Enter Element to Insert and Position:\n");
                scanf("%d%d",&ele,&pos);
                ArrayInsertion(A,n+1,ele,pos-1);
                ArrayTraversal(A,n+1);
                break;
        case 2 :printf("Enter Element Position:\n");
                scanf("%d",&pos);
                ele = ArrayDeletion(A,n,pos);
                ArrayTraversal(A,n-1);
                break;
        case 3 :ArrayTraversal(A,n);
                break;
        default:printf("Invalid choice");
    }
}
/**************************************************************/



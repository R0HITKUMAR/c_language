/**************************************************************
2.Program for Insertion in Sorted Array
Author : Rohit Kumar
Ad.No. : 2019B101051
**************************************************************/
#include<stdio.h>
#include<stdlib.h>
void ArrayTraversal(int A[100], int n)
{
    int i;
    printf("Elements are:\n");
    for (i=0; i<n; i++)
        printf("%d\t", A[i]);
}
void ElementInsertInSortedArray(int A[100],int n)
{
    int i,x;
    printf("Enter Element to Insert:\n");
    scanf("%d",&x);
    i=n-1;
    while(A[i]>x)
    {
        A[i+1]=A[i];
        i--;
    }
    A[i+1]=x;
    ArrayTraversal(A,n+1);
}
void main()
{
    int n,A[100],i;
    printf("Enter Array Size:\n");
    scanf("%d",&n);
    printf("Enter Array Elements in Sorted Manner:\n");
    for(i=0;i<n;i++)
        scanf("%d",&A[i]);
    ElementInsertInSortedArray(A,n);
}
/**************************************************************/



/**************************************************************
9.Program for Quick Sort.
Author : Rohit Kumar
Ad.No. : 2019B101051
**************************************************************/
#include<stdio.h>
int A[100];
int Exchange(int i, int j)
{
    int temp;
    temp = A[i];
    A[i] = A[j];
    A[j] = temp;
}
int Partition(int A[], int Low, int High)
{
    int i=Low, j=High+1, pivot= A[Low];
    do
    {
        do
        {
            i++;
        }while(A[i]<pivot);
        do
        {
            j--;
        }while(A[j]>pivot);
        if(i<j)
            Exchange(i, j);
    }while(i<j);
    Exchange(Low, j);
    return j;
}
void QuickSort(int A[], int Low, int High)
{
    int j;
    if(Low < High)
    {
        j = Partition(A, Low, High);
        QuickSort(A, Low, j-1);
        QuickSort(A, j+1, High);
    }
}
void main()
{
    int i, n;
    printf("Enter Array Size:\n");
    scanf("%d", &n);
    printf("Enter Array Elements:\n");
    for(i=0; i<n; i++)
        scanf("%d", &A[i]);
    QuickSort(A, 0, n-1);
    printf("The sorted array is : \n");
    for(i=0; i<n; i++)
        printf("%d\t", A[i]);
}



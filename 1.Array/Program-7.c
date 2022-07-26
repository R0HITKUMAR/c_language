/**************************************************************
Program for Bubble, Selection and Insertion Sort
Author : Rohit Kumar || 1900320100131 || 2019B101051
**************************************************************/
#include<stdio.h>
#include<stdlib.h>
void Exchange(int *a,int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
void SelectionSort(int a[100],int n)
{
    int i,j,min;
    for (i=0;i<n;i++)
    {
        min = i;
        for(j=i+1;j<n;j++ )
        {
            if(a[j]<a[min])
                min=j;
        }
        Exchange(&a[min],&a[i]);
    }
    print(a,n);
}
void BubbleSort(int a[],int n)
{
    int i,j;
    for (i=0;i<n-1;i++)
    {
        for (j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
                Exchange(&a[j],&a[j+1]);
        }
    }
    print(a,n);
}
void InsertionSort(int a[], int n)
{
    int i,j,k;
    for(i=1;i<n;i++)
    {
        k = a[i];
        j = i-1;
        while(a[j]>k && j>=0)
        {
            a[j+1] = a[j];
            j=j-1;
        }
        a[j+1]=k;
    }
    print(a,n);

}
void print(int a[100],int n)
{
    int i;
    printf("The sorted array is :\n");
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);
}
void main()
{
    int n,a[100],ch,i;
    printf("Enter Array Size: \n");
    scanf("%d",&n);
    printf("Enter Array Elements:\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter :\n1.Selection Sort\n2.Bubble Sort\n3.Insertion Sort\n\n");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1 :SelectionSort(a,n);
                break;
        case 2 :BubbleSort(a,n);
                break;
        case 3 :InsertionSort(a,n);
                break;
        default :printf("Invalid Choice");
    }
}
/**************************************************************/





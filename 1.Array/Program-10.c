/**************************************************************
10.Program for Merge Sort
Author : Rohit Kumar
Ad.No. : 2019B101051
**************************************************************/
#include<stdio.h>
int a[50];
int b[50];
void Merge(int a[], int low,int mid, int high)
{
    int i=low, j=mid+1,k=low;
    while(i<=mid && j<=high)
    {
        if(a[i]<a[j])
        {
            b[k] = a[i++];
            k++;
        }
        else
        {
            b[k] = a[j++];
            k++;
        }
    }
    while (i <= mid)
    {
        b[k] = a[i++];
        k++;
    }
    while (j<= high)
    {
        b[k] = a[j++];
        k++;
    }
    for(i=0; i<=high; i++)
        a[i] = b[i];
}
void Sort(int a[], int low, int high)
{
    int mid;
    if(low < high)
    {
        mid = (low + high)/2;
        Sort(a, low, mid);
        Sort(a, mid+1, high);
        Merge(a, low, mid, high);
    }
}
void main()
{
    int i, n;
    printf("Enter Size:\n");
    scanf("%d", &n);
    printf("Enter Elements:\n");
    for(i=0; i<n; i++)
        scanf("%d", &a[i]);
    Sort(a, 0, n-1);
    printf("Sorted Array\n");
    for(i=0; i<n; i++)
        printf("%d\t", a[i]);
}

/**************************************************************
INPUT   :
OUTPUT  :

ALGORITHM
BEGIN:

END;

**************************************************************/



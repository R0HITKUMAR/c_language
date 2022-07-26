/**************************************************************
9.Program for Quick Sort.
Author : Rohit Kumar
Ad.No. : 2019B101051
**************************************************************/
#include<stdio.h>
int a[100];
int b[50];
int Exchange(int i, int j)
{
    int temp;
    temp = a[i];
    a[i] = a[j];
    a[j] = temp;
}
int Partition(int a[], int Low, int High)
{
    int i=Low, j=High+1, pivot= a[Low];
    do
    {
        do
        {
            i++;
        }while(a[i]<pivot);
        do
        {
            j--;
        }while(a[j]>pivot);
        if(i<j)
            Exchange(i, j);
    }while(i<j);
    Exchange(Low, j);
    return j;
}
void QuickSort(int a[], int Low, int High)
{
    int j;
    if(Low < High)
    {
        j = Partition(a, Low, High);
        QuickSort(a, Low, j-1);
        QuickSort(a, j+1, High);
    }
}
//Function for Merge Sort.
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
void MergeSort(int a[], int low, int high)
{
    int mid;
    if(low < high)
    {
        mid = (low + high)/2;
        MergeSort(a, low, mid);
        MergeSort(a, mid+1, high);
        Merge(a, low, mid, high);
    }
}

//Driver Function
void main()
{
    int n,a[100],ch,i;
    printf("Enter Array Size  :  ");
    scanf("%d",&n);
    printf("Enter Array Elements  :  ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("1.Quick Sort\t2.Merge Sort\n");
    printf("Enter Your Choice  :  ");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1 :QuickSort(a,0,n-1);
                printf("The Sorted Array is : \n");
                for(i=0; i<n; i++)
                        printf("%d\t", a[i]);
                break;
        case 2 :MergeSort(a, 0, n-1);
                printf("The Sorted Array is : \n");
                for(i=0; i<n; i++)
                        printf("%d\t", a[i]);
                break;
        default :printf("Invalid Choice");
    }
}


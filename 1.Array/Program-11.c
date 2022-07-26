/**************************************************************
11.Program for Merging of two Sorted Arrays
Author : Rohit Kumar
Ad.No. : 2019B101051
**************************************************************/
#include<stdio.h>
void MergeArray(int a[100],int b[100],int m,int n)
{
    int c[m+n],i=0,j=0,k=0;
    while (i<m && j<n)
    {
        if (a[i]<b[j])
        {
            c[k]=a[i++];
            k++;
        }
        else if (a[i]>b[j])
        {
            c[k]=b[j++];
            k++;
        }
        else
        {
            c[k]=a[i++];
            k++;
        }
    }
    while (i<m)
    {
        c[k]=a[i++];
        k++;
    }
    while (j<n)
    {
        c[k]=b[j++];
        k++;
    }
	for (i=0;i<k;i++)
        printf("%d\t",c[i]);
}
void main()
{
    int a[100],b[100],i,m,n;
    printf("Enter Size of 1st and 2nd Set/Array:\n");
    scanf("%d%d",&m,&n);
    printf("Enter 1st Set/Array:\n");
    for (i=0;i<m;i++)
        scanf("%d",&a[i]);
    printf("Enter 2nd Set/Array:\n");
    for (i=0;i<n;i++)
        scanf("%d",&b[i]);
    MergeArray(a,b,m,n);
}
/**************************************************************/





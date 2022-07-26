/**************************************************************
17.Program for Counting Sort
Author : Rohit Kumar
Ad.No. : 2019B101051
**************************************************************/
#include <stdio.h>
int countingsort(int a[],int n,int k)
{
    int c[50],b[50],i;
    for (i=0;i<=k;i++)
    {
        c[i]=0;
    }
    for (i=0;i<=n-1;i++)
    {
       c[a[i]]=c[a[i]]+1;
    }
    for (i=1;i<=k;i++)
    {
      c[i]=c[i]+c[i-1];
    }
    for (i=n-1;i>=0;i--)
    {
        b[c[a[i]]-1]=a[i];
        c[a[i]]=c[a[i]]-1;
    }
    printf("Resultant Array is :\n");
    for (i=0;i<n;i++)
    {
        printf("%d\t",b[i]);
    }
}

void main ()
{
    int a[]={3,7,6,1,4,2,3,1,4,5,6,1,2};
    int n=13,i,max=0;
    printf("Input Array is :\n");
    for (i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    for (i=0;i<n;i++)
    {
        if (a[i] > max)
            max = a[i];

    }
    printf("\n");
    countingsort(a,n,max);
}

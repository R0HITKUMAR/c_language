/**************************************************************
14.Program for Set Union
Author : Rohit Kumar
Ad.No. : 2019B101051
**************************************************************/
#include<stdio.h>
void setunion(int a[],int b[],int m,int n)
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
main()
{
    int a[10],b[10],i,m,n;
    printf("Enter Size of 1st and 2nd Set/Array:\n");
    scanf("%d%d",&m,&n);
    printf("Enter 1st Set/Array:\n");
    for (i=0;i<m;i++)
        scanf("%d",&a[i]);
    printf("Enter 2nd Set/Array:\n");
    for (i=0;i<n;i++)
        scanf("%d",&b[i]);
    setunion(a,b,m,n);
}
/**************************************************************
INPUT   :
OUTPUT  :

ALGORITHM
BEGIN:

END;

**************************************************************/




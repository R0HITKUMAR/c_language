/**************************************************************
16.Program for Set Difference
Author : Rohit Kumar
Ad.No. : 2019B101051
**************************************************************/
#include<stdio.h>
void setdiff(int a[],int b[],int m,int n)
{
    int c[m+n],i=0,j=0,k=0,count=0;
    while (i<m && j<n)
    {
        if (a[i]<b[j])
        {
            c[k]=b[j++];
            k++;
            count++;
        }
        else if (a[i]>b[j])
        {
            c[k]=b[j++];
            k++;
            count++;
        }
        else
        {
            c[k]=a[i++];
            k++;
        }
    }
	for (i=0;i<count;i++)
        printf("%d\t",c[i]);
}
main()
{
    int a[10],b[10],i,m,n;
    printf("Enter Size of 1st and 2nd Set/Array:\n");
    scanf("%d%d",&m,&n);
    for (i=0;i<m;i++)
        scanf("%d",&a[i]);
    for (i=0;i<n;i++)
        scanf("%d",&b[i]);
    setdiff(a,b,m,n);
}
/**************************************************************
INPUT   :
OUTPUT  :

ALGORITHM
BEGIN:

END;

**************************************************************/



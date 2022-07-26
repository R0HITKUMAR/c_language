/**************************************************************
70.Program for 1-D array implementation of Upper Triangular Sparse Matrix
Author : Rohit Kumar
Ad.No. : 2019B101051
**************************************************************/
#include<stdio.h>
int upper(int a[20][20],int m,int n)
{
    int i,j;
    for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
        {
            if(i<=j)
               printf("%d\t",a[i][j]);
            else
              printf("0\t");
        }
        printf("\n");
    }
}
int main()
{
    int m,n,j,i,a[20][20];
    printf("Enter No. of Rows and Columns:\n");
    scanf("%d%d",&m,&n);
    printf("Enter Matrix:\n");
    for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    }
    printf("Upper Triangular Matric:\n");
    upper(a,m,n);
}
/**************************************************************
INPUT   :
OUTPUT  :

ALGORITHM
BEGIN:

END;

**************************************************************/



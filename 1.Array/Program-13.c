/**************************************************************
13.Program for Finding set elements of A that does not belongs to set B
Author : Rohit Kumar
Ad.No. : 2019B101051
**************************************************************/
#include<stdio.h>
int a[50];
int b[50];
void AsubB(int a[], int b[], int m, int n)
{
    int i=0, j=0, k=0;
    while(i<m && j<n)
    {
        if(a[i]<b[j])
        {
            printf("%d\t",a[i]);
            k++;
            i++;
        }
        else if(b[j]<a[i])
        {
            j++;
        }
        else
        {
            i++;
            j++;
        }
    }
    while (i<m)
    {
        printf("%d\t",a[i]);
        k++;
        i++;
    }
}
void main()
{
    int m, n, i;
    printf("Enter Size of 1st and 2nd Set/Array:\n");
    scanf("%d%d",&m,&n);
    printf("Enter 1st Array Elements:\n");
    for(i=0;i<m;i++)
        scanf("%d", &a[i]);
    printf("Enter 2nd Array Elements:\n");
    for(i=0;i<n;i++)
        scanf("%d",&b[i]);
    printf("The A-B set is : \n");
    AsubB(a, b ,m, n);

}

/**************************************************************
INPUT   :
OUTPUT  :

ALGORITHM
BEGIN:

END;

**************************************************************/




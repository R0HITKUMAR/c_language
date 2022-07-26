/**************************************************************
2.Program for Insertion in Sorted Array
Author : Rohit Kumar
Ad.No. : 2019B101051
**************************************************************/
#include<stdio.h>
#include<stdlib.h>
void main()
{
    int i,n,*a,x;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    printf("Enter the elements of the array\n");
    a = (int*)malloc((n+1)*sizeof(int));
    for(i=0; i<n; i++)
        scanf("%d", a+i);
    printf("Enter the element to be inserted\n");
    scanf("%d",&x);
    i=n-1;
    while(*(a+i)>x)
    {
        *(a+i+1)=*(a+i);
        i--;

    }
    *(a+i+1) = x;
    n++;
    printf("The altered array is: \n");
    for(i=0; i<n; i++)
        printf("%d\n", *(a+i));
}

/**************************************************************
INPUT   :
OUTPUT  :

ALGORITHM
BEGIN:

END;

**************************************************************/




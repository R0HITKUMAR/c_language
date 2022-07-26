/**************************************************************
4.Program For Linear Search
Author : Rohit Kumar
Ad.No. : 2019B101051
**************************************************************/
#include<stdio.h>
#include<stdlib.h>
int LinearSearch(int *a, int n, int ele)
{
    int i;
    for(i=0; i<n; i++)
    {
        if(*(a+i)==ele)
            return i+1;
    }
    return -1;
}
void main()
{
    int i, n, *a, ele, pos;
    printf("Enter the size of the array\n");
    scanf("%d", &n);
    a = (int*)malloc(n*sizeof(int));
    printf("Enter the elements of the array:\n");
    for(i=0; i<n; i++)
        scanf("%d", a+i);
    printf("Enter the element to be searched\n");
    scanf("%d", &ele);
    pos = LinearSearch(a, n, ele);
    if(pos>=0)
        printf("The element is found at : %d", pos);
    else
        printf("The element is not found");
}

/**************************************************************
INPUT   :
OUTPUT  :

ALGORITHM
BEGIN:

END;

**************************************************************/




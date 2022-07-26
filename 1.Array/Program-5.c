/**************************************************************
5.Program for Binary Search
Author : Rohit Kumar
Ad.No. : 2019B101051
**************************************************************/
#include<stdio.h>
#include<stdlib.h>
int BinarySearch(int *a, int n, int ele)
{
     int low=0, high=n-1, mid;
     while(low<=high)
     {
         mid = (low+high)/2;
         if(*(a+mid)==ele)
            return mid+1;
         else if(ele < *(a+mid))
            high = mid - 1;
         else if(ele > *(a+mid))
            low = mid +1;
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
    pos = BinarySearch(a, n, ele);
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




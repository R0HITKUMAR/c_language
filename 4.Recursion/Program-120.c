/**************************************************************
120.Binary Search with Recursion
Author : Rohit Kumar
Ad.No. : 2019B101051
**************************************************************/
#include<stdio.h>
int Binarysrc(int A[], int f, int l, int ele)
{
    if(f>l)
        return -1;
    int mid = (f+l)/2;
    if( A[mid] == ele )
        return mid;
    else if( ele < A[mid] )
        Binarysrc(A, f, mid-1, ele);
    else
        Binarysrc(A, mid+1, l, ele);
}
int main() {
   int A[] = {10,15,20,25,30,35,40,45,50,55};
   int n=25;
   printf("%d is found at Position  %d \n",n,Binarysrc(A,0,9,n)+1);
   return 0;
}
/**************************************************************
INPUT   :   {10,15,20,25,30,35,40,45,50,55} AND n=25
OUTPUT  :   25 is found at Position  4

ALGORITHM
BEGIN:
        IF f>l THEN
            return -1;
        int mid = (f+l)/2;
        IF A[mid] == ele THEN
            return mid;
        ELSE IF  ele < A[mid]
            Binarysrc(A, f, mid-1, ele);
        ELSE
            Binarysrc(A, mid+1, l, ele);

END;

**************************************************************/




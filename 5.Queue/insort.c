#include <math.h>
#include <stdio.h>
void InsertionSort(int A[], int N)
{
    int i,key,j;
    for (i=1;i<N;i++)
    {
        key = A[i];
        j=i-1;
        while (j >= 0 && A[j] > key) {
            A[j + 1] = A[j];
            j=j-1;
        }
        A[j+1]=key;
    }
}

void display(int A[], int N)
{
    int i;
    for (i=0;i<N;i++)
        printf("%d\t", A[i]);
    printf("\n");
}

int main()
{
    int A[]={1,4,2,9,6};
    int N=sizeof(A)/sizeof(A[0]);
    InsertionSort(A, N);
    display(A,N);
    return 0;
}

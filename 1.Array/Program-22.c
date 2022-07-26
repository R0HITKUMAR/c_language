/**************************************************************
22.Program for Matrix Transpose without Second matrix
Author : Rohit Kumar
Ad.No. : 2019B101051
**************************************************************/
#include<stdio.h>
#include<math.h>
void PrintTranspose(int a[3][3])
{
    int i ,j, temp;
    for(i=0; i<3; i++)
    {
        for(j=0; j<i; j++)
        {
            temp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i]  = temp;
        }
    }
    printf("The Transpose Matrix is : \n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

}
main ()
{
    int a[3][3]={
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    PrintTranspose(a);
}
/**************************************************************
INPUT :
            1   2   3
    A   =   4   5   6
            7   8   9

---------------------------------------------------------------
OUTPUT  :
            1      4      7
    A   =   2      5      8
            3      6      9

---------------------------------------------------------------
ALGORITHM
BEGIN:
        i=0
        k=0
        FOR i=0 to 3 THEN
            FOR j to 3 THEN
                temp = a[i][j];
                a[i][j] = a[j][i];
                a[j][i]  = temp;
END;

**************************************************************/


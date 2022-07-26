/**************************************************************
59.Program for finding factorial of a given number using  recursion
Author : Rohit Kumar
Ad.No. : 2019B101051
**************************************************************/
#include<stdio.h>
int recursion(int n);
int main() {
    int n=7;
    printf("Factorial of %d = %d", n, recursion(n));
    return 0;
}
int recursion(int n)
{
    if (n>=1)
        return n*recursion(n-1);
    else
        return 1;
}
/**************************************************************
INPUT   :   5
OUTPUT  :   5040

ALGORITHM
BEGIN:
    IF n = 1 THEN
        return 1
    ELSE
        return n*recursion(n-1)
END;

**************************************************************/




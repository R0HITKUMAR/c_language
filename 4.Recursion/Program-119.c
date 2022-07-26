/**************************************************************
119.Program for Finding sum of the digits of the number
Author : Rohit Kumar
Ad.No. : 2019B101051
**************************************************************/
#include<stdio.h>
int sum(int n);
void main()
{
    int n=9876;
    printf("Sum :   %d",sum(n));
}
int sum(int n)
{
    if (n != 0)
        return (n % 10 + sum (n / 10));
    else
       return 0;
}
/**************************************************************
INPUT   :   9876
OUTPUT  :   30

ALGORITHM
BEGIN:
        IF n != 0 THEN
            return (n % 10 + sum (n / 10));
        ELSE
            return 0;
END;

**************************************************************/




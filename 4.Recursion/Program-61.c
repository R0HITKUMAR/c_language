/**************************************************************
61.Program for Computing A raised to power n using Recursion
Author : Rohit Kumar
Ad.No. : 2019B101051
**************************************************************/
#include<stdio.h>
int power(int a,int b);
int main()
{
    int a=7,b=10;
    printf("Power   :   %d", power(a,b));
    return 0;
}
int power(int a,int b)
{
    if (b==0)
        return 1;
    else
        return a*power(a,b-1);
}
/**************************************************************
INPUT   :   a=7 and b=10
OUTPUT  :   282475249

ALGORITHM
BEGIN:
    IF b == 0 THEN
        return 1
    ELSE
        return a*power(a,b-1)
END;

**************************************************************/




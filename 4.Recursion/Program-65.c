/**************************************************************
65.Program to reverse the given number using Recursion
Author : Rohit Kumar
Ad.No. : 2019B101051
**************************************************************/
#include<stdio.h>
void reverse(int n);
int main()
{
    int n=12345;
    reverse(n);
    return 0;
}
void reverse(int n)
{
    int digit;
    if (n == 0)
        return;
    else
    {
        digit = n % 10;
        printf("%d", digit);
        reverse(n/10);
    }
}
/**************************************************************
INPUT   :   12345
OUTPUT  :   54321

ALGORITHM
BEGIN:
        IF n==0 THEN
            return
        ELSE
            digit=n%10
            reverse(n\10)
END;

**************************************************************/




/**************************************************************
64.1.Program for finding GCD of two numbers using Recursion
Author : Rohit Kumar
Ad.No. : 2019B101051
**************************************************************/
#include<stdio.h>
int gcd(int a,int b);
int main()
{
    int a=3,b=10;
    printf("GCD  :   %d", gcd(a,b));
    return 0;
}
int gcd(int a,int b)
{
    if (a==b)
        return a;
    else
    {
        if (a>b)
            return gcd(a-b,b);
        else
            return gcd(a,b-a);
    }
}
/**************************************************************
INPUT   :   a=3 and b=10
OUTPUT  :   1

ALGORITHM
BEGIN:
    IF a==b THEN
        return a;
    ELSE
        IF a>b THEN
            return gcd(a-b,b)
        ELSE
            return gcd(a,b-a)
END;

**************************************************************/
/**************************************************************
64.2.Program for finding GCD of two numbers using Recursion
Author : Rohit Kumar
Ad.No. : 2019B101051
**************************************************************/
#include<stdio.h>
int gcd(int a,int b);
int main()
{
    int a=3,b=10;
    printf("GCD  :   %d", gcd(a,b));
    return 0;
}
int gcd(int a,int b)
{
    if (a==b)
        return a;
    else
    {
        if (a>b)
            return gcd(a%b,b);
        else
            return gcd(a,b%a);
    }
}
/**************************************************************
INPUT   :   a=3 and b=10
OUTPUT  :   1

ALGORITHM
BEGIN:
    IF a==b THEN
        return a;
    ELSE
        IF a>b THEN
            return gcd(a%b,b)
        ELSE
            return gcd(a,b%a)
END;


**************************************************************/

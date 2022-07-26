/**************************************************************
63.Program for finding nth Fibonacci number using Recursion
and improving its run time to save stack operations
Author : Rohit Kumar
Ad.No. : 2019B101051
**************************************************************/
//Advanced Method
# include <stdio.h>
int prevfibbtable[100];
fibb(int n)
{
    if (n==1)
        return 0;
    else
        if (n==2)
            return 1;
        else
        {
            if (prevfibbtable[n]==0)
                prevfibbtable[n]=(prevfibbtable(n-1)+prevfibbtable (n-2));
            return prevfibbtable[n];
        }
}
main()
{
    printf("%lld",fibb(100));
}
/**************************************************************
//WAP to print fibbonacci series
#include<stdio.h>
main()
{
    int n,c,a=0,b=1,i;
    scanf("%d",&n);
    printf("%d  %d",a,b);
    for (i=0;i<n-2;i++)
    {
        c=a+b;
        printf("\t%d",c);
        a=b;
        b=c;
    }
}
***************************************************************
//WAP to Calculate n term in fibbonacci series
# include <stdio.h>
fibb(int n)
{
    if (n==1)
        return 0;
    else
        if (n==2)
            return 1;
        else
            return fibb(n-1)+fibb (n-2);
}
main()
{
    int f;
    f=fibb(10);
    printf("%d",f);
}

/**************************************************************
INPUT   :   10
OUTPUT  :   34

ALGORITHM
BEGIN:
        IF n==1 THEN
        return 0;
    else
        if (n==2)
            return 1;
        else
            return fibb(n-1)+fibb (n-2);

END;

**************************************************************/




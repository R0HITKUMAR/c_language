/**************************************************************
29.Program for Hash Table Implementation for Basic Hash Function
(Without collisions)
Author : Rohit Kumar
Ad.No. : 2019B101051
**************************************************************/
#include<stdio.h>
#include<math.h>

int length (int n)
{
    int c=0;
    while(n!=0)
    {
        n=n/10;
        c++;
    }
    return c;
}
int Prime(int n)
{
    int f=0, i;
    for(i=2; i<=sqrt(n); i++)
    {
        if(n%i == 0)
            f++;
    }
    if(f==0)
        return 1;
    else
        return 0;
}

int division(int key,int TS)
{
    int

}
int midsquare(int key,int TS)
{
    int L,x,h;
    long long int n;
    L=length(key);
    n=key*key;
    x=ceil((2*L - TS)/2);
    n/=pow(10,x);
    h=n%(int)pow(10,L);
   return h;
}

int folding (int key,int TS)
{
    int h,sum=0;
    while (key>0)
    {
        sum+=key%TS;
        key/=TS;
    }
    h=sum%TS;
    return h;
}

void main()
{
    int key,TS,val;
    printf("Enter any Number and Size of Table :\n");
    scanf("%d%d",&key,&TS);
    val =folding(key,TS);
    printf("Folding Method : %d",val);
    val = division(key,TS);
    printf("\nDivision Method : %d\n",val);
    val = midsquare(key,TS);
    printf("MidSquare Method : %d\n",val);


}

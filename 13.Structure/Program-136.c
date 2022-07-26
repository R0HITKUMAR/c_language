/**************************************************************
136. Write a program to add two time in hour, minute and second using structure.
The values of the time is to be taken from the user.
Author : Rohit Kumar
Ad.No. : 2019B101051
**************************************************************/
#include<stdio.h>
#include<math.h>
/**************************************************************/
 struct Time
 {
     int h;
     int m;
     int s;
 };
 struct Time T1;
 struct Time T2;
 struct Time T3;

/**************************************************************/
void sum()
{
    int temp=0;
    T3.s=T1.s+T2.s;
    if (T3.s>=60)
    {
        temp=T3.s/60;
        T3.s=T3.s%60;
    }
    T3.m=T1.m+T2.m+temp;
    if (T3.m>=60)
    {
        temp=T3.m/60;
        T3.m=T3.m%60;

    }
    T3.h=T1.h+T2.h+temp;
    printf("TOTAL TIME =\t%d : %d : %d",T3.h,T3.m,T3.s);
}
/**************************************************************/
void main()
{

    printf("Enter First Time :\n");
    scanf("%d%d%d",&T1.h,&T1.m,&T1.s);
    printf("Enter Second Time :\n");
    scanf("%d%d%d",&T2.h,&T2.m,&T2.s);
    sum(T1.h,T1.m,T1.s,T2.h,T2.m,T2.s);
}
/**************************************************************/

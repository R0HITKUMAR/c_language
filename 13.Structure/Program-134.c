/**************************************************************
134. Write a program to add two distances in inch-feet using structure.
The values of the distances is to be taken from the user.
Author : Rohit Kumar
Ad.No. : 2019B101051
**************************************************************/
#include<stdio.h>
#include<math.h>
/**************************************************************/
 struct dis
 {
     int in;
     int ft;
 };
 struct dis a;
 struct dis b;
 struct dis c;

/**************************************************************/
void sum()
{
    int temp=0;
    c.in=a.in+b.in;
    if (c.in>=12)
    {
        temp=c.in/12;
        c.in=c.in%12;
    }
    c.ft=a.ft+b.ft+temp;
    printf("Resultant Distance :\t %d ft %d in",c.ft,c.in);
}

/**************************************************************/
void main()
{

    printf("Enter First Distance :\n");
    scanf("%d%d",&a.ft,&a.in);
    printf("Enter First Distance :\n");
    scanf("%d%d",&b.ft,&b.in);
    sum(a.ft,a.in,b.ft,b.in);
}
/**************************************************************/


/**************************************************************
135. Write a program to add two complex numbers using structure.
The values of the complex number is to be taken from the user.
Author : Rohit Kumar
Ad.No. : 2019B101051
**************************************************************/
#include<stdio.h>
#include<math.h>
/**************************************************************/
 struct Complex
 {
     int r;
     int i;
 };
 struct Complex a;
 struct Complex b;

/**************************************************************/
void sum()
{
    printf("Addition : %d + i %d",a.r+b.r,a.i+b.i);
}
/**************************************************************/
void sub()
{
    printf("\nSubtraction : %d + i %d",a.r-b.r,a.i-b.i);
}
/**************************************************************/
void mul()
{
    printf("\nMultiplication : %d + i %d",a.r*b.r,a.i*b.i);
}
/**************************************************************/
void main()
{

    printf("Enter real & imaginary of 1st Complex :\n");
    scanf("%d%d",&a.r,&a.i);
    printf("Enter real & imaginary of 2nd Complex :\n");
    scanf("%d%d",&b.r,&b.i);
    sum(a.r,a.i,b.r,b.i);
    sub(a.r,a.i,b.r,b.i);
    mul(a.r,a.i,b.r,b.i);
}
/**************************************************************/


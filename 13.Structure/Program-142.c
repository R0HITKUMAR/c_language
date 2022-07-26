/**************************************************************
142.Write a structure to store the names, salary and hours
of work per day of 10 employees in a company. Write a program to
increase the salary depending on the number of hours of work per
day as follows and then print the name of all the employees
along with their final salaries.

Author : Rohit Kumar
Ad.No. : 2019B101051
**************************************************************/
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
/**************************************************************/
 struct employ
 {
     char name[20];
     int sal;
     int hrs;
 }e[10];

/**************************************************************/
void increase()
{
    int i;
    for (i=0;i<10;i++)
    {
       if (e[i].hrs==8)
        e[i].sal=e[i].sal+50;
       else if (e[i].hrs ==10)
        e[i].sal=e[i].sal+100;
       else if (e[i].hrs >=12)
        e[i].sal=e[i].sal+150;
    }
}
/**************************************************************/
void display()
{
    int i;
    for (i=0;i<10;i++)
    {
       printf("%s\t%d\t%d\n",e[i].name,e[i].sal,e[i].hrs);
    }
}
/**************************************************************/
void main()
{
    int i;
    for (i=0;i<10;i++)
    {
        printf("Enter Name,Salary and Working Hours of %d Employ\n",i+1);
        fflush(stdin);
        gets(e[i].name);
        scanf("%d%d",&e[i].sal,&e[i].hrs);
    }
    increase();
    display();
}
/**************************************************************/




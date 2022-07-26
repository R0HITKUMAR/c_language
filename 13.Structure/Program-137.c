/**************************************************************
137. Enter the marks of 5 students in Chemistry, Mathematics and
\Physics (each out of 100) using a structure named Marks having elements \
roll no., name, chem_marks, maths_marks and phy_marks and
then display the percentage of each student.
Author : Rohit Kumar
Ad.No. : 2019B101051
**************************************************************/
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
/**************************************************************/
 struct Marks
 {
     int roll_no;
     char name[20];
     int chem_marks;
     int math_marks;
     int phy_marks;
 }m[5];

/**************************************************************/
void percentage()
{
    int i;
    float p;
    printf("Percentage :\n");
    for (i=0;i<5;i++)
    {
        p=(m[i].chem_marks+m[i].math_marks+m[i].phy_marks)/3;
        printf("%d\t%s\t%f\n",m[i].roll_no,m[i].name,p);
    }
}
/**************************************************************/
void main()
{
    int i;
    for (i=0;i<5;i++)
    {
        printf("Enter Name,Roll No,Marks in Chem,math & Physics\n");
        fflush(stdin);
        gets(m[i].name);
        scanf("%d%d%d%d",&m[i].roll_no,&m[i].chem_marks,&m[i].math_marks,&m[i].phy_marks);
    }
    percentage();
}
/**************************************************************/



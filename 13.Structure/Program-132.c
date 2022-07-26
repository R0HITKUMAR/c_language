/**************************************************************
132.2. Write a program to store the roll no. (starting from 1),
name and age of 5 students and then print the details of the student with roll no. 1.
Author : Rohit Kumar
Ad.No. : 2019B101051
**************************************************************/
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
/**************************************************************/
 struct student
 {
     int roll_no;
     char name[20];
     int age;
 }s[2];

/**************************************************************/
void display()
{
    int i;
    printf("Details of Students with Roll No 1\n");
    for (i=0;i<2;i++)
    {
        if (s[i].roll_no == 1)
        printf("%d\t%s\t%d\n",s[i].roll_no,s[i].name,s[i].age);
    }
}
/**************************************************************/
void main()
{
    int i;
    for (i=0;i<2;i++)
    {
        printf("Enter Name,Roll No,Age\n");
        fflush(stdin);
        gets(s[i].name);
        scanf("%d%d",&s[i].roll_no,&s[i].age);
    }
    display();
}
/**************************************************************/





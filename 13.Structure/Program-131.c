/**************************************************************
131.Write a program to store and print the roll no., name, age
and marks of a student using structures.
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
     int marks;
 }s[10];

/**************************************************************/
void display()
{
    int i;
    printf("******************Details******************\n");
    printf("Roll No\t\tName\tAge\tMarks\n");
    for (i=0;i<10;i++)
    {
        printf("%d\t%s\t%d\t%d\n",s[i].roll_no,s[i].name,s[i].age,s[i].marks);
    }
}
/**************************************************************/
void main()
{
    int i;
    for (i=0;i<10;i++)
    {
        printf("Enter Name,Roll No,Age and Marks\n");
        fflush(stdin);
        gets(s[i].name);
        scanf("%d%d%d",&s[i].roll_no,&s[i].age,&s[i].marks);
    }
    display();
}
/**************************************************************/




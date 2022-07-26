/**************************************************************
133.Write a program to store and print the roll no., name, age,
address and marks of 15 students using structure.
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
     char add[20];
     int age;
 }s[10];

/**************************************************************/
void display()
{
    int i;
    printf("******************Details******************\n");
    printf("Roll No\t\tName\tAddress\tAge\n");
    for (i=0;i<2;i++)
    {
        printf("%d\t%s\t%s\t%d\n",s[i].roll_no,s[i].name,s[i].add,s[i].age);
    }
}
/**************************************************************/
void main()
{
    int i;
    for (i=0;i<2;i++)
    {
        printf("Enter Name,Address,Roll No and Age\n");
        fflush(stdin);
        gets(s[i].name);
        fflush(stdin);
        gets(s[i].add);
        scanf("%d%d",&s[i].roll_no,&s[i].age);
    }
    display();
}
/**************************************************************/




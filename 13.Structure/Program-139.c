/**************************************************************
139. Write a structure to store the roll no., name, age (between 11 to 14)
 and address of students (more than 10). Store the information of the students.

(i).Write a function to print the names of all the students having age 14.
(ii).Write another function to print the names of all the students having even roll no.
(iii).Write another function to display the details of the student whose roll no is given.
Author : Rohit Kumar
Ad.No. : 2019B101051
**************************************************************/
#include<stdio.h>
#include<math.h>
/**************************************************************/
 struct student
 {
     int roll_no;
     char name[20];
     int age;
     char add[20];
 }s[20];

/**************************************************************/
void displayage14()
{
    int i;
    printf("Students with Age 14 are :\n");
    for (i=0;i<20;i++)
    {
        if(s[i].age==14)
            printf("%s\n",s[i].name);
    }
}
/**************************************************************/
void displayevenroll()
{
    int i;
    printf("Students with Even Roll No are :\n");
    for (i=0;i<20;i++)
    {
        if(s[i].roll_no%2==0)
        printf("%s\n",s[i].name);
    }
}
/**************************************************************/
void displayall()
{
    int i;
    printf("Students with Roll No :\n");
    for (i=0;i<20;i++)
    {
        if(s[i].roll_no!=0)
        printf("%d\t%s\t%d\t%s\n",s[i].roll_no,s[i].name,s[i].age,s[i].add);
    }

}
/**************************************************************/
void main()
{
    int i;
    for (i=0;i<20;i++)
    {
        printf("Enter Name,Roll No,Age(11-14) and Address\n");
        fflush(stdin);
        gets(s[i].name);
        scanf("%d%d",&s[i].roll_no,&s[i].age);
        fflush(stdin);
        gets(s[i].add);
    }
    printf("************************\n");
    displayage14();
    printf("************************\n");
    displayevenroll();
    printf("************************\n");
    displayall();
}
/**************************************************************/




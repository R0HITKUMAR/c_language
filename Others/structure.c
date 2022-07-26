***********************( STRUCTURE STATEMENTS )***********************

// WAP to Create a Database for a Student.
#include<stdio.h>
struct student
{
    char n[20];
    int r;
    float m;
}s;
main()
{
    printf("Name,Roll No and Marks of a Student:\n");
    gets(s.n);
    scanf("%d",&s.r);
    scanf("%f",&s.m);
    printf("Roll No\t\tName of Student\t\tMarks\n");
    printf("%d\t\t%s\t\t%f",s.r,s.n,s.m);
}
-----------------------------------------------------------------------
// WAP to Create a Database of a 60 Student.
#include<stdio.h>
#include<stdlib.h>
struct student
{
    char n[20];
    int r;
    float m;
}s[60];
main()
{
    int i;
    for(i=0;i<60;i++)
    {
        printf("Enter Name,Roll No and Marks of a %d Student\n",i+1);
        fflush(stdin);
        gets(s[i].n);
        scanf("%d%f",&s[i].r,&s[i].m);

    }
    printf("**************Database**************\n");
    for(i=0;i<60;i++)
    {
        printf("%s\t\t%d\t\t%f\n",s[i].n,s[i].r,s[i].m);
    }
}
-----------------------------------------------------------------------
// WAP to Create a Database of a 60 Student and Calculate average Marks.
#include<stdio.h>
#include<stdlib.h>
struct student
{
    char n[20];
    int r;
    float m;
}s[60];
main()
{
    int i,sum=0,av;
    for(i=0;i<60;i++)
    {
        printf("Enter Name,Roll No and Marks of a %d Student\n",i+1);
        fflush(stdin);
        gets(s[i].n);
        scanf("%d%f",&s[i].r,&s[i].m);

    }
    printf("**************Database**************\n");
    for(i=0;i<60;i++)
    {
        printf("%s\t\t%d\t\t%f\n",s[i].n,s[i].r,s[i].m);
        sum=sum + s[i].m;
    }
    av=sum/60;
    printf("\nAverage Marks:%d",av);
}
-----------------------------------------------------------------------
// WAP to Create a Database of a 60 Student for 5 Subjects.
// Also Calculate average Marks in Each Subject.
//Also Check Fail or Pass.T3.min=T1.min+T2.min+temp;
    if (T3.min>60)
    {
        T3.min=T3.min/60;
        temp=T3.min%60;
    }
#include<stdio.h>
#include<stdlib.h>
struct student
{
    char n[20];
    int r;
    float m1,m2,m3,m4,m5;
}s[60];
main()
{
    int i,sum=0,sum1=0,sum2=0,sum3=0,sum4=0,sum5=0;
    float per;
    for(i=0;i<60;i++)
    {
        printf("Enter Name,Roll No and Marks  in 5 Subjects of a %d Student\n",i+1);
        fflush(stdin);
        gets(s[i].n);
        scanf("%d%f%f%f%f%f",&s[i].r,&s[i].m1,&s[i].m2,&s[i].m3,&s[i].m4,&s[i].m5);

    }
    printf("**********************Database**********************\n");
    for(i=0;i<60;i++)
    {
        printf("\n%s  %d %f %f %f %f %f",s[i].n,s[i].r,s[i].m1,s[i].m2,s[i].m3,s[i].m4,s[i].m5);
        sum1=sum1 + s[i].m1;
        sum2=sum2 + s[i].m2;
        sum3=sum3 +s[i].m3;
        sum4=sum4 + s[i].m4;
        sum5=sum5 + s[i].m5;
        sum=sum+s[i].m1+s[i].m2+s[i].m3+s[i].m4+s[i].m5;
        per=(s[i].m1+s[i].m2+s[i].m3+s[i].m4+s[i].m5)/5;
        printf("\tPercentage:%f\t",per);
        if(per<=33)
            printf("Fail");
        else
            printf("Pass");
    }
    printf("\n\nAverage Marks in 1st Subject:%d",sum1/60);
    printf("\nAverage Marks in 2nd Subject:%d",sum2/60);
    printf("\nAverage Marks in 3rd Subject:%d",sum3/60);
    printf("\nAverage Marks in 4th Subject:%d",sum4/60);
    printf("\nAverage Marks in 5st Subject:%d",sum5/60);
    printf("\nTotal Average Marks:%d",sum/60);
}
-----------------------------------------------------------------------
// WAP to Create a Database of a 60 Student for 5 Subjects.
// Also Calculate average Marks in Each Subject.
//Also Check Fail or Pass and Calculate Maximum Percentage and Minimum Percentage.
#include<stdio.h>
#include<stdlib.h>
struct student
{
    char n[20];
    int r;
    float m1,m2,m3,m4,m5,p;
}s[60];
main()
{
    int i,sum=0,sum1=0,sum2=0,sum3=0,sum4=0,sum5=0;
    float max=0,min;
    for(i=0;i<60;i++)
    {
        printf("Enter Name,Roll No and Marks  in 5 Subjects of a %d Student\n",i+1);
        fflush(stdin);
        gets(s[i].n);
        scanf("%d%f%f%f%f%f",&s[i].r,&s[i].m1,&s[i].m2,&s[i].m3,&s[i].m4,&s[i].m5);

    }
    printf("**********************Database**********************\n");
    for(i=0;i<60;i++)
    {
        printf("\n%s  %d %f %f %f %f %f",s[i].n,s[i].r,s[i].m1,s[i].m2,s[i].m3,s[i].m4,s[i].m5);
        sum1=sum1 + s[i].m1;
        sum2=sum2 + s[i].m2;
        sum3=sum3 +s[i].m3;
        sum4=sum4 + s[i].m4;
        sum5=sum5 + s[i].m5;
        sum=sum+s[i].m1+s[i].m2+s[i].m3+s[i].m4+s[i].m5;
        s[i].p=(s[i].m1+s[i].m2+s[i].m3+s[i].m4+s[i].m5)/5;
        printf("\tPercentage:%f\t",s[i].p);
        if(s[i].p<=33)
            printf("Fail");
        else
            printf("Pass");
    }
    min=s[1].p;
    for(i=0;i<60;i++)
    {
     if(max<s[i].p)
        max=s[i].p;
    if(min>s[i].p)
        min=s[i].p;

    }
    printf("\n\nAverage Marks in 1st Subject:%d",sum1/60);
    printf("\nAverage Marks in 2nd Subject:%d",sum2/60);
    printf("\nAverage Marks in 3rd Subject:%d",sum3/60);
    printf("\nAverage Marks in 4th Subject:%d",sum4/60);
    printf("\nAverage Marks in 5st Subject:%d",sum5/60);
    printf("\nTotal Average Marks:%d",sum/60);
    printf("\nMaximum Percentage:%f\nMinimum Percentage:%f",max,min);
}
-----------------------------------------------------------------------
//Database of Students
#include <stdio.h>
#include<stdlib.h>
struct student
{
    int roll;
    char name[20];
    float s1,s2,s3,perc;
}s[100];
main()
{
    int i,indexs1,indexs2,indexs3,indexperc;
    float max,maxperc,maxs1,maxs2,maxs3,averages1,averages2,averages3,sums1,sums2,sums3;
    for(i=0;i<50;i++)
    {
        printf("Name,Roll No and Marks of %d Student:\n",i+1);
        fflush(stdin);
        gets(s[i].name);
        scanf("%d%f%f%f",&s[i].roll,&s[i].s1,&s[i].s2,&s[i].s3);
    }
    for(i=0;i<50;i++)
    {
        s[i].perc=(s[i].s1+s[i].s2+s[i].s3)/50;
    }
    sums1=sums2=sums3=0;
    indexs1=indexs2=indexs3=indexperc=0;
    maxperc=s[0].perc;
    maxs1=s[0].s1;
    maxs2=s[0].s2;
    maxs3=s[0].s3;
    for(i=0;i<50;i++)
    {
        sums1=sums1+s[i].s1;
        sums2=sums2+s[i].s2;
        sums3=sums3+s[i].s3;
        if(maxs1<s[i].s1)
        {
            maxs1=s[i].s1;
            indexs1=i;
        }
        if(maxs2<s[i].s2)
        {
            maxs2=s[i].s2;
            indexs2=i;
        }
        if(maxs3<s[i].s3)
        {
            maxs3=s[i].s3;
            indexs3=i;
        }
        if(maxperc<s[i].perc)
        {
            maxperc=s[i].perc;
            indexperc=i;
        }
    }
    averages1=sums1/50;
    averages2=sums2/50;
    averages3=sums3/50;
    printf("Maximum:%f\tName:%s\tRoll No:%d\n",s[indexs1].s1,s[indexs1].name,s[indexs1].roll);
    printf("Maximum:%f\tName:%s\tRoll No:%d\n",s[indexs2].s2,s[indexs2].name,s[indexs2].roll);
    printf("Maximum:%f\tName:%s\tRoll No:%d\n",s[indexs3].s3,s[indexs3].name,s[indexs3].roll);
    printf("Maximum:%f\tName:%s\tRoll No:%d\n",s[indexperc].perc,s[indexperc].name,s[indexperc].roll);
    printf("Average in 1 Subject:%f\n",averages1);
    printf("Average in 2 Subject:%f\n",averages2);
    printf("Average in 3 Subject:%f\n",averages3);
    printf("Students who scored less than Average in 1 Subject");
    {
        if(s[i].s1<averages1)
        {
            printf("\n%d %s",s[i].roll,s[i].name);
        }
    }
    printf("\nStudents who scored less than Average in 2 Subject");
    {
        if(s[i].s2<averages2)
        {
            printf("\n%d %s",s[i].roll,s[i].name);
        }
    }
    printf("\nStudents who scored less than Average in 3 Subject");
    {
        if(s[i].s3<averages3)
        {
            printf("\n%d %s",s[i].roll,s[i].name);
        }
    }
}
-----------------------------------------------------------------------
// WAP to Create a Database of an Employee.
// Input Name Employee ID Salary
#include<stdio.h>
union employee
{
 char n[40];
 int salary,id;
}e;
main()
{
    printf("Enter Employee Name,ID,Salary:\n");
    scanf("%s",e.n);
    printf("Employee Name:%s\t",e.n);
    scanf("%d",&e.id);
    printf("Employee ID:%d\t",e.id);
    scanf("%d",&e.salary);
    printf("Employee Salary:%d\t",e.salary);
}

-----------------------------------------------------------------------

/**************************************************************
130.Get the input of student: Name, Roll No, Marks in 6 subjects in 12th.
Find if the student is eligible for admission in Delhi University.
A student is eligible for DU if he has scored 95 % or more in Best 4.
Author : Rohit Kumar
Ad.No. : 2019B101051
**************************************************************/
#include<stdio.h>
#include<math.h>
#include<stdlib.h>

struct student
{
    int roll;
    char name[20];
    int s1;
    int s2;
    int s3;
    int s4;
    int s5;
    int s6;
}s[10];

void criteria(int n)
{
    int i,temp,sort[4];
    float p;
    printf("List of Qualified Candidates\n");
    for (i=0;i<n;i++)
    {
        sort[0]=s[i].s1;
        sort[1]=s[i].s2;
        sort[2]=s[i].s3;
        sort[3]=s[i].s4;
        sort[4]=s[i].s5;
        sort[5]=s[i].s6;
        p=sortarray(sort);
        if (p>=95)
            printf("%s  Qualified\n",s[i].name);
        else
            printf("%s  Not Qualified\n",s[i].name);
    }
}

int sortarray(int sort[])
{
    int i, j;
    float perc;
    for (i=0;i<5;i++)
    {
        for (j=0;j<6-i-1;j++)
        {
           if (sort[j]>sort[j+1])
              swap(&sort[j],&sort[j+1]);
        }
    }
    perc=(sort[2]+sort[3]+sort[4]+sort[5])/6;
    return perc;
}
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
void main()
{
    int i,n;
    printf("Enter No of Students :\t");
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        printf("Enter Name,Roll No and Marks in 6 Subjects %d Student:\n",i+1);
        fflush(stdin);
        gets(s[i].name);
        scanf("%d%d%d%d%d%d",&s[i].roll,&s[i].s1,&s[i].s2,&s[i].s3,&s[i].s4,&s[i].s5,&s[i].s6);
    }
    criteria(n);
}

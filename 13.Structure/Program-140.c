/**************************************************************
140.Write a structure to store the name, account number and balance of
customers (more than 10) and store their information.

(i).Write a function to print the names of all the customers having balance less than $200.
(ii).Write a function to add $100 in the balance of all the customers having more than
 $1000 in their balance and then print the incremented value of their balance.
Author : Rohit Kumar
Ad.No. : 2019B101051
**************************************************************/
#include<stdio.h>
#include<math.h>
/**************************************************************/
 struct bank
 {
     long long int acno;
     char name[20];
     int bal;
 }s[20];

/**************************************************************/
void displaybalbelow200()
{
    int i;
    printf("Account Holder with below 200 Balance :\n");
    for (i=0;i<20;i++)
    {
        if(s[i].bal<200)
            printf("%s\n",s[i].name);
    }
}
/**************************************************************/
void add100()
{
    int i;
    for (i=0;i<20;i++)
    {
        if(s[i].bal>1000)
            s[i].bal=s[i].bal+100;
    }
    printf("Updated Details\n");
    displayall();
}
/**************************************************************/
void displayall()
{
    int i;
    printf("Database Details:\n");
    for (i=0;i<20;i++)
    {
        printf("%s\t%lld\t%d\n",s[i].name,s[i].acno,s[i].bal);
    }

}
/**************************************************************/
void main()
{
    int i;
    for (i=0;i<20;i++)
    {
        printf("Enter Name,Account No and Balance\n");
        fflush(stdin);
        gets(s[i].name);
        scanf("%lld%d",&s[i].acno,&s[i].bal);
    }
    printf("************************\n");
    displayall();
    printf("************************\n");
    displaybalbelow200();
    printf("************************\n");
    printf("Adding Interest Rs 100 to 1000 above balance\n");
    add100();

}
/**************************************************************/




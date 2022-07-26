************************( STANDARD  PROGRAMS )*************************

// WAP to Calculate Marks and Percentage of marks in 5 Subjects.
#include<stdio.h>
#include<math.h>
main()
{
    float m1,m2,m3,m4,m5,s,p;
    printf("Enter Marks\n");
    scanf("%f%f%f%f%f",&m1,&m2,&m3,&m4,&m5);
    s=m1+m2+m3+m4+m5;//Formula for calculation of Sum.
    p=(m1+m2+m3+m4+m5)/5;//Formula for Calculation of Percentage.
    printf("The Total Sum is:%f\n",s);
    printf("Percentage:%f",p);
}
-----------------------------------------------------------------------
// WAP to calculate area of triangle using Heron's formula.
#include<stdio.h>
#include<math.h>
main()
{
    float a,b,c,s,area;
    printf("Enter Sides of triangle\n");
    scanf("%f%f%f",&a,&b,&c);
    s=(a+b+c)/2;
    area=sqrt(s*pow(s-a,2)*pow(s-b,2)*pow(s-c,2));//Heron's Formula
    printf("The Area is:%f",area);
}
-----------------------------------------------------------------------
// WAP to calculate Ramesh Total Salary
#include<stdio.h>
#include<math.h>
main()
{
    int bs,da,hra,ts;
    printf("Enter Ramesh Basic Salary:\nRs." );
    scanf("%d",&bs);
    da=0.4*bs;
    hra=0.2*bs;
    ts=da+hra+bs;//Formula for Total Salary.
    printf("Dearness Allowance:Rs %d",da);
    printf("\nHouse Rent Allowance:Rs %d",hra);
    printf("\nTotal Salary:Rs %d",ts);
}
-----------------------------------------------------------------------
// WAP to calculate distance between two points
#include<stdio.h>
#include<math.h>
main()
{
    float x1,x2,y1,y2,distance;
    printf("Enter Coordinates\n");
    scanf("%f%f%f%f",&x1,&x2,&y1,&y2);
    distance=sqrt(pow(x2-x1,2)+pow(y2-y1,2));//Distance Formula
    printf("The distance is:%f",distance);
}
-----------------------------------------------------------------------
// WAP to calculate Simple Interest and Compound Interest
#include<stdio.h>
#include<math.h>
main()
{
    float p,r,t,si,ci;
    printf("Enter P,R and T\n");
    scanf("%f%f%f",&p,&r,&t);
    si=p*r*t/100;//Formula for Simple Interest.
    printf("Simple Interest is:%f\n",si);
    ci=(p*pow(1+r/100,t)-p);??Formula for Compound Interest.
    printf("Compound Interest is:%f",ci);
}
-----------------------------------------------------------------------
//  WAP to Swap two numbers without the help of third one
#include<stdio.h>
#include<math.h>
main()
{
    float a,b;
    printf("Enter a and b\n");
    scanf("%f%f",&a,&b);
    //Logic for Swapping without Third variable.
    a=a*b;
    b=a/b;
    a=a/b;
    printf("The value of a is %f \n ",a);
    printf("The value of b is %f \n ",b);
}
-----------------------------------------------------------------------
//  WAP to Swap two numbers with the help of third one
#include<stdio.h>
#include<math.h>
main()
{
    float a,b,c;
    printf("Enter a and b\n");
    scanf("%f%f",&a,&b);
    //Logic for Swapping with Third variable.
    c=a;
    a=b;
    b=c;
    printf("The value of a is %f \n ",a);
    printf("The value of b is %f \n ",b);
}
-----------------------------------------------------------------------
//  WAP to calculate Area and Perimeter of Circle
#include<stdio.h>
#include<math.h>
main()
{
    float r,area,peri;
    printf("Enter Radius(r)\n");
    scanf("%f",&r);
    area=3.14*r*r;//Formula for Area
    peri=2*3.14*r;//Formula for Perimeter.
    printf("The Perimeter of Circle %f \n ",peri);
    printf("The Area of Circle %f \n ",area);
}
-----------------------------------------------------------------------
//  WAP to calculate Area and Perimeter of Rectangle
#include<stdio.h>
#include<math.h>
main()
{
    float a,b,area,peri;
    printf("Enter Length and Breadth\n");
    scanf("%f%f",&a,&b);
    area=a*b;//Formula for Area
    peri=2*(a+b);//Formula for Perimeter.
    printf("The Perimeter of Rectangle %f \n ",peri);
    printf("The Area of Rectangle %f \n ",area);
}
-----------------------------------------------------------------------
//  WAP to calculate Area and Perimeter of Square
#include<stdio.h>
#include<math.h>
main()
{
    float a,area,peri;
    printf("Enter Side\n");
    scanf("%f",&a);
    area=a*a;//Formula for Area.
    peri=4*a;//Formula for Perimeter.
    printf("The Perimeter of Square %f \n ",peri);
    printf("The Area of Square %f \n ",area);
}
-----------------------------------------------------------------------
*********************( DECISION MAKING STATEMENT )********************
***********************( CONDITIONAL BRANCHING )**********************

//                           1.if Statement
                -------------------------------------------------
// WAP to Understand if Statement.
#include <stdio.h>
int main()
{
    int i = 10;
    if (i > 15)
    {
        printf("10 is less than 15");
    }
    printf("I am Not in if");
}
-----------------------------------------------------------------------
//                          2.if-else Statement
            -------------------------------------------------
// WAP to check whether an entered year is a Leap year or Non- Leap Year
#include<stdio.h>
#include<math.h>
main()
{
    int y;
    printf("Enter any YEAR\n");
    scanf("%d",&y);
    if(y%4==0&&y%400==0||y%100==0)//Condition for Leap Year.
        printf("Leap Year");
    else//if Condition Fails.
        printf("Non-Leap Year");
}
-----------------------------------------------------------------------
// WAP to check whether a no is Odd or Even
#include<stdio.h>
#include<math.h> \
main()
{
    int x;
    printf("Enter any Number\n"); scanf("%d",&x);
    if (x%2==0)//Condition for Even Number.
        printf("Even Number");
    else
        printf("Odd Number");
 }
-----------------------------------------------------------------------
//                          3.else if Ladder
            -------------------------------------------------
// WAP to check whether a no is positive,negative or zero
#include<stdio.h>
#include<math.h>
main()
{
    float x;
    printf("Enter any Number\n");
    scanf("%f",&x);
    if(x>0)
        printf("Positive Number");
    else if (x<0)
        printf("Negative Number");
    else
        printf("Equal to Zero");
}
-----------------------------------------------------------------------
// WAP to Check Grade
#include<stdio.h>
#include<math.h>
main()
{
    float m1,m2,m3,m4,m5,p;
    printf("Enter Marks\n");
    scanf("%f%f%f%f%f",&m1,&m2,&m3,&m4,&m5);
    p=(m1+m2+m3+m4+m5)/5;//Formula for Percentage.
    printf("Percentage:%f\n",p);
    if (p>91)
        printf("Grade-A");
    else if (p>81&&p<91)
        printf("Grade-B");
    else if (p>61&&p<81)
        printf("Grade-C");
    else
        printf("Grade-F");
}
-----------------------------------------------------------------------
// WAP to Check Triangle type
#include<stdio.h>
#include<math.h>
main()
{
    float a,b,c;
    printf("Enter Sides of triangle\n");
    scanf("%f%f%f",&a,&b,&c);
    if (a==b&&b==c)//Condition for Equilateral Triangle
        printf("Equilateral Triangle");
    else if (a==b||a==c||b==c)//Condition for Isosceles Triangle
        printf("Isosceles Triangle");
    else
        printf("Scalene Triangle");
}
-----------------------------------------------------------------------
// WAP to check Roots
#include<stdio.h>
#include<math.h>
main()
{
    float a,b,c,d;
    printf("Enter a,b and c\n");
    scanf("%f%f%f",&a,&b,&c);
    d=((b*b)-4*a*c);//Formula for Nature of Root.
    if (d<0)
        printf("Imaginary Roots");
    else if (d>0)
        printf("Real Roots");
    else
        printf("Equal Roots");
}
-----------------------------------------------------------------------
//  WAP to Find Greatest among two digit
#include<stdio.h>
#include<math.h>
main()
{
    float a,b;
    printf("Enter two digit\n");
    scanf("%f%f",&a,&b);
    if(a>b)
    {
        printf("a is Greatest\n");
        printf("b is Smallest");
    }
    else if (a<b)
    {
        printf("b is Greatest\n");
        printf("a is Smallest");
    }
    else
        printf("a=b");
}
-----------------------------------------------------------------------
//  WAP to Show type of Character
#include<stdio.h>
#include<math.h>
main()
{
    char ch;
    printf("Enter any Character\n");
    scanf("%c",&ch);
    if(ch>=65 && ch<=90)//Condition for Alphabet-UPPERCASE
    {
        printf("Alphabet-UPPERCASE\n");
        ch=ch+32;
        printf("In Lowercase=%c",ch);
    }
    else if(ch>=97 && ch<=122)//Condition for Alphabet-LOWERCASE
    {
        printf("Alphabet-LOWERCASE\n");
        ch=ch-32;
        printf("In Uppercase=%c",ch);
    }
    else if(ch>=48 && ch<=57)//Condition for Numbers
        printf("NUMBERS");
    else if(ch==32)//Condition for Space Bar.
        printf("SPACE");
    else
        printf("SPECIAL SYMBOLS");
}
-----------------------------------------------------------------------
//                      4.Nested if-else
            -------------------------------------------------
//  WAP for programming using Characters
#include<stdio.h>
#include<math.h>
main()
{
    char ch;
    printf("Enter any Character\n");
    scanf("%c",&ch);
    if(ch>=65 && ch<=90 || ch>=97 && ch<=122)
    {
        printf("Alphabet\n");
        if (ch>=65 && ch<=90)
        {
            printf("UPPERCASE\n");
            if (ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
                printf("VOWELS\n");
            else
                printf("CONSONANTS\n");
            ch=ch+32;
            printf("In Lowercase=%c",ch);
        }
        else if(ch>=97 && ch<=122)
        {
            printf("LOWERCASE\n");
            if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
                printf("VOWELS\n");
            else
                printf("CONSONANTS\n");
            ch=ch-32;
            printf("In Uppercase=%c",ch);
        }
    }
    else if(ch>=48 && ch<=57)
        printf("NUMBERS");
    else if(ch==32)
        printf("SPACE");
    else
        printf("SPECIAL SYMBOLS");
}
-----------------------------------------------------------------------
//                          4.Switch Case
            -------------------------------------------------

//  WAP to implement a calculator for different A.O
#include<stdio.h>
#include<math.h>
main()
{
    int a,b,c,ch;
    printf("Enter two Integer\n");
    scanf("%d%d",&a,&b);
    printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n" );
    scanf("\n%d",&ch);
    //Syntax of Switch Statement.
    switch(ch)
    {
        case 1:c=a+b;
                printf("%d",c);
                break;
        case 2:c=a-b;
                printf("%d",c);
                break;
        case 3:c=a*b;
                printf("%d",c);
                break;
        case 4:c=a/b;
                printf("%d",c);
                break;
        default:printf("Wrong Choice");

    }
}
-----------------------------------------------------------------------
//  WAP to implement a calculator for different A.O using operator
#include<stdio.h>
#include<math.h>
main()
{
    int a,b,c;
    char ch;
    printf("Enter two Integer\n");
    scanf("%d%d",&a,&b);
    printf("Enter Arithmetic Symbol\n");
    scanf(" %ch",&ch);
    switch(ch)
    {
        case '+':c=a+b;
                printf("%d",c);
                break;
        case '-':c=a-b;
                printf("%d",c);
                break;
        case '*':c=a*b;
                printf("%d",c);
                break;
        case '/':c=a/b;
                printf("%d",c);
                break;
        default:printf("Wrong Choice");

    }
}
-----------------------------------------------------------------------
//  WAP to Check a Number is Odd/Even using switch
#include<stdio.h>
#include<math.h>
main()
{
    int a,b;
    printf("Enter a Number\n");
    scanf("%d",&a);
    b=a%2;
    switch(b)
    {
        case 0:printf("Even Number",b);
                break;
        default:printf("Odd Number");
    }
}
-----------------------------------------------------------------------
//  WAP to Check enter character is a Vowel or Not
#include<stdio.h>
#include<math.h>
main()
{
    char ch;
    printf("Enter a Character\n");
    scanf("%ch",&ch);
    switch(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||
                ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch== 'u')
    {
        case 1:printf("Vowel");
                break;
        default:printf("Consonants");
    }
}
-----------------------------------------------------------------------
//  WAP to Check enter Year is a Leap Year or Not
#include<stdio.h>
#include<math.h>
main()
{
    int y;
    printf("Enter a Year\n");
    scanf("%d",&y);
    switch(y%4==0&&y%400==0||y%100==0)
    {
        case 1:printf("Leap Year");
                break;
        default:printf("Non-Leap Year");
    }
}
-----------------------------------------------------------------------
//  WAP to print day according to user choice
#include<stdio.h>
#include<math.h>
main()
{
    int n,a;
    printf("Enter a Number\n");
    scanf("%d",&n);
    a=n%7;
    switch(a)
    {
        case 0:printf("Sunday");
                break;
        case 1:printf("Monday");
                break;
        case 2:printf("Tuesday");
                break;
        case 3:printf("Wednesday");
                break;
        case 4:printf("Thursday");
                break;
        case 5:printf("Friday");
                break;
        case 6:printf("Saturday");
                break;
        default:printf("Invalid Input");
    }
}
-----------------------------------------------------------------------
//  WAP to Check Day Number
#include<stdio.h>
#include<math.h>
main()
{
    int a;
    printf("Enter a Day Number\n");
    scanf("%d",&a);
    switch(a)
    {
        case 0:printf("Sunday");
                break;
        case 1:printf("Monday");
                break;
        case 2:printf("Tuesday");
                break;
        case 3:printf("Wednesday");
                break;
        case 4:printf("Thursday");
                break;
        case 5:printf("Friday");
                break;
        case 6:printf("Saturday");
                break;
        default:printf("Invalid Input");
    }
}

********************( OPERATORS & DECISION MAKING )*********************

//  WAP to Input a 4-digit number
#include<stdio.h>
#include<math.h>
main()
{
    int n,m,a,b,c,d,s,x,z,y,arm,p;
    printf("Enter a 4-Digit Number\n");
    scanf("%d",&n);
    printf("1.Print Sum\n2.Armstrong\n3.Polindrome\n4.Odd/Even\n" );
    z=n;
    a=n%10;
    n=n/10;
    b=n%10;
    n=n/10;
    c=n%10;
    n=n/10;
    d=n%10;
    n=n/10;
    printf("Enter the Choice\n");
    scanf("%d",&m);
    switch(m)
    {
        case 1:s=a+b+c+d;//Sum
                printf("The Sum will be:%d",s);
                break;
        case 2:arm=(pow(a,3)+pow(b,3)+pow(c,3)+pow(d,3));//Armstrong
            if(arm==m)//Checking for Armstrong.
            {
                printf("Armstrong Number");
            }
            else
            {
                printf("Non-Armstrong Number");
            }
                break;
        case 3:p=(a*1000)+(b*100)+(c*10)+c;//Palindrome
            if(p=z)//Checking for Palindrome
            {
                printf("Polindrome Number");
            }
            else
            {
                printf("Non-Polindrome Number");
            }
                break;
        case 4:
            if(b=c)
            {
                x=b+c;
                printf("The Sum will be:%d\n",x);
                y=x%2;
                if (y=1)
                {
                    printf("Even Number\n");
                }
                else
                {
                    printf("Odd Number\n");
                }
            }
            else
            {
                printf("b is not equal to c\n");
            }
                break;
        default:printf("Invalid Output");
    }
}
-----------------------------------------------------------------------
//  WAP to Input a 3-digit number and Swap Number
#include<stdio.h>
#include<math.h>
main()
{
    int n,z,a,b,c,r;
    printf("Enter a 3-Digit Number\n");
    scanf("%d",&n);
    z=n;
    a=n%10;
    n=n/10;
    b=n%10;
    n=n/10;
    c=n%10;
    n=n/10;
    //Logic for Swapping
    a=a*c;
    c=a/c;
    a=a/c;
    r=(c*100)+(b*10)+a;
    printf("The Swap No is:%d\n",r);
    if(z==r)//Condition for Palindrome.
    {
        printf("Polindrome Number");
    }
    else
    {
        printf("Non-Polindrome Number");
    }
}
-----------------------------------------------------------------------
// WAP to find that given no is Odd or Even
#include<stdio.h>
main()
{
    int a;
    printf("Enter any Number");
    scanf("%d",&a);
    a%2==0?printf("Even Number"):printf("Odd Number");
}
-----------------------------------------------------------------------
// WAP to find the Greatest among three number
#include<stdio.h>
main()
{
    int a,b,c,x,y;
    printf("Enter a,b,c\n");
    scanf("%d%d%d",&a,&b,&c);
    x=a>b?a:b;
    y=x>c?x:c; printf("Greatest=%d",y);
}
-----------------------------------------------------------------------
// WAP to find the Greatest among two number
#include<stdio.h>
main()
{
    int a,b;
    printf("Enter a and b");
    scanf("%d%d",&a,&b);
    a>b?printf("a is greatest"):printf("b is greatest");
}
-----------------------------------------------------------------------
// WAP to Show no is equal or not
#include<stdio.h>
main()
{
    int a,b;
    printf("Enter a and b\n");
    scanf("%d%d",&a,&b);
    a==b?printf("Equal"):printf("Not Equal");
}
-----------------------------------------------------------------------
// WAP to Check Polindrome Number
#include<stdio.h>
main()
{
    int n,m,a,b,c,p;
    printf("Enter any 3-Digit Number\n");
    scanf("%d",&n);
    m=n;
    a=n%10;
    n=n/10;
    b=n%10;
    n=n/10;
    c=n%10;
    n=n/10;
    p=(a*100)+(b*10)+c;
    m==p?printf("Polindrome"):printf("Non Polindrome");

}
-----------------------------------------------------------------------
// WAP to Check Armstrong Number
#include<stdio.h>
main()
{
    int n,m,a,b,c,arm;
    printf("Enter any 3-Digit Number\n");
    scanf("%d",&n);
    m=n;
    a=n%10;
    n=n/10;
    b=n%10;
    n=n/10;
    c=n%10;
    n=n/10;
    arm=(a*a*a)+(b*b*b)+(c*c*c);
    m==arm?printf("Armstrong"):printf("Non Armstrong");
}
-----------------------------------------------------------------------
************************( LOOPING STATMENTS )*************************

//  WAP to print Hello 5
s
#include<stdio.h>
main()
{
    int i;
    for(i=0;i<=5;i++)
        printf("Hello\n");
}
-----------------------------------------------------------------------
//  WAP to Print A to Z.
#include<stdio.h>
#include<math.h>
main()
{
    char i;
    for (i='A';i<='Z';i++)
        printf("%c\n",i);
}
-----------------------------------------------------------------------
//  WAP to Print a to z.
#include<stdio.h>
#include<math.h>
main()
{
    char i;
    for (i='a';i<='z';i++)
        printf("%c\n",i);
}
-----------------------------------------------------------------------
//  WAP to Print 0 to 9.
#include<stdio.h>
#include<math.h>
main()
{
    char i;
    for (i='0';i<='9';i++)
        printf("%c\n",i);
}
-----------------------------------------------------------------------
//  WAP to Print ASCII value from A to Z.
#include<stdio.h>
#include<math.h>
main()
{
    int i;
    printf("ASCII Value from A to Z are:\n");
    for (i='A';i<='Z';i++)
        printf("%c-%d\n",i,i);
}
-----------------------------------------------------------------------
//  WAP to Print ASCII value from a to z.
#include<stdio.h>
#include<math.h>
main()
{
    int i;
    printf("ASCII Value from a to z are:\n");
    for (i='a';i<='z';i++)
        printf("%c-%d\n",i,i);
}
-----------------------------------------------------------------------
//  WAP to Print ASCII value from 0 to 9.
#include<stdio.h>
#include<math.h>
main()
{
    int i;
    printf("ASCII Value from 0 to 9 are:\n");
    for (i='0';i<='9';i++)
        printf("%c-%d\n",i,i);
}
-----------------------------------------------------------------------
//  WAP to find the power of a Number
#include<stdio.h>
#include<math.h>
main()
{
    int a,b,z=1,i;
    printf("Enter Number:\n");
    scanf("%d",&a);
    printf("Enter Power:\n");
    scanf("%d",&b);
    for (i=0;i<b;i++)
        z=z*a;
    printf("%d",z);
}

-----------------------------------------------------------------------
//  WAP to print First 10 Natural Number
#include<stdio.h>
main()
{
    int i;
    printf("The First 10 Natural Number are:\n");
    for(i=1;i<=10;i++)
        printf("%d,",i);
}
-----------------------------------------------------------------------
//  WAP to print Number from 10-20
#include<stdio.h>
main()
{
    int i;
    printf("The Number are:\n");
    for(i=10;i<=20;i++)
        printf("%d,",i);
}
-----------------------------------------------------------------------
//  WAP to print alternate Number from 1-10
#include<stdio.h>
main()
{
    int i;
    printf("The Number are:\n");
    for(i=1;i<=10;i+=2)
        printf("%d,",i);
}
-----------------------------------------------------------------------
//  WAP to print Square from from 1-10
#include<stdio.h>
main()
{
    int i;
    printf("The Square of Number are:\n");
    for(i=1;i<=10;i+=2)
        printf("%d,",i*i);
}
-----------------------------------------------------------------------
//  WAP to print Even Number from 1-10
#include<stdio.h>
main()
{
    int i;
    printf("The Even Number are:\n");
    for(i=1;i<=10;i++)
    {
        if(i%2==0)
            printf("%d,",i);
    }
}
-----------------------------------------------------------------------
//  WAP to print Odd Number from 1-10
#include<stdio.h>
main()
{
    int i;
    printf("The Odd Number are:\n");
    for(i=1;i<=10;i++)
    {
        if(i%2!=0)
            printf("%d,",i);
    }
}
-----------------------------------------------------------------------
//  WAP to print Sum of Numbers from 1-10
#include<stdio.h>
main()
{
    int i,sum;
    for(i=1;i<=10;i++)
        sum=sum+i;
    printf("The Sum is:%d",sum);
}
-----------------------------------------------------------------------

//  WAP to Find factorial of Entered Number
#include<stdio.h>
main()
{
    int n,i,f=1;
    printf("Enter any Number\n");
    scanf("%d",&n);
    for(i=1;i<=n-2;i++)
        f=f*i;
    printf("%d\n",f);
}
-----------------------------------------------------------------------
//  WAP to Print Sum of n Natural Number
#include<stdio.h>
main()
{
    int n,i,s=0;
    printf("Enter any Number\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        s=s+i;
    printf("%d\n",s);
}
-----------------------------------------------------------------------
//  WAP to print table of entered number
#include<stdio.h>
main()
{
    int n,i,t;
    printf("Enter any Number: ");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        t=n*i;
        printf("%d * %d = %d\n",n,i,t);
    }
}
-----------------------------------------------------------------------
//  WAP to Find Factors of the Given Number
#include<stdio.h>
#include<math.h>
main()
{
    int n,i;
    printf("Enter any Number: ");
    scanf("%d",&n);
    printf("Factors are:");
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
            printf("%d, ",i);
    }
}
-----------------------------------------------------------------------
//  WAP to Find Factors & Print Sum of that of the Given Number
#include<stdio.h>
#include<math.h>
main()
{
    int n,i,sf=0;
    printf("Enter any Number: ");
    scanf("%d",&n);
    printf("Factors are:");
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
            printf("%d, ",i); sf=sf+i;
    }
    printf("The Sum of Factors is:%d",sf);
}
-----------------------------------------------------------------------
//  WAP to Print Sum of Odd and Even from 1-20
#include<stdio.h>
#include<math.h>
main()
{
    int i,so=0,se=0;
    for(i=1;i<=20;i++)
    {
        if(i%2==0)
            se=se+i;
        else
            so=so+i;
    }
    printf("The Sum of Even is:%d",se);
    printf("\nThe Sum of Odd is:%d",so);
}
-----------------------------------------------------------------------
//  WAP to Check Perfect Number
#include<stdio.h>
#include<math.h>
main()
{
    int i,n,se=0;
    printf("Enter any Number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
            se=se+i;
    }
    se==n?printf("Perfect Number"):printf("Non-Perfect Number");
}
-----------------------------------------------------------------------
//  WAP to Check Prime Number
#include<stdio.h>
#include<math.h>
main()=
{
    int i,n,c=0;
    printf("Enter any Number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
            c++;
    }
    c==2?printf("Prime Number"):printf("Non-Prime Number");
}
-----------------------------------------------------------------------
//  WAP to Print Fibonacci Series
#include<stdio.h>
#include<math.h>
main()
{
    int i,n,a=0,c,b=1;
    printf("Enter any Number: ");
    scanf("%d",&n);
    printf("%d,%d",a,b);
    for(i=1;i<=n-2;i++)
    {
        c=a+b;
        printf(",%d",c);
        a=b;
        b=c;
    }
}
-----------------------------------------------------------------------
//  WAP to Print Sum of Fibonacci Series
#include<stdio.h>
#include<math.h>
main()
{
    int i,n,a=0,c,b=1,sum=1;
    printf("Enter any Number: ");
    scanf("%d",&n);
    printf("%d,%d",a,b);
    for(i=1;i<=n-2;i++)
    {
        c=a+b;
        printf(",%d",c);
        sum=sum+c;
        a=b;
        b=c;
    }
    printf("\nSum:%d",sum);
}
-----------------------------------------------------------------------
//  WAP to Check Number Details
#include<stdio.h>
#include<math.h>
main()
{
    int n,m,o,a,b,s=0,rev=0,max=0,c=0;
    float arm=0;
    printf("Enter any Number: ");
    scanf("%d",&n);
    printf("Digits:");
    m=n;
    o=n;
    while(n>0)
    {
        b=n%10;
        n=n/10;
        c++;
    }
    while(o>0)
    {
        a=o%10;
        o=o/10;
        if(max<a)
            max=a;
        printf("%d,",a);
        s=s+a;
        rev=rev*10+a;
        arm=arm+pow(a,c);
    }

    printf("\nQuantity:%d",c);
    printf("\nSum:%d",s);
    printf("\nReverse:%d",rev);
    rev==m?printf("\nPolindrome Number"):printf("\nNon-Polindrome Number");
    arm==m?printf("\nArmstrong Number"):printf("\nNon-Armstrong Number"); printf("\nMax:%d",max);
}
-----------------------------------------------------------------------
//  WAP to print Words of input Number
#include<stdio.h>
main()
{
    int i,rev=0,a,b,c=0,n,m,d;
    printf("Enter any Number:\n");
    scanf("%d",&n);
    m=n;
    while(n>0)
    {
        a=n%10;
        n=n/10;
        c++;
    }
    for (i=1;i<=c;i++)
    {
        b=m%10;
        m=m/10;
        rev=rev*10+b;
    }
    for (i=1;i<=c;i++)
    {
        d=rev%10;
        rev=rev/10;
        switch(d)
        {
            case 0:printf("Zero ");
                break;
            case 1:printf("One ");
                break;
            case 2:printf("Two ");
                break;
            case 3:printf("Three ");
                break;
            case 4:printf("Four ");
                break;
            case 5:printf("Five ");
                break;
            case 6:printf("Six ");
                break;
            case 7:printf("Seven ");
                break;
            case 8:printf("Eight  ");
                break;
            case 9:printf("Nine ");
                break;
            default:printf("Invalid Input");
        }
    }
}
-----------------------------------------------------------------------
//  WAP to Print all Armstrong numbers between 1 and 1000
#include <stdio.h>
main()
{
    int n,arm,d1,d2,d3;
    printf("Print all Armstrong numbers between 1 and 1000:\n");
    n=001;
    while (n<= 900)
    {
        d1 = n - ((n/10) * 10);
        d2 = (n/10)-((n/100)*10);
        d3 = (n/100)-((n/1000)*10);
        arm = (d1*d1*d1)+(d2*d2*d2)+(d3*d3*d3);
        if (arm == n)
            printf("%d,",arm);
        n++;
    }
}
-----------------------------------------------------------------------
//  WAP to Convert Decimal to Binary.
#include<stdio.h>
#include<math.h>
main()
{
    int n,a,bn=0,t,i,j;
    printf("Enter any Number:\n");
    scanf("%d",&n);
    t=n;
    i=1;
    for (j=n;j>0;j=j/2)
    {
        //Logic for Binary Calculation.
        bn=bn+(n%2)*i;
        i=i*10;
        n=n/2;
    }
    printf("Binary of %d is %d",t,bn);
}
-----------------------------------------------------------------------
//  WAP to Convert Binary to Decimal.
#include<stdio.h>
#include<math.h>
main()
{
    int n,a,i,t,b,m;
    float dn=0;
    printf("Enter any Number:\n");
    scanf("%d",&m);
    t=m;
    i=0;
    while(m>0)
    {
        a=m%10;
        m=m/10;
        dn=dn+a*pow(2,i);
        i++;

    }
    printf("Decimal of %d is %f",t,dn);
}
-----------------------------------------------------------------------
//  WAP to print table from 1 to 20
#include<stdio.h>
main()
{
    int i,j,t;
    for (j=1;j<=20;j++)
    {
        for(i=1;i<=10;i++)
        {
            t=j*i;
            printf("%d * %d = %d\n",j,i,t);
        }printf("*************\n");
    }
}
-----------------------------------------------------------------------
//  WAP to Print Prime Number from 1-100
#include<stdio.h>
#include<math.h>
main()
{
    int i,a,j,c;
    for (i=1;i<=100;i++)
    {
         c=0;
        for(j=1;j<=i/2;j++)
        {
            if(i%j==0)
              c++;
        }
        if(c==1)
            printf("%d\n",i);
    }
}
-----------------------------------------------------------------------
//  WAP to Print Palindrome Number from 1-1000
#include<stdio.h>
#include<math.h>
main()
{
    int i,a,rev,n;
    for (i=1;i<=1000;i++)
    {
        n=i;
        rev=0;
        while(n>0)
        {
            a=n%10;
            n=n/10;
            rev=rev*10+a;
        }
        if(rev==i)
            printf("%d\n",rev);
    }
}
-----------------------------------------------------------------------
//  WAP to Print Armstrong Number from 1-1000
#include<stdio.h>
#include<math.h>
main()
{
    int i,a,b,m,c,n;
    float arm=0;
    for (i=1;i<=1000;i++)
    {
        n=i;
        m=i;
        c=0;
        while(n>0)
        {
            a=n%10;
            n=n/10;
            c++;
        }
        while(m>0)
        {
            b=m%10;
            m=m/10;
            arm=arm+pow(b,c);
            if(arm==i)
                printf("%d\n",arm);
        }

    }
}

-----------------------------------------------------------------------
**************************( FUNCTIONS)***************************

//Function without argument and return value
//WAP to Calculate Sum of two Numbers.
#include<stdio.h>
void printName();
void main ()
{
    printf("Hello ");
    printName();
}
void printName()
{
    printf("hi");
}
-----------------------------------------------------------------------
//Function without argument and with return value
//WAP to Calculate Sum of two Numbers.
#include<stdio.h>
int sum();
void main()
{
    int result;
    printf("\nGoing to calculate the sum of two numbers:");
    result = sum();
    printf("%d",result);
}
int sum()
{
    int a,b;
    printf("\nEnter two numbers");
    scanf("%d %d",&a,&b);
    return a+b;
}
-----------------------------------------------------------------------
//Function with argument and without return value
//WAP to Calculate Sum of two Numbers.
Example 1
#include<stdio.h>
void sum(int, int);
void main()
{
    int a,b,result;
    printf("\nGoing to calculate the sum of two numbers:");
    printf("\nEnter two numbers:");
    scanf("%d %d",&a,&b);
    sum(a,b);
}
void sum(int a, int b)
{
    printf("\nThe sum is %d",a+b);
}
-----------------------------------------------------------------------
//Function with argument and with return value
//WAP to Calculate Sum of two Numbers.
#include<stdio.h>
int sum(int, int);
void main()
{
    int a,b,result;
    printf("\nGoing to calculate the sum of two numbers:");
    printf("\nEnter two numbers:");
    scanf("%d %d",&a,&b);
    result = sum(a,b);
    printf("\nThe sum is : %d",result);
}
int sum(int a,int b)
{
    return a+b;
}
-----------------------------------------------------------------------
//Call by value
//  WAP to Swap two numbers without the help of third one.
#include<stdio.h>
#include<conio.h>
void main()
{
    int num1,num2 ;
    void swap(int,int) ; // function declaration
    clrscr();
    num1=10;
    num2=20;
    swap(num1, num2) ; // calling function
    getch();
}
void swap(int a, int b) // called function
{
    int temp ;
    temp=a ;
    a=b ;
    b=temp ;
}
-----------------------------------------------------------------------
//Call by Reference
//  WAP to Swap two numbers without the help of third one.
#include<stdio.h>
#include<conio.h>
void main()
{
    int num1,num2 ;
    void swap(int*,int*) ; // function declaration
    clrscr();
    num1=10;
    num2=20;
    swap(&num1,&num2); // calling function
    getch();
}
void swap(int *a, int *b) // called function
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
-----------------------------------------------------------------------

*************************( ARRAY STATEMENTS )*************************

//  WAP to Input and Print an Array
#include<stdio.h>
#include<math.h>
main()
{
    int a[10],n,i;
    printf("Enter the Array Size:\n");
    scanf("%d",&n);
    printf("Enter Array Elements:\n");
    for (i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Array are:\n");
    for (i=0;i<n;i++)
        printf("%d ",a[i]);
}
-----------------------------------------------------------------------
//  WAP to Input and Print Sum an Array
#include<stdio.h>
#include<math.h>
main()
{
    int a[10],s=0,n,i;
    printf("Enter the Array Size:\n");
    scanf("%d",&n);
    printf("Enter Array Elements:\n");
    for (i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Array are:\n");
    for (i=0;i<n;i++)
    {
        printf("%d ",a[i]);
        s=s+a[i];
    }
    printf("\nSum:%d",s);
}
-----------------------------------------------------------------------
//  WAP to Print Maximun and Minimum in an Array
#include<stdio.h>
#include<math.h>
main()
{
    int a[10],max=0,min=a[0],i,n;
    printf("Enter the Array Size:\n");
    scanf("%d",&n);
    printf("Enter Array Elements:\n");
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(max<a[i])
                max=a[i];
        if(min>a[i])
                min=a[i];
    }
    printf("Maximun:%d\nMinimum:%d",max,min);
}
-----------------------------------------------------------------------
//  WAP to Find Second Largest Element in an Array
#include<stdio.h>
#include<math.h>
main()
{
    int a[10],i,max,max1,m;
    printf("Enter Array Size:\n");
    scanf("%d",&m);
    printf("Enter Array\n");
    for (i=0;i<m;i++)
        scanf("%d",&a[i]);
    max=max1=a[0];
    for (i=0;i<m;i++)
    {
        if(max<a[i])
        {
            max1=max;
            max=a[i];
        }
        else if(max1<a[i]&&max1!=max)
        {
            max1=a[i];
        }
    }
    printf("***************\n");
    printf("Second Largest:%d",max1);
}
-----------------------------------------------------------------------
//  WAP to Print Sum of two Array
#include<stdio.h>
#include<math.h>
main()
{
    int a[10],b[10],c[10],i,n;
    printf("Enter the Array Size:\n");
    scanf("%d",&n);
    printf("Enter 1st Array Elements:\n");
    for (i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter 2nd Array Elements:\n");
    for (i=0;i<n;i++)
        scanf("%d",&b[i]);
    printf("****Enter Sum of Array*****\n");
    for (i=0;i<n;i++)
    {
        c[i]=a[i]+b[i];
        printf("%d ",c[i]);
    }
}
-----------------------------------------------------------------------
//  WAP to Print Product of two Array
#include<stdio.h>
#include<math.h>
main()
{
    int a[10],b[10],c[10],i,n;
    printf("Enter the Array Size:\n");
    scanf("%d",&n);
    printf("Enter 1st Array Elements:\n");
    for (i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter 2nd Array Elements:\n");
    for (i=0;i<n;i++)
        scanf("%d",&b[i]);
    printf("****Enter Sum of Array*****\n");
    for (i=0;i<n;i++)
    {
        c[i]=a[i]*b[i];
        printf("%d ",c[i]);
    }
}
-----------------------------------------------------------------------
//  WAP to Input and Print Reverse an Array
#include<stdio.h>
#include<math.h>
main()
{
    int a[10],n,i;
    printf("Enter the Array Size:\n");
    scanf("%d",&n);
    printf("Enter Array Elements:\n");
    for (i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Reverse Array are:\n");
    for (i=n-1;i>=0;i--)
        printf("%d ",a[i]);
}
-----------------------------------------------------------------------
// WAP to Print frequency of Numbers in an array.
#include<stdio.h>
main()
{
    int a[10],b[10],n,i,j,c;
    printf("Enter the Array Size:\n");
    scanf("%d",&n);
    printf("Enter Array Elements:\n");
    for (i=0;i<n;i++)
    {
         scanf("%d",&a[i]);
         b[i]=-1;
    }
    for (i=0;i<n;i++)
    {
        c=1;
        for(j=1+i;j<n;j++)
        {
            if(a[i]==a[j])
            {
                c++;
                b[j]=0;
            }
        }
        if(b[i]!=0)
        {
            printf("%d occurs %d times\n",a[i],c);
        }
    }
}
-----------------------------------------------------------------------
*************************( BASIC ALGORITHMS )*************************
//  WAP to Search (No Duplication)an Element in an Array
// Linear Search
#include<stdio.h>
#include<math.h>
main()
{
    int a[10],n,i,pos,c,ele;
    printf("Enter the Array Size:\n");
    scanf("%d",&n);
    printf("Enter Array Elements:\n");
    for (i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter Element to Search:\n");
    scanf("%d",&ele);
    for (i=0;i<n;i++)
    {
        if(ele==a[i])
        {
            pos=i+1;
            c=1;
        }
    }
    if(c==1)
        printf("Element Find at Position:%d",pos);
    else
        printf("Element Not Find");
}
-----------------------------------------------------------------------
//  WAP to Search (With Duplication)an Element in an Array
// Linear Search
#include<stdio.h>
#include<math.h>
main()
{
    int a[10],n,i,c,ele;
    printf("Enter the Array Size:\n");
    scanf("%d",&n);
    printf("Enter Array Elements:\n");
    for (i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter Element to Search:\n");
    scanf("%d",&ele);
    for (i=0;i<n;i++)
    {
        if(ele==a[i])
        {
            printf("Element Find at Position:%d\n",i+1);
            c=0;
        }
    }
        if(c!=0)
            printf("Element Not Find");
}
-----------------------------------------------------------------------
//  WAP to Search (With Duplication)an Element in an Array with break
// Linear Search
#include<stdio.h>
#include<math.h>
main()
{
    int a[100],n,i,c,ele;
    printf("Enter the Array Size:\n");
    scanf("%d",&n);
    printf("Enter Array Elements:\n");
    for (i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter Element to Search:\n");
    scanf("%d",&ele);
    for (i=0;i<n;i++)
    {
        if(ele==a[i])
        {
            printf("Element Find at Position:%d\n",i+1);
            c=0;
            break;
        }
    }
        if(c!=0)
            printf("Element Not Find");
}
-----------------------------------------------------------------------
//  WAP to Search an Element in an Array with break
// Binary Search
#include<stdio.h>
#include<math.h>
main()
{
    int a[100],n,i,mid,f,l,c=0,pos,ele;
    printf("Enter the Array Size:\n");
    scanf("%d",&n);
    f=0;
    l=n-1;
    printf("Enter Array Elements without Duplication:\n");
    for (i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter Element to Search:\n");
    scanf("%d",&ele);
    while(f<=l)
    {
        mid=(f+l)/2;
        if(a[mid]>ele)
        {
            l=mid-1;
        }
        else if(a[mid]<ele)
        {
            l=mid+1;
        }
        else if(a[mid]==ele)
        {
            c=1;
            pos=mid+1;
            break;
        }
    }
    if(c==1)
        printf("Element Found at %d Position",pos);
    else
        printf("Element Not Found");
}
-----------------------------------------------------------------------
//  WAP to Sort Element in an Array
// Bubble Sort
#include<stdio.h>
#include<math.h>
main()
{
    int a[100],n,i,p,s,t;
    printf("Enter the Array Size:\n");
    scanf("%d",&n);
    printf("Enter Array Elements:\n");
    for (i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(p=0;p<n-1;p++)
    {
        for(s=0;s<n-p-1;s++)
        {
            if(a[s]>a[s+1])
            {
                t=a[s];
                a[s]=a[s+1];
                a[s+1]=t;
                printf("The Sorted Array is:\n");
                for(i=0;i<n;i++)
                {
                    printf("%d ",a[i]);
                }
            }
        }
    }
}
-----------------------------------------------------------------------
//  WAP to Sort Element in an Array
//  Selection Sort
#include<stdio.h>
#include<math.h>
main()
{
   int i,j,n,temp,a[25];
   printf("Enter Array Size:\n ");
   scanf("%d",&n);
    printf("Enter Array Elements:\n ");
   for(i=0;i<n;i++)
      scanf("%d",&a[i]);
   for(i=0;i<n;i++)
    {
      for(j=i+1;j<n;j++)
      {
         if(a[i]>a[j])
         {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
         }
      }
   }
   printf("The Sorted elements: ");
   for(i=0;i<n;i++)
      printf(" %d",a[i]);
}
-----------------------------------------------------------------------
//  WAP to Sort Element in an Array
//  Insertion Sort
#include<stdio.h>
#include<math.h>
main()
{
    int n,i,j,temp,a[10];
    printf("Enter Array  Size\n");
    scanf("%d",&n);
    printf("Enter Array Elements:\n");
    for (i=0;i<n;i++)
        scanf("%d",&a[i]);
    for (i=1;i<=n-1;i++)
    {
	    j=i;
            while ( j > 0 && a[j-1] > a[j])
            {
                temp = a[j];
                a[j]  = a[j-1];
                a[j-1] = temp;
                j--;
            }
    }
    printf("Sorted Array:\n");
    for (i = 0; i <= n - 1; i++)
    {
        printf("%d ", a[i]);
    }
}

-----------------------------------------------------------------------

*************************( MATRIX STATEMENTS )************************

// WAP to Print a Matrix
#include<stdio.h>
#include<math.h>
main()
{
    int a[10][10],i,j,m,n;
    printf("Enter No of Rows and Columns:\n");
    scanf("%d%d",&m,&n);
    printf("Enter Matrix\n");
    for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("****************\n");
    for (i=0;i<m;i++)//Loop for Printing Matrix.
    {
        for (j=0;j<n;j++)
        {
            printf("%d\t",a[i][j]);
        }
    printf("\n");
    }
}
-----------------------------------------------------------------------
// WAP to Print Square of each Element in a Matrix
#include<stdio.h>
#include<math.h>
main()
{
    int a[10][10],i,j,m,n;
    printf("Enter No of Rows and Columns:\n");
    scanf("%d%d",&m,&n);
    printf("Enter Matrix\n");
    for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("****************\n");
    for (i=0;i<m;i++)//Loop for Printing Matrix.
    {
        for (j=0;j<n;j++)
        {
            printf("%d\t",a[i][j]*a[i][j]);
        }
    printf("\n");
    }
}
-----------------------------------------------------------------------
// WAP to Print Elements in Single Array.
#include<stdio.h>
#include<math.h>
main()
{
    int a[10][10],i,j,m,n;
    printf("Enter No of Rows and Columns:\n");
    scanf("%d%d",&m,&n);
    printf("Enter Matrix\n");
    for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("****************\n");
    for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
        {
            printf("%d\t",a[i][j]);
        }
    }
}
-----------------------------------------------------------------------
// WAP to Print Sum of all Elements in a Matrix
#include<stdio.h>
#include<math.h>
main()
{
    int a[10][10],i,j,sum=0,m,n;
    printf("Enter No of Rows and Columns:\n");
    scanf("%d%d",&m,&n);
    printf("Enter Matrix\n");
    for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for (i=0;i<m;i++)//Loop for Sum Calculation.
    {
        for (j=0;j<n;j++)
        {
            sum=sum+a[i][j];
        }
    }
    printf("***************\n");
    printf("Sum:%d",sum);
}
-----------------------------------------------------------------------
// WAP to Print Normal of a Matrix
#include<stdio.h>
#include<math.h>
main()
{
    int a[10][10],i,j,sum=0,m,n;
    printf("Enter No of Rows and Columns:\n");
    scanf("%d%d",&m,&n);
    printf("Enter Matrix\n");
    for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for (i=0;i<m;i++)//Loop for Normal Sum Calculation.
    {
        for (j=0;j<n;j++)
        {
            sum=sum+a[i][j]*a[i][j];
        }
    }
    printf("***************\n");
    printf("Normal of Matrix:%d",sum);
}
-----------------------------------------------------------------------
// WAP to Print Sum of Two Matrix
#include<stdio.h>
#include<math.h>
main()
{
    int a[10][10],b[10][10],c[10][10],i,j,m,n,p,q;
    printf("Enter No of Rows and Columns of 1st Matrix:\n");
    scanf("%d%d",&m,&n);
    printf("Enter No of Rows and Columns of 2nd Matrix:\n");
    scanf("%d%d",&p,&q);
    if (m==p&&n==q)//Matrix Should be Square.
    {
        printf("Enter 1st Matrix\n");
        for (i=0;i<m;i++)
        {
            for (j=0;j<n;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        printf("Enter 2nd Matrix\n");
        for (i=0;i<m;i++)
        {
            for (j=0;j<n;j++)
            {
                scanf("%d",&b[i][j]);
            }
        }
        printf("****************\n");
        for (i=0;i<m;i++)//Loop for Sum Calculation
        {
            for (j=0;j<n;j++)
            {
                c[i][j]=a[i][j]+b[i][j];
                printf("%d\t",c[i][j]);
            }
            printf("\n");
        }
    }
    else//If Matrix are Not Square.
    {
        printf("Addition Not Possible");
    }
}
-----------------------------------------------------------------------
// WAP to Print Subtract of all Elements in a Matrix
#include<stdio.h>
#include<math.h>
main()
{
    int a[10][10],b[10][10],c[10][10],i,j,m,n,p,q;
    printf("Enter No of Rows and Columns of 1st Matrix:\n");
    scanf("%d%d",&m,&n);
    printf("Enter No of Rows and Columns of 2nd Matrix:\n");
    scanf("%d%d",&p,&q);
    if (m==p&&n==q)//Matrix Should be Square.
    {
        printf("Enter 1st Matrix\n");
        for (i=0;i<m;i++)
        {
            for (j=0;j<n;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        printf("Enter 2nd Matrix\n");
        for (i=0;i<m;i++)
        {
            for (j=0;j<n;j++)
            {
                scanf("%d",&b[i][j]);
            }
        }
        printf("****************\n");
        for (i=0;i<m;i++)//Loop for Subtraction.
        {
            for (j=0;j<n;j++)
            {
                c[i][j]=a[i][j]-b[i][j];
                printf("%d\t",c[i][j]);
            }
            printf("\n");
        }
    }
    else//If Matrix are Not Square.
    {
        printf("Subtraction Not Possible");
    }
}
-----------------------------------------------------------------------
// WAP to Find Maximum and Minimum in a Matrix
#include<stdio.h>
#include<math.h>
main()
{
    int a[10][10],i,j,max=0,min,m,n;
    printf("Enter No of Rows and Columns:\n");
    scanf("%d%d",&m,&n);
    printf("Enter Matrix\n");
    for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
        {
            if(max<a[i][j])//Condition for Maximum.
            {
                max=a[i][j];
            }
            min=a[0][0];
            if(min>a[i][j])//Condition for Minimum.
            {
                min=a[i][j];
            }
        }
    }
    printf("***************\n");
    printf("Maximum:%d\nMinimum:%d",max,min);
}
-----------------------------------------------------------------------
// WAP to Find the Sum of all Elements in a Major Diagonal
#include<stdio.h>
#include<math.h>
main()
{
    int a[10][10],sum=0,i,j,m,n;
    printf("Enter No of Rows and Columns of a Matrix:\n");
    scanf("%d%d",&m,&n);
    printf("Enter Matrix\n");
    if(m==n)
    {
        for (i=0;i<m;i++)
        {
            for (j=0;j<n;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        for (i=0;i<m;i++)
        {
            for (j=0;j<n;j++)
            {
                if(i==j)//Condition for Major Diagonal Elements
                {
                    sum=sum+a[i][j];//Calculation for Sum of Diagonal Elements.
                }
            }
        }
        printf("***************\n");
        printf("Sum of Elements of Major Diagonal:%d",sum);
    }
    else
    {
        printf("Non Square Matrix");
    }
}
-----------------------------------------------------------------------
// WAP to Find the Sum of all Elements in a Minor Diagonal
#include<stdio.h>
#include<math.h>
main()
{
    int a[10][10],sum=0,i,j,m,n;
    printf("Enter No of Rows and Columns of a Matrix:\n");
    scanf("%d%d",&m,&n);
    printf("Enter Matrix\n");
    if(m==n)
    {
        for (i=0;i<m;i++)
        {
            for (j=0;j<n;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        for (i=0;i<m;i++)
        {
            for (j=0;j<n;j++)
            {
                if(i+j==(m-1))//Condition for Minor Diagonal Elements
                {
                    sum=sum+a[i][j];//Calculation for Sum of Diagonal Elements.
                }
            }
        }
        printf("***************\n");
        printf("Sum of Elements of Minor Diagonal:%d",sum);
    }
    else
    {
        printf("Non Square Matrix");
    }
}
-----------------------------------------------------------------------
// WAP to Find the Sum of all Elements in a Minor & Major Diagonal
#include<stdio.h>
#include<math.h>
main()
{
    int a[10][10],sumo=0,sump=0,i,j,m,n;
    printf("Enter No of Rows and Columns of a Matrix:\n");
    scanf("%d%d",&m,&n);
    printf("Enter Matrix\n");
    if(m==n)
    {
        for (i=0;i<m;i++)
        {
            for (j=0;j<n;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        for (i=0;i<m;i++)
        {
            for (j=0;j<n;j++)
            {
                if(i+j==(m-1))//Condition for Minor Diagonal Elements
                {
                    sumo=sumo+a[i][j];//Calculation for Sum of Diagonal Elements.
                }
                if(i==j)//Condition for Major Diagonal Elements
                {
                    sump=sump+a[i][j];//Calculation for Sum of Diagonal Elements.
                }
            }
        }
        printf("***************\n");
        printf("Sum of Elements of Major Diagonal:%d\nSum of Elements of Minor Diagonal:%d\
        nSum of Elements of Minor & Major Diagonal:%d",sump,sumo,sumo+sump);
    }
    else
    {
        printf("Non Square Matrix");
    }
}
-----------------------------------------------------------------------
// WAP to Interchange Diagonal Elements.
#include<stdio.h>
#include<math.h>
main()
{
    int a[10][10],i,t,j,m,n;
    printf("Enter No of Rows and Columns of a Matrix:\n");
    scanf("%d%d",&m,&n);
    printf("Enter Matrix\n");
    if(m==n)
    {
        for (i=0;i<m;i++)
        {
            for (j=0;j<n;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        for (i=0;i<m;i++)
        {
            for (j=0;j<n;j++)
            {
                if(i+j==(m-1))//Condition for Minor Diagonal Elements
                {
                    t=a[i][j];//Intechanging of Diagonal Elements.
                    a[i][j]=a[i][i];
                    a[i][i]=t;
                }
            }
        }
        printf("Required Matrix:\n");
        for (i=0;i<m;i++)//Loop for Print Required Matrix
        {
            for (j=0;j<n;j++)
            {
                printf("%d\t",a[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("Non Square Matrix");
    }
}
-----------------------------------------------------------------------
// WAP to Print Sum of all Elements in a Particular Row
#include<stdio.h>
#include<math.h>
main()
{
    int a[10][10],sum,i,j,m,n;
    printf("Enter No of Rows and Columns of a Matrix:\n");
    scanf("%d%d",&m,&n);
    printf("Enter Matrix\n");
    for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("***************\n");
    for (i=0;i<m;i++)
    {
        sum=0;
        for (j=0;j<n;j++)
        {
            sum=sum+a[i][j];//Calculating Sum.
        }
        printf("%d Row:%d\n",i+1,sum);//Sum of Particular Row.
    }
}
-----------------------------------------------------------------------
// WAP to Print Sum of all Elements in a Particular Column
#include<stdio.h>
#include<math.h>
main()
{
    int a[10][10],sum,i,j,m,n;
    printf("Enter No of Rows and Columns of a Matrix:\n");
    scanf("%d%d",&m,&n);
    printf("Enter Matrix\n");
    for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("***************\n");
    for (i=0;i<m;i++)
    {
        sum=0;
        for (j=0;j<n;j++)
        {
            sum=sum+a[j][i];//Calculating Sum.
        }
    printf("%d Column:%d\n",i+1,sum);//Sum of Particular Column.
    }
}
-----------------------------------------------------------------------
// WAP to Print Sum of Odd and Even No in a Matrix.
#include<stdio.h>
#include<math.h>
main()
{
    int a[10][10],i,j,m,n,sumo=0,sume=0;
    printf("Enter No of Rows and Columns:\n");
    scanf("%d%d",&m,&n);
    printf("Enter Matrix\n");
    for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for (i=0;i<n;i++)
    {
        for (j=0;j<m;j++)
        {
            if (a[i][j]%2==0)//Condition for Even No.
            {
                sume=sume+a[i][j];
            }
            else if (a[i][j]%2!=0)//Condition for Odd No.
            {
                sumo=sumo+a[i][j];
            }
        }
    }
    printf("Sum of Even No.:%d\nSum of Odd No.:%d",sume,sumo);//Printing Sum
}
-----------------------------------------------------------------------
// WAP to Print Frequency of Odd and Even No in a Matrix.
#include<stdio.h>
#include<math.h>
main()
{
    int a[10][10],i,j,m,n,e=0,o=0;
    printf("Enter No of Rows and Columns:\n");
    scanf("%d%d",&m,&n);
    printf("Enter Matrix\n");
    for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for (i=0;i<n;i++)
    {
        for (j=0;j<m;j++)
        {
            if (a[i][j]%2==0)//Condition for Even No.
            {
                e++;
            }
            else if (a[i][j]%2!=0)//Condition for Odd No.
            {
                o++;
            }
        }
    }
    printf("Frequency of Even No.:%d\nFrequency of Odd No.:%d",e,o);//Printing Frequency.
}
-----------------------------------------------------------------------
// WAP to Print Transpose of a Matrix
#include<stdio.h>
#include<math.h>
main()
{
    int a[10][10],i,j,m,n;
    printf("Enter No of Rows and Columns:\n");
    scanf("%d%d",&m,&n);
    printf("Enter Matrix\n");
    for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Transpose of Matrix:\n");
    for (i=0;i<n;i++)//Loop for Printing Transpose.
    {//Order of Matrix Reverse during Transpose.
        for (j=0;j<m;j++)
        {
            printf("%d\t",a[j][i]);
        }
    printf("\n");
    }
}
-----------------------------------------------------------------------
// WAP to Check Equality of a Matrix
#include<stdio.h>
#include<math.h>
main()
{
    int a[10][10],b[10][10],c=0,i,j,m,n,p,q;
    printf("Enter No of Rows and Columns of 1st Matrix:\n");
    scanf("%d%d",&m,&n);
    printf("Enter No of Rows and Columns of 2nd Matrix:\n");
    scanf("%d%d",&p,&q);
    if (m==p&&n==q)//Orders of Both Matrix are Equal.
    {
        printf("Enter 1st Matrix\n");
        for (i=0;i<m;i++)
        {
            for (j=0;j<n;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        printf("Enter 2nd Matrix\n");
        for (i=0;i<m;i++)
        {
            for (j=0;j<n;j++)
            {
                scanf("%d",&b[i][j]);
            }
        }
        printf("****************\n");
        for (i=0;i<m;i++)
        {
            for (j=0;j<n;j++)
            {
                if(a[i][j]==b[i][j])
                {
                    c++;
                }
                else
                {
                    break;
                }
            }
        }
        if (c==m*n)
        {
            printf("Equal Matrix");
        }
        else
        {
            printf("Not Equal Matrix");
        }
    }
    else
    {
        printf("Not Equal Matrix");
    }
}
-----------------------------------------------------------------------
// WAP to Check Identity Matrix.
#include<stdio.h>
#include<math.h>
main()
{
    int a[10][10],b[10][10],c=0,d=0,i,j,t,m,n;
    printf("Enter No of Rows and Columns of Matrix:\n");
    scanf("%d%d",&m,&n);
    if (m==n)//Square Matrix.
    {
        printf("Enter Matrix\n");
        for (i=0;i<m;i++)
        {
            for (j=0;j<m;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        for (i=0;i<m;i++)
        {
            for (j=0;j<m;j++)
            {
                if(i==j&&a[i][j]==1)//Condition for Diagonal Elements.
                {
                    c++;
                }
                if(i!=j&&a[i][j]==0)//Condition for Non-Diagonal Elements.
                {
                    d++;
                }
            }
        }
        t=(m*m)-m;
        if (c==m&&d==t)
        {
            printf("Identity Matrix");
        }
        else
        {
            printf("Not Identity Matrix");
        }
    }
    else
    {
        printf("Not Square Matrix");
    }
}
-----------------------------------------------------------------------
// WAP to Check Symmetry of a Matrix
#include<stdio.h>
#include<math.h>
main()
{
    int a[10][10],c=0,d=0,i,p,j,m,n;
    printf("Enter No of Rows and Columns:\n");
    scanf("%d%d",&m,&n);
    p=n*m;//Total Number of Elements
    if (m==n)//For Symmetrical Matrix Should be Square
    {
        printf("Enter Matrix\n");
        for (i=0;i<m;i++)
        {
            for (j=0;j<n;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        for (i=0;i<m;i++)
        {
            for (j=0;j<n;j++)
            {
                // Transpose of the Matrix.
                if(a[i][j]==a[j][i])
                {
                    c++;//Calculates No of Element follow Symmetry.
                }
                else//If any Element of transpose of Matrix are not equal
                {
                    break;//Exit if any Error Element Found,Saves Time.
                }
            }
        }
        if (p==c)//if Total no of Elements equal in both Matrix.
        {
            printf("Symmetric Matrix");
        }
        else//If Element of transpose of Matrix are not equal
        {
            printf("Non Symmetric Matrix");
        }
    }
    else//if Matrix are not Square.
    {
        printf("Non Square Matrix");
    }
}
-----------------------------------------------------------------------
// WAP to 2nd Largest Element in a Matrix
#include<stdio.h>
#include<math.h>
main()
{
    int a[10][10],i,j,max=0,max1=0,m,n;
    printf("Enter No of Rows and Columns:\n");
    scanf("%d%d",&m,&n);
    printf("Enter Matrix\n");
    for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
        {
            // Logic for Finding Largest Element in Matrix.
            if(max<a[i][j])
            {
                max1=max;
                max=a[i][j];
            }
            // Logic for Finding 2nd Largest Element in Matrix.
            // Logic for Finding Largest Element in Matrix other than Largest One.
            else if(max1<a[i][j]&&max1!=max)
            {
                max1=a[i][j];
            }
        }
    }
    printf("***************\n");
    printf("Second Largest Number:%d",max1);
}
-----------------------------------------------------------------------
// WAP to 2nd smallest Element in a Matrix
#include<stdio.h>
#include<math.h>
main()
{
    int a[10][10],i,j,min,min1,m,n;
    printf("Enter No of Rows and Columns:\n");
    scanf("%d%d",&m,&n);
    printf("Enter Matrix\n");
    for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    min==a[0][0];
    for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
        {
            // Logic for Finding Smallest Element in Matrix.
            if(min>a[i][j])
            {
                min1=min;
                min=a[i][j];
            }
            // Logic for Finding 2nd Smallest Element in Matrix.
            // Logic for Finding Smallest Element in Matrix other than Smallest One.
            else if(min1>a[i][j]&&min1!=min)
            {
                min1=a[i][j];
            }
        }
    }
    printf("***************\n");
    printf("Second Smallest Number:%d",min1);
}
-----------------------------------------------------------------------
// WAP to Print Sum of Corners Elements of a Matrix
#include<stdio.h>
#include<math.h>
main()
{
    int a[10][10],sum,i,j,m,n;
    printf("Enter No of Rows and Columns of a Matrix:\n");
    scanf("%d%d",&m,&n);
    printf("Enter Matrix\n");
    for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("***************\n");
    // Logic for Sum of Corner Elements.
    sum=a[0][0]+a[m-1][0]+a[0][n-1]+a[m-1][n-1];
    printf("Sum of Corner Elements:%d",sum);
}
-----------------------------------------------------------------------
// WAP to Print Middle Element in a Matrix
#include<stdio.h>
#include<math.h>
main()
{
    int a[10][10],mid,i,j,m,n;
    printf("Enter No of Rows and Columns of Matrix:\n");
    scanf("%d%d",&m,&n);
    if (m==n&&m%2!=0)
    // Condition for Middle Element ie Matrix will be Square of Odd Order.
    {
        printf("Enter Matrix Elements:\n");
        for (i=0;i<m;i++)
        {
            for (j=0;j<n;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        // Logic for Finding Middle Element.
        mid=a[(m-1)/2][(n-1)/2];
        printf("Middle Element:%d",mid);
    }
    else// If Necessary Condition Fails.
    printf("Not Middle Element");
}
-----------------------------------------------------------------------
// WAP to Print Scalar Multiplication of a Matrix
#include<stdio.h>
#include<math.h>
main()
{
    int a[10][10],i,k,j,m,n;
    printf("Enter No of Rows and Columns:\n");
    scanf("%d%d",&m,&n);
    printf("Enter Scalar to Perform Multiplication:\n");
    scanf("%d",&k);
    printf("Enter Matrix\n");
    for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("****************\n");
    for (i=0;i<m;i++)//Loop for Multiplication and Print Matrix
    {
        for (j=0;j<n;j++)
        {
            printf("%d\t",k*a[i][j]);
        }
        printf("\n");
    }
}
-----------------------------------------------------------------------
// WAP to Print Product of Two Matrix
#include<stdio.h>
#include<math.h>
main()
{
    int a[10][10],b[10][10],c[10][10],i,k,j,m,n,p,q;
    printf("Enter No of Rows and Columns of 1st Matrix:\n");
    scanf("%d%d",&m,&n);
    printf("Enter No of Rows and Columns of 2nd Matrix:\n");
    scanf("%d%d",&p,&q);
    if (n==p)// Necessary Condition for Matrix Multiplication.
    {
        printf("Enter 1st Matrix\n");
        for (i=0;i<m;i++)
        {
            for (j=0;j<n;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        printf("Enter 2nd Matrix\n");
        for (i=0;i<m;i++)
        {
            for (j=0;j<n;j++)
            {
                scanf("%d",&b[i][j]);
            }
        }
        printf("****************\n");
        for (i=0;i<m;i++)
        {
            for (j=0;j<q;j++)
            {
                c[i][j]=0;
                for (k=0;k<n;k++)
                // For multiply each character of matrix same order.
                {
                    // Logic
                    c[i][j]=c[i][j]+a[i][k]*b[k][j];
                }
                printf("%d\t",c[i][j]);
            }
            printf("\n");
        }
    }
    else// if Necessary Condition Fails.
    printf("Multiplication Not Possible");
}
-----------------------------------------------------------------------
// WAP to Print Square of a Matrix
#include<stdio.h>
#include<math.h>
main()
{
    int a[10][10],c[10][10],i,k,j,m,n;
    printf("Enter No of Rows and Columns:\n");
    scanf("%d%d",&m,&n);
    if (m==n)// Necessary Condition for Matrix Multiplication.
    {
        printf("Enter Matrix\n");
        for (i=0;i<m;i++)
        {
            for (j=0;j<m;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        printf("****************\n");
        for (i=0;i<m;i++)
        {
            for (j=0;j<m;j++)
            {
                c[i][j]=0;
                for (k=0;k<n;k++)
                // For multiply each character of matrix same order.
                {
                    // Logic
                    c[i][j]=c[i][j]+a[i][k]*a[k][j];
                }
                printf("%d\t",c[i][j]);
            }
            printf("\n");
        }
    }
    else// if Necessary Condition Fails.
    printf("Multiplication Not Possible");
}
-----------------------------------------------------------------------
// WAP to Print cube of a Matrix
#include<stdio.h>
#include<math.h>
main()
{
    int a[10][10],c[10][10],d[10][10],i,k,j,m,n;
    printf("Enter No of Rows and Columns:\n");
    scanf("%d%d",&m,&n);
    if (m==n)// Necessary Condition for Matrix Multiplication.
    {
        printf("Enter Matrix\n");
        for (i=0;i<m;i++)
        {
            for (j=0;j<m;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        printf("****************\n");
        for (i=0;i<m;i++)
        {
            for (j=0;j<m;j++)
            {
                c[i][j]=0;
                for (k=0;k<n;k++)
                // For multiply each character of matrix same order.
                {
                    // Logic
                    c[i][j]=c[i][j]+a[i][k]*a[k][j];
                }
            }
        }
        for (i=0;i<m;i++)
        {
            for (j=0;j<m;j++)
            {
                d[i][j]=0;
                for (k=0;k<n;k++)
                // For multiply each character of matrix same order.
                {
                    // Logic
                    d[i][j]=d[i][j]+a[i][k]*c[k][j];
                }
                printf("%d\t",d[i][j]);
            }
            printf("\n");
        }
    }
    else// if Necessary Condition Fails.
    printf("Multiplication Not Possible");
}
-----------------------------------------------------------------------
// WAP to Display and find Sum of Upper Triangular Matrix.
#include<stdio.h>
#include<math.h>
main()
{
    int a[10][10],b[10][10],sum=0,i,j,m,n;
    printf("Enter No of Rows and Columns of Matrix:\n");
    scanf("%d%d",&m,&n);
    if (m==n)//Square Matrix.
    {
        printf("Enter Matrix:\n");
        for (i=0;i<m;i++)
        {
            for (j=0;j<m;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        for (i=0;i<m;i++)
        {
            for (j=0;j<m;j++)
            {
                if(i>=j)//Condition for Display Upper Triangular Elements.
                {
                    a[i][j]=0;
                }
                else
                {
                    sum=sum+a[i][j];
                }
            }
        }
        printf("Required Matrix:\n");
        for (i=0;i<m;i++)
        {
            for (j=0;j<n;j++)
            {
                printf("%d\t",a[i][j]);
            }
            printf("\n");
        }
        printf("Sum of Upper Triangular Elements:%d",sum);
    }
    else//Required Condition are Failed
    {
        printf("Not Square Matrix");
    }
}
-----------------------------------------------------------------------
// WAP to Display and find Sum of Lower Triangular Matrix.
#include<stdio.h>
#include<math.h>
main()
{
    int a[10][10],b[10][10],sum=0,i,j,m,n;
    printf("Enter No of Rows and Columns of Matrix:\n");
    scanf("%d%d",&m,&n);
    if (m==n)//Square Matrix.
    {
        printf("Enter Matrix:\n");
        for (i=0;i<m;i++)
        {
            for (j=0;j<m;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        for (i=0;i<m;i++)
        {
            for (j=0;j<m;j++)
            {
                if(i<=j)//Condition for Display Lower Triangular Matrix.
                {
                    a[i][j]=0;
                }
                else
                {
                    sum=sum+a[i][j];
                }
            }
        }
        printf("Required Matrix:\n");
        for (i=0;i<m;i++)
        {
            for (j=0;j<n;j++)
            {
                printf("%d\t",a[i][j]);
            }
            printf("\n");
        }
        printf("Sum of Lower Triangular Matrix:%d",sum);
    }
    else//Required Condition are Failed
    {
        printf("Not Square Matrix");
    }
}
-----------------------------------------------------------------------
// WAP to Display Diagonal Matrix.
#include<stdio.h>
#include<math.h>
main()
{
    int a[10][10],b[10][10],sum=0,i,j,m,n;
    printf("Enter No of Rows and Columns of Matrix:\n");
    scanf("%d%d",&m,&n);
    if (m==n)//Square Matrix.
    {
        printf("Enter Matrix:\n");
        for (i=0;i<m;i++)
        {
            for (j=0;j<m;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        for (i=0;i<m;i++)
        {
            for (j=0;j<m;j++)
            {
                if(i<j||i>j)//Condition for Display Diagonal Matrix.
                {
                    a[i][j]=0;
                }
                else
                {
                    sum=sum+a[i][j];
                }
            }
        }
        printf("Required Matrix:\n");
        for (i=0;i<m;i++)
        {
            for (j=0;j<n;j++)
            {
                printf("%d\t",a[i][j]);
            }
            printf("\n");
        }
        printf("Sum of Diagonal Matrix:%d",sum);
    }
    else//Required Condition are Failed
    {
        printf("Not Square Matrix");
    }
}

-----------------------------------------------------------------------

*************************( STRING STATEMENTS)*************************

// WAP to Input a String (Without Space).
#include<stdio.h>
main()
{
    char a[20];
    printf("Input a String:\n");
    scanf("%s",a);//Scans (Formatted) Input before Space.
    printf("Input String  is:\n");
    printf("%s",a);//Formatted Output Statement.
}
                          --------------------------------------
#include<stdio.h>
main()
{
    char a[20];
    printf("Input a String:\n");
    scanf("%s",a);//Scans Input before Space.
    printf("Input String  is:\n");
    puts(a);//Unformatted Output Statement.
}
-----------------------------------------------------------------------
// WAP to Input a String (With Spaces).
#include<stdio.h>
main()
{
    char a[20];
    printf("Input a String:\n");
    gets(a);//Scans (Unformatted) Input before and after Space.
    printf("Input String  is:\n");
    printf("%s",a);//Formatted Output Statement.
}
                          --------------------------------------
#include<stdio.h>
main()
{
    char a[20];
    printf("Input a String:\n");
    gets(a);//Scans (Unformatted) Input before and after Space.
    printf("Input String  is:\n");
    puts(a);//Unformatted Output Statement.
}
-----------------------------------------------------------------------
// WAP to Calculate Length of a String
//(Using String Handeling Functions).
#include<stdio.h>
#include<string.h>
main()
{
    int l;
    char a[20];
    printf("Input a String:\n");
    gets(a);//Unformatted Input Function
    l=strlen(a);//Syntax
    printf("The Length of String is:%d",l);
}
-----------------------------------------------------------------------
// WAP to Copy a String
//(Using String Handeling Functions).
#include<stdio.h>
#include<string.h>
main()
{
    char a[20],b[20];
    printf("Input a String:\n");
    gets(a);//Unformatted Input Function
    printf("\nOriginal String is:%s",a);
    strcpy(b,a);//Syntax
    printf("\nCopied String is:%s",b);
}
-----------------------------------------------------------------------
// WAP to Find Reverse of a String
//(Using String Handeling Functions).
#include<stdio.h>
#include<string.h>
main()
{
    char a[20];
    printf("Input a String:\n");
    gets(a);//Unformatted Input Function
    printf("\nOriginal String is:%s",a);
    strrev(a);//Syntax
    printf("\nReversed String is:%s",a);
}
-----------------------------------------------------------------------
// WAP to Append two String
//(Using String Handeling Functions).
#include<stdio.h>
#include<string.h>
main()
{
    char a[20],b[20];
    printf("Input 1st String:\n");
    gets(a);//Unformatted Input Function
    printf("Input 2nd String is:\n");
    gets(b);//Unformatted Input Function
    strcat(a,b);//Syntax
    printf("\nRequired String is:");
    puts(a);
}
-----------------------------------------------------------------------
// WAP to Compare two String
//(Using String Handeling Functions).
#include<stdio.h>
#include<string.h>
main()
{
    char a[20],b[20];
    printf("Input 1st String:\n");
    gets(a);//Unformatted Input Function
    printf("Input 2nd String is:\n");
    gets(b);//Unformatted Input Function
    if(strcmp(a,b)==0)//Syntax
    {   //Compare ASCII value of every Character.
        printf("Equal");//Condition Satisfies
    }
    else
    {   //Gives output in +1,-1.
        printf("Not Equal");//Condition Unsatisfies
    }
}
-----------------------------------------------------------------------
// WAP to Calculate Length of a String
//(Without using String Handeling Functions).
#include<stdio.h>
main()
{
    int l=0,i;
    char a[20];
    printf("Input a String:\n");
    gets(a);//Unformatted Input Function
    for(i=0;a[i]!='\0';i++)
    {
        l++;
    }
    printf("The Length of String is:%d",l);
}
-----------------------------------------------------------------------
// WAP to Copy a String.
//(Without using String Handeling Functions).
#include<stdio.h>
main()
{
    int i;
    char a[20],b[20];
    printf("Input a String:\n");
    gets(a);//Unformatted Input Function
    printf("Input String:\n%s",a);
    for(i=0;a[i]!='\0';i++)
    {
        b[i]=a[i];
    }
    b[i]='\0';
    printf("\nCopied String:\n%s",b);
}
-----------------------------------------------------------------------
// WAP to Find Reverse of a String.
//(Without using String Handeling Functions).
#include<stdio.h>
main()
{
    int i,l=0;
    char a[20],b[20];
    printf("Input a String:\n");
    gets(a);//Unformatted Input Function
    printf("Input String:\n%s",a);
    for(i=0;a[i]!='\0';i++)
    {
        l++;
    }
    for(i=0;i<l;i++)
    {
        b[i]=a[l-i-1];
    }
    b[i]='\0';
    printf("\nReversed String:\n%s",b);
}
-----------------------------------------------------------------------
// WAP to Compare two String.
//(Without using String Handeling Functions).
#include<stdio.h>
main()
{
    int i,l=0,m=0,c=0;
    char a[20],b[20];
    printf("Input 1st String:\n");
    gets(a);//Unformatted Input Function
    printf("Input 2nd String:\n");
    gets(b);//Unformatted Input Function
    for(i=0;a[i]!='\0';i++)
    {
        l++;
    }
    for(i=0;b[i]!='\0';i++)
    {
        m++;
    }
    if(l==m)
    {
        for(i=0;i<l;i++)
        {
            if(a[i]==b[i])
            {
                c++;
            }
            else
            {
                break;
            }
        }
        if(c==l)
        {
            printf("\nEqual String");
        }
        else
        {
            printf("Not Equal Strings");
        }
    }
    else
    {
        printf("Not Equal Strings");
    }
}
-----------------------------------------------------------------------
// WAP to Append two String.
//(Without using String Handeling Functions).
#include<stdio.h>
main()
{
    int i,l=0,m=0;
    char a[20],b[20];
    printf("Input 1st String:\n");//On which append is done.
    gets(a);//Unformatted Input Function
    printf("Input 2nd String:\n");//By which append is done.
    gets(b);//Unformatted Input Function
    for(i=0;a[i]!='\0';i++)
    {
        l++;
    }
    for(i=0;b[i]!='\0';i++)
    {
        m++;
    }
    for(i=0;i<m;i++)
    {
        a[l+i]=b[i];
    }
    a[l+i]='\0';
    printf("Required String:\n%s",a);
}
-----------------------------------------------------------------------
// WAP to Check Whether a String is Palindrome or Not.
//(Using String Handeling Functions).
#include<stdio.h>
#include<string.h>
main()
{
    char a[20],b[20];
    printf("Input String:\n");
    gets(a);//Unformatted Input Function
    strcpy(b,a);//Syntax for Copying String a to b.
    printf("Input String:\n%s\n",b);
    strrev(a);//Syntax for Reversing String a.
    printf("Reverse String:\n%s\n",a);
    if(strcmp(a,b)==0)
    {
        printf("************\nPalindrome String");
    }
    else
    {
        printf("************\nNot Palindrome String");
    }
}
-----------------------------------------------------------------------
// WAP to Check Whether a String is Palindrome or Not.
//(Without using String Handeling Functions).
#include<stdio.h>
main()
{
    int i,l=0,c=0;
    char a[20],b[20];
    printf("Input a String:\n");
    gets(a);//Unformatted Input Function
    printf("Input String:\n%s",a);
    for(i=0;a[i]!='\0';i++)
    {
        l++;
    }
    for(i=0;i<l;i++)
    {
        b[i]=a[l-i-1];
    }
    b[i]='\0';
    printf("\nReversed String:\n%s",b);
    for(i=0;i<l;i++)
    {
        if(a[i]==b[i])
        {
            c++;
        }
        else
        {
            break;
        }
    }
    if(c==l)
    {
        printf("\nPalindrome String");
    }
    else
    {
        printf("\nNot Palindrome Strings");
    }
}
-----------------------------------------------------------------------
// WAP to count the No of Lowercase,Uppercase,Alphabets,Spaces,
// Numbers and Special Characters.
#include<stdio.h>
main()
{
    int i,l=0,alph=0,upc=0,lwc=0,num=0,spa=0,sc=0;
    char a[50];
    printf("Input String:\n");
    gets(a);//Unformatted Input Function
    for(i=0;a[i]!='\0';i++)
    {
        l++;
    }
    for(i=0;i<l;i++)
    {
        if(a[i]>=65 && a[i]<=90 || a[i]>=97 && a[i]<=122)
        {
            alph++;
            if (a[i]>=65 && a[i]<=90)
            {
                upc++;
            }
            else if(a[i]>=97 && a[i]<=122)
            {
                lwc++;
            }
        }
        else if(a[i]>=48 && a[i]<=57)
        {
            num++;
        }
        else if(a[i]==32)
        {
            spa++;
        }
        else
        {
            sc++;
        }
    }
    printf("The Details are:\n");
    printf("Alpahabets:%d\nUppercase:%d\nLowercase:%d\n",alph,upc,lwc);
    printf("Numbers:%d\nSpace:%d\nSpecial CHaracters:%d",num,spa,sc);
}
-----------------------------------------------------------------------
// WAP to Print frequency of Character in a String.
#include <stdio.h>
#include <string.h>
main()
{
    char a[100];
    int  i,j,k,c=0,n;
    printf("Enter String :\n");
    gets(a);
    for(j=0;a[j];j++);
	 n=j;
	printf("*********************\n");
    for(i=0;i<n;i++)
    {
     	c=1;
    	if(a[i])
        {
            for(j=i+1;j<n;j++)
	       {
	         if(a[i]==a[j])
    	     {
                c++;
                a[j]='\0';
	     	 }
	       }
	      printf("'%c' occurs %d times\n",a[i],c);
        }
    }
}
-----------------------------------------------------------------------
// WAP to Eliminate all Characters Except Alphabets from a String.
#include <stdio.h>
#include <string.h>
main()
{
    char a[20];
    int i,j;
    printf("Enter String:\n");
    gets(a);
    for(i=0;a[i]!='\0';++i)
    {
        while (!((a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='Z')||a[i]=='\0'))
        {
            for(j=i;a[j]!='\0';++j)
            {
                a[j] = a[j+1];
            }
            a[j] ='\0';
        }
    }
    printf("Required String:\n");
    puts(a);
}
-----------------------------------------------------------------------
// WAP to Eliminate Alphabets from a String.
#include <stdio.h>
#include <string.h>
main()
{
    char a[20];
    int i,j;
    printf("Enter String:\n");
    gets(a);
    for(i=0;a[i]!='\0';++i)
    {
        while (((a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='Z')||a[i]=='\0'))
        {
            for(j=i;a[j]!='\0';++j)
            {
                a[j] = a[j+1];
            }
            a[j] ='\0';
        }
    }
    printf("Required String:\n");
    puts(a);
}
-----------------------------------------------------------------------
// WAP to Eliminate Input Character from a String.
#include <stdio.h>
#include <string.h>
main()
{
    char a[20],n;
    int i,j;
    printf("Enter String without Repetition:\n");
    gets(a);
    printf("Enter Character to Eliminate:\n");
    scanf("%c",&n);
    for(i=0;a[i]!='\0';++i)
    {
        while ((a[i]==n)||(a[i]=='\0'))
        {
            for(j=i;a[j]!='\0';++j)
            {
                a[j]=a[j+1];
            }
            a[j]='\0';
        }
    }
    printf("Required String:\n");
    puts(a);
}
-----------------------------------------------------------------------
// WAP to count the No of Vowels,Spaces and Words.
#include<stdio.h>
main()
{
    int i,w=1,v=0,s=0;
    char a[50];
    printf("Input String:\n");
    gets(a);
    for(i=0;a[i]!='\0';i++)
    {
        if (a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U'
            ||a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
        {
            v++;
        }
        if(a[i]==' ' && a[i+1]!=' ')
        {
            w++;
        }
        if(a[i]==32)
        {
            s++;
        }

    }
    printf("The Details are:\n");
    printf("Vowels:%d\nSpace:%d\nWords:%d",v,s,w);
}
-----------------------------------------------------------------------
// WAP to Check Whether a Substring is a Part of String or Not.
//(Without using String Handeling Functions).
#include<stdio.h>
main()
{
    int i,j,c1=0,c2=0,k;
    char a[50],b[10];
    printf("Input String:\n");
    gets(a);
    printf("Input Substring:\n");
    gets(b);
    for(i=0;a[i]!='\0';i++)
    {
       c1++;
    }
    for(i=0;b[i]!='\0';i++)
    {
       c2++;
    }
    for(i=0;i<c1-c2;i++)
    {
       for(j=i;j<i+c2;j++)
       {
           k=1;
           if(a[j]!=b[j-i])
           {
               k=0;
               break;
           }
       }
       if(k==1)
       {
            break;
       }

    }
   if(k==1)
   {
       printf("Yes");
   }
   else
   {
        printf("No");
   }
}
-----------------------------------------------------------------------
// WAP to List of Students in Sorted Order using String.
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
main()
{
    int i,p,s,n;
    char name[10][20],temp[20];
    printf("Enter the no of Students:\n");
    scanf("%d",&n);
     printf("Enter the Names:\n");
    for (i=0;i<n;i++)
    {
        fflush(stdin);
        gets(name[i]);
    }
    for (p=0;p<n-1;p++)
    {
        for (s=0;s<n-p-1;s++)
        {
            if((strcmp(name[s],name[s+1]))>0)
            {
                strcpy(temp,name[s]);
                strcpy(name[s],name[s+1]);
                strcpy(name[s+1],temp);
            }

        }
    }
    printf("Sorted Names:\n");
    for (i=0;i<n;i++)
        printf("%s\n",name[i]);
}
-----------------------------------------------------------------------
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
//Also Check Fail or Pass.
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
*****************************( POINTERS )*****************************
{
// WAP to Search an Element in an Array using Pointer by Binary Search.
#include<stdio.h>
#include<math.h>
main()
{
    int a[10],n,i,mid,f,l,c=0,ele,*p;
    printf("Enter the Array Size:\n");
    scanf("%d",&n);
    p=&a[0];
    f=0;
    l=n-1;
    printf("Enter Array Elements without Duplication:\n");
    for (i=0;i<n;i++)
        scanf("%d",p+i);
    printf("Enter Element to Search:\n");
    scanf("%d",&ele);
    while(f<=l)
    {
        mid=(f+l)/2;
        if(*(p+mid)>ele)
            l=mid-1;
        else if(*(p+mid)<ele)
            l=mid+1;
        else if(*(p+mid)==ele)
        {
            c=1;
            break;
        }
    }
    if(c==1)
        printf("Element Found at %d Position",mid+1);
    else
        printf("Element Not Found");
}
-----------------------------------------------------------------------
// WAP to Sort Element in an Array using Pointer by Selection Sort.
#include<stdio.h>
#include<math.h>
main()
{
   int i,j,n,temp,a[25],*p;
   printf("Enter Array Size:\n ");
   scanf("%d",&n);
   printf("Enter Array Elements:\n ");
   p=&a[0];
   for(i=0;i<n;i++)
      scanf("%d",p+i);
   for(i=0;i<n;i++)
    {
      for(j=i+1;j<n;j++)
      {
         if(*(p+i)>*(p+j))
         {
            temp=*(p+i);
            *(p+i)=*(p+j);
            *(p+j)=temp;
         }
      }
   }
   printf("The Sorted elements: ");
   for(i=0;i<n;i++)
      printf(" %d",*(p+i));
}
-----------------------------------------------------------------------
//  WAP to Sort Element in an Array using Pointer by Insertion Sort.
#include<stdio.h>
#include<math.h>
main()
{
    int n,i,j,temp,a[10],*p;
    printf("Enter Array  Size\n");
    scanf("%d",&n);
    printf("Enter Array Elements:\n");
    p=&a[0];
    for (i=0;i<n;i++)
    {
        scanf("%d",(p+i));
    }
    for (i=1;i<=n-1;i++)
    {
	    j=i;
        while (j>0&&*(p+j-1)>*(p+j))
        {
            temp=*(p+j);
            *(p+j)=*(p+j-1);
            *(p+j-1)=temp;
            j--;
        }
    }
    printf("Sorted Array:\n");
    for (i=0;i<=n-1;i++)
        printf("%d\t",*(p+i));
}
-----------------------------------------------------------------------
// WAP to Calculate Length of a String using Pointer Without using String Handeling Functions
#include<stdio.h>
main()
{
    int l=0,i;
    char a[20],*p;
    printf("Input a String:\n");
    p=&a[0];
    gets(a);//Unformatted Input Function
    for(i=0;*(p+i)!='\0';i++)
        l++;
    printf("The Length of String is:%d",l);
}
-----------------------------------------------------------------------
// WAP to Find the sum of all Elements in a List using Pointer.
#include<stdio.h>
#include<math.h>
main()
{
    int a[10],s=0,n,i,*p;
    printf("Enter the Array Size:\n");
    scanf("%d",&n);
    p=&a[0];
    printf("Enter Array Elements:\n");
    for (i=0;i<n;i++)
        scanf("%d", (p+i));
    for (i=0;i<n;i++)
        s=s+ *(p+i);
    printf("\nSum:%d",s);
}
-----------------------------------------------------------------------
// WAP to Check Whether a String is Palindrome or Not using Pointers.
#include<stdio.h>
main()
{
    int i,l=0,c=0;
    char a[20],b[20],*p,*q;
    printf("Input a String:\n");
    gets(a);
    printf("Input String:\n%s",a);
    p=&a[0];
    q=&b[0];
    for(i=0;*(p+i)!='\0';i++)
        l++;
    for(i=0;i<l;i++)
        *(q+i)=*(p+l-i-1);
    *(q+i)='\0';
    printf("\nReversed String:\n%s",b);
    for(i=0;i<l;i++)
    {
        if(*(p+i)==*(q+i))
            c++;
        else
            break;
    }
    if(c==l)
        printf("\nPalindrome String");
    else
        printf("\nNot Palindrome Strings");
}
-----------------------------------------------------------------------
// WAP to Append two String using Pointers.
#include<stdio.h>
main()
{
    int i,l=0,m=0;
    char a[20],b[20],*p,*q;
    printf("Input 1st String:\n");
    gets(a);
    printf("Input 2nd String:\n");
    gets(b);
    p=&a[0];
    q=&b[0];
    for(i=0;*(p+i)!='\0';i++)
        l++;
    for(i=0;*(q+i)!='\0';i++)
        m++;
    for(i=0;i<m;i++)
        *(p+l+i)=*(q+i);
    *(p+l+i)='\0';
    printf("Required String:\n%s",a);
}
-----------------------------------------------------------------------
//  WAP to Print Maximun and Minimum in a list using Pointers
#include<stdio.h>
#include<math.h>
main()
{
    int a[10],max=0,min=a[0],i,n,*p;
    printf("Enter the Array Size:\n");
    scanf("%d",&n);
    printf("Enter Array Elements:\n");
    p=&a[0];
    for (i=0;i<n;i++)
    {
        scanf("%d",p+i);
        if(max<*(p+i))
            {
                max=*(p+i);
            }
        if(min>*(p+i))
            {
                min=*(p+i);
            }
    }
    printf("Maximun:%d\nMinimum:%d",max,min);
}
-----------------------------------------------------------------------
**************************( FILE HANDELING)***************************

//  WAP to Read a File.
#include<stdio.h>
main()
{
    FILE *fp;
    char c;
    fp=fopen("ABC.txt","r");
    if(fp==NULL)
    {
        printf("File Not Exist");
    }
    else
    {
        while ((c=fgetc(fp))!=EOF)
        {
            printf("%c",c);
        }
    }
    fclose(fp);
}
-----------------------------------------------------------------------
//  WAP to Write in a File.
#include<stdio.h>
main()
{
    FILE *fp;
    char c;
    fp=fopen("ABC.txt","w");
    while ((c=fgetc(fp))!=EOF)
    {
        fputc(c,fp);
    }
    fclose(fp);
}
-----------------------------------------------------------------------
//  WAP to Copy one file into another.
#include<stdio.h>
main()
{
    FILE *fp,*fq;
    char c;
    fp=fopen("ABC.txt","r");
    fq=fopen("ABCD.txt","w");
    if(fp==NULL)
    {
        printf("File Not Exist");
    }
    else
    {
        while ((c=fgetc(fp))!=EOF)
        {
            fputc(c,fq);
        }
    }
    fclose(fp);
    fclose(fq);
}
-----------------------------------------------------------------------
//  WAP to read integers from a File .
#include<stdio.h>
main()
{
    FILE *fp;
    int d;
    fp=fopen("ABC.txt","r");
    if(fp==NULL)
        printf("File Not Exist");
    else
    {
        while ((d=getw(fp))!=EOF)
        {
            printf("%d",d);
        }
    }
    fclose(fp);
}
-----------------------------------------------------------------------
//  WAP to write integers in a File .
#include<stdio.h>
main()
{
    FILE *fp;
    int d;
    fp=fopen("ABC.txt","w");
    if(fp==NULL)
        printf("File Not Exist");
    else
    {
        while ((scanf("%d",&d))!=EOF)
        {
            putw(d,fp);
        }
    }
    fclose(fp);
}
-----------------------------------------------------------------------
//  WAP to Check Identical Nature of Two Files.
#include<stdio.h>
main()
{
    FILE *f,*q;
    char c1,c2;
    f=fopen("ABC.txt","r");
    q=fopen("ABCD.txt","r");
    if(f==NULL||q==NULL)
        printf("File Not Exist");
    else
    {
        c1=fgetc(f);
        c2=fgetc(q);
        while ((c1!=EOF)&&(c2!=EOF)&&(c1==c2))
        {
            c1=fgetc(f);
            c2=fgetc(q);
        }
        if(c1==c2)
            printf("Identical");
        else
            printf("Non-Identical");
    }
    fclose(f);
    fclose(q);
}
-----------------------------------------------------------------------
//  WAP to Read a File using string.
#include<stdio.h>
main()
{
    FILE *f;
    char s[1000];
    f=fopen("ABC.txt","r");
    if(f==NULL)
        printf("File Not Exist");
    else
    {
        while (fgets(s,1000,f)!='\0')
        {
            printf("%s",s);
        }
    }
    fclose(f);
}
-----------------------------------------------------------------------
//  WAP to Write a File using string.
#include<stdio.h>
main()
{
    FILE *f;
    char s[1000];
    f=fopen("ABC.txt","w");
    fputs("The Written Text\n",f);
    fputs("The Next Line",f);
    fclose(f);
}
-----------------------------------------------------------------------
//  WAP to Count the frequency of Input Word.
#include<stdio.h>
#include<string.h>
main()
{
    FILE *f;
    char str[100],s[10];
    int c=0;
    printf("Enter the Word to search:\n");
    scanf("%s",s);
    f=fopen("ABC.txt","r");
    if(f==NULL)
        printf("File Not Exist");
    else
    {
        while (fscanf(f,"%s",str)!=EOF)
        {
            if(strcmp(str,s)==0)
                c++;
        }
        if(c!=0)
            printf("%s Occurs %d times",s,c);
        else
            printf("Not Found");
    }
    fclose(f);
}
-----------------------------------------------------------------------
//  WAP to Create database for a student in a file.
#include<stdio.h>
struct Student
{
    char n[20];
    int r,m;
}s;
main()
{
    FILE *f;
    f=fopen("ABC.txt","w");
    printf("Enter Name Roll No and Marks:\n");
    scanf("%s%d%d",s.n,&s.r,&s.m);
    fprintf(f,"%s\t%d\t%d",s.n,s.r,s.m);
    fclose(f);
}
-----------------------------------------------------------------------
//  WAP to Create database for 50 student in a file.
#include<stdio.h>
#include<stdlib.h>
struct Student
{
    char n[20];
    int r,m;
}s[50];
main()
{
    FILE *f;
    int i;
    f=fopen("ABC.txt","w");
    printf("Enter Name Roll No and Marks:\n");
    for (i=0;i<50;i++)
    {
        fflush(stdin);
        gets(s[i].n);
        scanf("%d%d",&s[i].r,&s[i].m);
        fprintf(f,"%s\t%d\t%d\n",s[i].n,s[i].r,s[i].m);
    }
    fclose(f);
}
-----------------------------------------------------------------------
//  WAP to Create database for 50 student in a file in Sorted Order.
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Student
{
    char n[20];
    int r,m;
}s[50],temp;
main()
{
    int i,p,q;
    FILE *f;
    f=fopen("Student.txt","w");
    printf("Enter Name Roll No and Marks:\n");
    for (i=0;i<50;i++)
    {
        fflush(stdin);
        gets(s[i].n);
        scanf("%d%d",&s[i].r,&s[i].m);
    }
    for (p=0;p<49;p++)
    {
        for(q=0;q<49-p;q++)
        {
            if(strcmp(s[q].n,s[q+1].n)>0)
            {
                temp=s[q];
                s[q]=s[q+1];
                s[q+1]=temp;
            }

        }
    }
    fputs("SORTED DATA ARE:\n",f);
     for (i=0;i<50;i++)
    {
        fprintf(f,"%s\t%d\t%d\n",s[i].n,s[i].r,s[i].m);
    }
    fclose(f);
}
-----------------------------------------------------------------------
//  WAP to Create database for 50 Employee in a file.
#include<stdio.h>
#include<stdlib.h>
struct Employee
{
    char n[20];
    int i,s;
}e[50];
main()
{
    FILE *f;
    int i;
    f=fopen("Employee.txt","w");
    printf("Enter Name Employee ID and Salary:\n");
    for (i=0;i<50;i++)
    {
        fflush(stdin);
        gets(e[i].n);
        scanf("%d%d",es[i].i,&e[i].s);
        fprintf(f,"%s\t%d\t%d\n",e[i].n,e[i].i,e[i].s);
    }
    fclose(f);
}
-----------------------------------------------------------------------
//  WAP to Create database for 50 Employee in a file
//Also Print Highest Salary.
#include<stdio.h>
#include<stdlib.h>
struct Employee
{
    char n[20];
    int id,s;
}e[50];
main()
{
    FILE *f;
    int i,max=0,index;
    f=fopen("Employee.txt","w");
    printf("Enter Name Employee ID and Salary:\n");
    for (i=0;i<50;i++)
    {
        fflush(stdin);
        gets(e[i].n);
        scanf("%d%d",&e[i].id,&e[i].s);
        fprintf(f,"%s\t%d\t%d\n",e[i].n,e[i].id,e[i].s);
    }
    for (i=0;i<50;i++)
    {
        if (max<e[i].s)
        {
            max=e[i].s;
            index=i;
        }
    }
    fprintf(f,"Maximum Salary:\n%s\t%d\t%d",e[index].n,e[index].id,max);
    fclose(f);
}
-----------------------------------------------------------------------
//  WAP to Count Frequency of Alphabet,Numbers etc .
#include<stdio.h>
main()
{
    FILE *fp,*fa;
    char ch;
    int a=0,n=0,s=0,sp=0,l=0;
    fp=fopen("ABC.txt","r");
    if(fp==NULL)
        printf("File Not Exist");
    else
    {
        while ((ch=fgetc(fp))!=EOF)
        {
            if(ch>=65 && ch<=90 || ch>=97 && ch<=122)
                a++;
            else if(ch>=48 && ch<=57)
                n++;
            else if(ch==32)
                s++;
            else if(ch=='\n')
                l++;
            else
                sp++;
        }
    }
    printf("Alphabet:%d\nNumbers:%d\nSpace:%d\nLines:%d\nSpecial Symbols:%d",a,n,s,l,sp);
     fclose(fp);
}
-----------------------------------------------------------------------
//  WAP to Find Odd and Even and Print in Separate File .
#include<stdio.h>
main()
{
    FILE *fp,*fo,*fe;
    int d;
    fp=fopen("ABC.txt","r");
    fo=fopen("Odd.txt","w");
    fe=fopen("Even.txt","w");
    if(fp==NULL)
        printf("File Not Exist");
    else
    {
        while ((d=getw(fp))!=EOF)
        {
            if(d%2==0)
                    putw(d,fe);
            else
                    putw(d,fo);
        }
    }
    fclose(fo);
    fclose(fe);
    fclose(fp);
}

-----------------------------------------------------------------------
//  WAP to Find Factorial of all Integer using File Handeling .
#include<stdio.h>
main()
{
    FILE *fp,*fa;
    int d,f=1,i;
    fp=fopen("ABC.txt","r");
    fa=fopen("Factorial.txt","w");
    if(fp==NULL)
        printf("File Not Exist");
    else
    {
        while ((d=getw(fp))!=EOF)
        {
            for(i=0;i<=d;i++)
                f=f*i;
            fprintf(fa,"%d",f);
            f=1;
        }
    }
    fclose(fp);
    fclose(fa);
}
-----------------------------------------------------------------------


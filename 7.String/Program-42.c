/**************************************************************
42.Program for Converting LC to UC and Vice Versa
Author : Rohit Kumar
Ad.No. : 2019B101051
**************************************************************/
#include<stdio.h>
int StringLength(char s[])
{
    int i=0;
    while (s[i]!='\0')
        i++;
    return i;
}
void main()
{
    int len, i = 0, count = 0;
    char s[]={"DataStructure"};
    printf("Input String:\t%s\n",s);
    len = StringLength(s);
    while(s[i]!='\0')
    {
        if(s[i] >= 'A' && s[i] <= 'Z')
            s[i] = s[i]+32;
        else if(s[i] >= 'a' && s[i]<='z')
            s[i] = s[i]-32;
        i++;
    }
    printf("Required String :   ");
    puts(s);
}

/**************************************************************
INPUT   :   DataStructure
OUTPUT  :   dATAsTRUCTURE

ALGORITHM   STRINGLENGTH(A[],i,len)
BEGIN:

        WHILE  s[i]!='\0' THEN
            IF  s[i] >= 'A' && s[i] <= 'Z'
                s[i] = s[i]+32;
            ELSE IF s[i] >= 'a' && s[i]<='z'
                s[i] = s[i]-32;
        i++
END

**************************************************************/



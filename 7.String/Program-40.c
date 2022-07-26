/**************************************************************
40.Program for finding if the given string is palindrome
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
    char rev[100];
    int i, len, flag = 0;
    char s[]={"DataStructure"};
    printf("Input String:\t%s\n",s);
    len = StringLength(s);
    for (i=0; i<len; i++)
    {
        rev[len-1-i] = s[i];
    }
    rev[i] = '\0';
    i=0;
    while(s[i]!='\0')
    {
        if(s[i]!=rev[i])
        {
            flag = 1;
            break;
        }
        i++;
    }
    if (flag == 0)
        printf("Palindrome");
    else
        printf("Not Palindrome");

}
/**************************************************************
INPUT   :   DataStructure
OUTPUT  :   Not Palindrome

ALGORITHM   STRINGLENGTH(A[],i,len)
BEGIN:
        FOR i TO len
          rev[len-1-i] = s[i];
        IF rev=s THEN
            Palindrome
        ELSE
            Not Palindrome
END

**************************************************************/


/**************************************************************
41.Program for finding word count in a paragraph.
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
    char s[]={"Data Structure"};
    printf("Input String:\t%s\n",s);
    len = StringLength(s);
    s[len] = ' ';
    s[++len] = '\0';
    while(s[i]!='\0')
    {
        if(s[i] == ' ')
            count++;
        i++;
    }
    printf("Number of words : %d", count);

}
/**************************************************************
INPUT   :   Data Structure
OUTPUT  :   2

ALGORITHM   STRINGLENGTH(A[],i,len)
BEGIN:
        s[len] = ' ';
        s[++len] = '\0';
        WHILE  s[i]!='\0' THEN
            IF(s[i] == ' ')
                count++;
            i++;
END;

**************************************************************/



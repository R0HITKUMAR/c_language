/**************************************************************
38.Program for finding length of String.
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
    int len;
    char s[]={"DataStructure"};
    printf("Input String :%s\n",s);
    len = StringLength(s);
    printf("Length : %d", len);

}
/**************************************************************
INPUT   :   DataStructure
OUTPUT  :   13

ALGORITHM   STRINGLENGTH(A[],i,len)
BEGIN:
        len=0;
        a=DataStructure
        FOR i to \0 THEN
            len++
        RETURN len
END

**************************************************************/

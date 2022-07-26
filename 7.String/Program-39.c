/**************************************************************
39.Program for reversing the given String.
Author : Rohit Kumar
Ad.No. : 2019B101051
**************************************************************/
# include<stdio.h>
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
    int i, len;
    char s[]={"DataStructure"};
    printf("Input String:\t%s",s);
    len = StringLength(s);
    for (i=0; i<len; i++)
    {
        rev[len-1-i] = s[i];
    }
    rev[i] = '\0';
    printf("\nReversed String : %s",rev);

}
/**************************************************************
INPUT   :   DataStructure
OUTPUT  :   erutcurtSataD

ALGORITHM   STRINGLENGTH(A[],i,len)
BEGIN:
        FOR i TO len
          rev[len-1-i] = s[i];
END

**************************************************************/

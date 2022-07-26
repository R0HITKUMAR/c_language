#include <stdio.h>
#include <math.h>
#include <string.h>
#include<stdlib.h>
int main ()
{
    int n,i,j,count;
    char str[100];
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        scanf("%s",&str[i]);
    }
    for (i=0;i<n;i++)
    {
        count=0;
        for (j=0;str[j]!='\0';j++)
        {
            if (str[j]==str[j+1])
                count++;
        }
        printf("%d\n",count);
    }
}

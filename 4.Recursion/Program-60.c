/**************************************************************
60.Program for Towers of Hanoi for n disk (user defined)
Author : Rohit Kumar
Ad.No. : 2019B101051
**************************************************************/
#include <stdio.h>
#include<math.h>
void ToH(int n, char from, char to, char aux)
{
    if (n == 1)
    {
        printf("\n Move disk 1 from rod %c to rod %c", from, to);
        return;
    }
    ToH(n-1, from, aux, to);
    printf("\n Move disk %d from rod %c to rod %c", n, from, to);
    ToH(n-1, aux, to, from);
}
main()
{
    int n;
    float steps;
    printf("Enter No of Disk\t:\t");
    scanf("%d",&n);
    steps=pow(2,n)-1;
    printf("Total No of Steps   :   %0.0f\n",steps);
    ToH(n,'S','D','M');
    return 0;
}
/**************************************************************
INPUT   :   CUSTOM INPUT

OUTPUT  :   CUSTOM OUTPUT

NO OF STEPS : pow(2,n)-1

ALGORITHM
BEGIN:
    IF n == 1 THEN
        Move disk 1 from S to D
        RETURN
    ToH(n-1, from, aux, to)
    Move disk 1 from S to D
    ToH(n-1, aux, to, from)
END;

**************************************************************/



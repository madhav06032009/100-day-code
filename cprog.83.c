/*
Q133: Create an enum for months and print how many days each month has.


Sample Test Cases:
Input 1:
FEB
Output 1:
28 or 29 days

*/
#include<stdio.h>
#include<string.h>
int main()
{
    enum month{JAN,FEB,MAR,APR,MAY,JUN,JUL,AUG,SEP,OCT,NOV,DEC};
    char str[10];
    enum month m;
    scanf("%s",str);
    if(strcmp(str,"JAN")==0) m=JAN;
    else if(strcmp(str,"FEB")==0) m=FEB;
    else if(strcmp(str,"MAR")==0) m=MAR;
    else if(strcmp(str,"APR")==0) m=APR;
    else if(strcmp(str,"MAY")==0) m=MAY;
    else if(strcmp(str,"JUN")==0) m=JUN;
    else if(strcmp(str,"JUL")==0) m=JUL;
    else if(strcmp(str,"AUG")==0) m=AUG;
    else if(strcmp(str,"SEP")==0) m=SEP;
    else if(strcmp(str,"OCT")==0) m=OCT;
    else if(strcmp(str,"NOV")==0) m=NOV;
    else m=DEC;

    if(m==FEB)
        printf("28 or 29 days");
    else if(m==APR||m==JUN||m==SEP||m==NOV)
        printf("30 days");
    else
        printf("31 days");
    return 0;
}
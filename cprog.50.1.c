/*
Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.

/*
Sample Test Cases:
Input 1:
15/04/2025
Output 1:
15-Apr-2025

*/
#include<stdio.h>
int main()
{
    int d,m,y;
    scanf("%d/%d/%d",&d,&m,&y);
    char month[12][4]={"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};
    printf("%02d-%s-%d",d,month[m-1],y);
    return 0;
}
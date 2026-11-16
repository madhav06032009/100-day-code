/*
Q132: Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.


Sample Test Cases:
Input 1:
GREEN
Output 1:
Go

*/
#include<stdio.h>
#include<string.h>
int main()
{
    enum light{RED,YELLOW,GREEN};
    char str[20];
    enum light signal;
    scanf("%s",str);
    if(strcmp(str,"RED")==0)
        signal=RED;
    else if(strcmp(str,"YELLOW")==0)
        signal=YELLOW;
    else
        signal=GREEN;
    if(signal==RED)
        printf("Stop");
    else if(signal==YELLOW)
        printf("Wait");
    else
        printf("Go");
    return 0;
}
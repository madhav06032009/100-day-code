/*
Q85: Reverse a string.

/*
Sample Test Cases:
Input 1:
abcd
Output 1:
dcba

*/
#include<stdio.h>
int main()
{
    char str[100];
    int n=0;
    fgets(str,100,stdin);
    while(str[n]!='\0' && str[n]!='\n')
    {
        n++;
    }
    for(int i=n-1;i>=0;i--)
    {
        printf("%c",str[i]);
    }
    return 0;
}
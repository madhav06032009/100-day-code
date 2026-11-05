/*
Q87: Count spaces, digits, and special characters in a string.

Sample Test Cases:
Input 1:
a b1&2
Output 1:
Spaces=1, Digits=2, Special=1

*/
#include<stdio.h>
int main()
{
    char str[100];
    int space=0,digit=0,special=0;
    fgets(str,100,stdin);
    for(int i=0;str[i]!='\0' && str[i]!='\n';i++)
    {
        if(str[i]==' ')
            space++;
        else if(str[i]>='0' && str[i]<='9')
            digit++;
        else if(!((str[i]>='a' && str[i]<='z')||(str[i]>='A' && str[i]<='Z')))
            special++;
    }
    printf("Spaces=%d, Digits=%d, Special=%d",space,digit,special);
    return 0;
}
/*
Q86: Check if a string is a palindrome.


Sample Test Cases:
Input 1:
madam
Output 1:
Palindrome

Input 2:
hello
Output 2:
Not palindrome

*/
#include<stdio.h>
int main()
{
    char str[100];
    int n=0,flag=0;
    fgets(str,100,stdin);
    while(str[n]!='\0' && str[n]!='\n')
    {
        n++;
    }
    for(int i=0;i<n/2;i++)
    {
        if(str[i]!=str[n-i-1])
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
        printf("Palindrome");
    else
        printf("Not palindrome");
    return 0;
}
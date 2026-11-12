/*
Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.


Sample Test Cases:
Input 1:
s = "abcabcbb"
Output 1:
3

Input 2:
s = "bbbbb"
Output 2:
1

Input 3:
s = "pwwkew"
Output 3:
3

*/
#include<stdio.h>
int main()
{
    char s[100],t[100];
    int count[26]={0};
    scanf("%s",s);
    scanf("%s",t);
    for(int i=0;s[i]!='\0';i++)
    {
        count[s[i]-'a']++;
    }
    for(int i=0;t[i]!='\0';i++)
    {
        count[t[i]-'a']--;
    }
    for(int i=0;i<26;i++)
    {
        if(count[i]!=0)
        {
            printf("Not Anagram");
            return 0;
        }
    }
    printf("Anagram");
    return 0;
}
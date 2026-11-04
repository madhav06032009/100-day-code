/*
Q83: Count vowels and consonants in a string.

/*
Sample Test Cases:
Input 1:
hello
Output 1:
Vowels=2, Consonants=3

*/
#include<stdio.h>
int main()
{
    char str[100];
    int v=0,c=0;
    fgets(str,100,stdin);
    for(int i=0;str[i]!='\0' && str[i]!='\n';i++)
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
            v++;
        else
            c++;
    }
    printf("Vowels=%d, Consonants=%d",v,c);
    return 0;
}
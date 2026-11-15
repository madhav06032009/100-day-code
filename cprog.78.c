/*
Q128: Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters.


Sample Test Cases:
Input 1:
File: text.txt (Content: Welcome to C language)
Output 1:
Vowels: 8
Consonants: 10
*/
#include<stdio.h>
int main()
{
    FILE *fp;
    char ch;
    int v=0,c=0;
    fp=fopen("text.txt","r");
    if(fp==NULL)
    {
        printf("File not found");
        return 0;
    }
    while((ch=fgetc(fp))!=EOF)
    {
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
            v++;
        else if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
            c++;
    }
    printf("Vowels: %d\n",v);
    printf("Consonants: %d",c);
    fclose(fp);
    return 0;
}

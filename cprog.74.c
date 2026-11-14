/*
Q124: Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().


Sample Test Cases:
Input 1:
Source File: source.txt (Content: Learning C File Handling)
Output 1:
File copied successfully to destination.txt

*/
#include<stdio.h>
int main()
{
    FILE *source,*destination;
    char s[50],d[50],ch;
    scanf("%s",s);
    scanf("%s",d);
    source=fopen(s,"r");
    destination=fopen(d,"w");
    if(source==NULL)
    {
        printf("Source file not found");
        return 0;
    }
    while((ch=fgetc(source))!=EOF)
    {
        fputc(ch,destination);
    }
    fclose(source);
    fclose(destination);
    printf("File copied successfully to %s",d);
    return 0;
}
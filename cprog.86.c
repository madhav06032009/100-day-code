/*
Q136: Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.


Sample Test Cases:
Input 1:
ADD 10 20
Output 1:
30

*/
#include<stdio.h>
#include<string.h>
int main()
{
    enum choice{ADD,SUBTRACT,MULTIPLY};
    char str[20];
    int a,b;
    enum choice ch;
    scanf("%s%d%d",str,&a,&b);
    if(strcmp(str,"ADD")==0)
        ch=ADD;
    else if(strcmp(str,"SUBTRACT")==0)
        ch=SUBTRACT;
    else
        ch=MULTIPLY;

    switch(ch)
    {
        case ADD:
            printf("%d",a+b);
            break;
        case SUBTRACT:
            printf("%d",a-b);
            break;
        case MULTIPLY:
            printf("%d",a*b);
            break;
    }
    return 0;
}
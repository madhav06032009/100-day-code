/*
Q134: Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.


Sample Test Cases:
Input 1:
FAILURE
Output 1:
Operation failed

*/
#include<stdio.h>
#include<string.h>
int main()
{
    enum status{SUCCESS,FAILURE,TIMEOUT};
    char str[20];
    enum status s;
    scanf("%s",str);
    if(strcmp(str,"SUCCESS")==0)
        s=SUCCESS;
    else if(strcmp(str,"FAILURE")==0)
        s=FAILURE;
    else
        s=TIMEOUT;

    if(s==SUCCESS)
        printf("Operation successful");
    else if(s==FAILURE)
        printf("Operation failed");
    else
        printf("Operation timed out");
    return 0;
}
/*
Q137: Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.


Sample Test Cases:
Input 1:
GUEST
Output 1:
Welcome Guest!

*/
#include<stdio.h>
#include<string.h>
int main()
{
    enum role{ADMIN,USER,GUEST};
    char str[20];
    enum role r;
    scanf("%s",str);
    if(strcmp(str,"ADMIN")==0)
        r=ADMIN;
    else if(strcmp(str,"USER")==0)
        r=USER;
    else
        r=GUEST;

    if(r==ADMIN)
        printf("Welcome Admin!");
    else if(r==USER)
        printf("Welcome User!");
    else
        printf("Welcome Guest!");
    return 0;
}
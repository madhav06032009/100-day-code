/*
Q140: Define a struct with enum Gender and print person's gender.


Sample Test Cases:
Input 1:
Gender=MALE
Output 1:
Male

*/
#include<stdio.h>
#include<string.h>
int main()
{
    enum Gender{MALE,FEMALE};
    struct Person
    {
        enum Gender gender;
    };
    struct Person p;
    char str[10];
    scanf("%s",str);
    if(strcmp(str,"MALE")==0)
        p.gender=MALE;
    else
        p.gender=FEMALE;

    if(p.gender==MALE)
        printf("Male");
    else
        printf("Female");
    return 0;
}
/*
Q7: Write a program to swap two numbers without using a third variable.

Sample Test Cases:
Input 1:
10 20
Output 1:
After swap: 20 10

Input 2:
7 14
Output 2:
After swap: 14 7
*/

#include <stdio.h>
int main()
{
	int a,b;
	printf("enter the value of a,b:");
	scanf("%d %d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("After swap= %d %d",a,b);
	return 0;
}

/*
C:\C program>gcc cprog.4.1.c -o cprog.4.1.out

C:\C program>cprog.4.1.out
enter the value of a,b:10 20
After swap= 20 10
C:\C program>cprog.4.1.out
enter the value of a,b:7 14
After swap= 14 7
*/
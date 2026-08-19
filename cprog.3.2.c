/*
Q6: Write a program to swap two numbers using a third variable.

Sample Test Cases:
Input 1:
3 5
Output 1:
After swap: 5 3

Input 2:
-1 1
Output 2:
After swap: 1 -1
*/

#include <stdio.h>
int main()
{
	int a,b,c;
	printf("enter the 2 numbers:");
	scanf("%d %d",&a,&b);
	c=a;
	a=b;
	b=c;
	printf("After swap: %d %d",a,b);
	return 0;
}	

/*
C:\C program>gcc cprog.3.2.c -o cprog.3.2.out

C:\C program>cprog.3.2.out
enter the 2 numbers:3 5
After swap: 5 3
C:\C program>cprog.3.2.out
enter the 2 numbers:-1 1
After swap: 1 -1
*/
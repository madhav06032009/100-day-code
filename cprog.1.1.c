/* Q1: Write a program to input two numbers and display their sum.

Sample Test Cases:
Input 1:
3 4
Output 1:
Sum = 7

Input 2:
-1 20
Output 2:
Sum = 19
*/


#include <stdio.h>
int main()
{
	int a,b,sum;
	printf("enter ther value of 2 numbers:");
	scanf("%d %d",&a,&b);
	sum=a+b;
	printf("sum = %d",sum);
	return 0;
}


/*
C:\TDM-GCC-64>cd..

C:\>cd c program

C:\C program>gcc cprog.1.1.c -o cprog.1.1.out

C:\C program>cprog.1.1.out
enter ther value of 2 numbers:3 4
sum = 7
C:\C program>cprog.1.1.out
enter ther value of 2 numbers:-1 20
sum = 19
*/
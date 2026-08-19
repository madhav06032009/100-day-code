/*
Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.


Sample Test Cases:
Input 1:
10 2
Output 1:
Sum=12, Diff=8, Product=20, Quotient=5

Input 2:
7 3
Output 2:
Sum=10, Diff=4, Product=21, Quotient=2
*/

#include <stdio.h>
int main()
{
	int a,b,Sum,Diff,Product,Quotient;
	printf("enter the 2 numbers:");
	scanf("%d %d",&a,&b);
	Sum=a+b;
	Diff=a-b;
	Product=a*b;
	Quotient=a/b;
	printf("Sum=%d, Diff=%d, Product=%d, Quotient=%d",Sum,Diff,Product,Quotient);
	return 0;
}	

/*
C:\TDM-GCC-64>cd..

C:\>cd c program

C:\C program>gcc cprog.1.2.c -o cprog.1.2.out

C:\C program>cprog.1.2.out
enter the 2 numbers:10 2
Sum=12, Diff=8, Product=20, Quotient=5

C:\C program>cprog.1.2.out
enter the 2 numbers:7 3
Sum=10, Diff=4, Product=21, Quotient=2
*/
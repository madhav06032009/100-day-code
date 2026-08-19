/*
Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.

Sample Test Cases:
Input 1:
1000 5 2
Output 1:
Simple Interest=100, Compound Interest=102.5

Input 2:
5000 7 3
Output 2:
Simple Interest=1050, Compound Interest=1125.76

*/

#include <stdio.h>
#include <math.h>
int main()
{
	float p,r,t;
	float Simple_Interest,Compound_Interest;
	printf("enter the value of p,r,t:");
	scanf("%f %f %f",&p,&r,&t);
	Simple_Interest=(p*r*t)/100;
	Compound_Interest=p*pow(1+r/100,t)-p;
	printf("Simple_Interest=%f ,Compound_Interest=%f ",Simple_Interest,Compound_Interest);
	return 0;
}	

/*
C:\C program>gcc cprog.5.1.c -o cprog.5.1.out

C:\C program>cprog.5.1.out
enter the value of p,r,t:1000 5 2
Simple_Interest=100.000000 ,Compound_Interest=102.499901
C:\C program>cprog.5.1.out
enter the value of p,r,t:5000 7 3
Simple_Interest=1050.000000 ,Compound_Interest=1125.215942
*/
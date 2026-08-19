/*
Q5: Write a program to convert temperature from Celsius to Fahrenheit.

Sample Test Cases:
Input 1:
0
Output 1:
Fahrenheit=32

Input 2:
100
Output 2:
Fahrenheit=212
*/

#include <stdio.h>
int main()
{
	int temp,Fahrenheit;
	printf("enter the temperature in Celsius:");
	scanf("%d",&temp);
	Fahrenheit=(temp*1.8)+32;
	printf("Fahrenheit=%d",Fahrenheit);
	return 0;
}

/*
C:\C program>gcc cprog.3.1.c -o cprog.3.1.out

C:\C program>cprog.3.1.out
enter the temperature in Celsius:0
Fahrenheit=32
C:\C program>cprog.3.1.out
enter the temperature in Celsius:100
Fahrenheit=212
*/
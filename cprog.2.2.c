/*
Q4: Write a program to calculate the area and circumference of a circle given its radius.
Sample Test Cases:
Input 1:
7
Output 1:
Area=153.94, Circumference=43.96

Input 2:
3
Output 2:
Area=28.27, Circumference=18.85
*/

#include <stdio.h>
int main()
{
	float  r,Area,Circumference;
	printf("enter the radius:");
	scanf("%f",&r);
	Area=3.14*r*r;
	Circumference=2*3.14*r;
	printf("Area=%f ,Circumference=%f",Area,Circumference);
	return 0;
}

	
/*
C:\C program>gcc cprog.2.2.c -o cprog.2.2.out

C:\C program>cprog.2.2.out
enter the radius:7
Area=153.860001 ,Circumference=43.959999
C:\C program>cprog.2.2.out
enter the radius:3
Area=28.260000 ,Circumference=18.840000
*/
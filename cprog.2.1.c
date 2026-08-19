/* Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

Sample Test Cases:
Input 1:
5 10
Output 1:
Area=50, Perimeter=30

Input 2:
3 7
Output 2:
Area=21, Perimeter=20
*/

#include <stdio.h>
int main()
{
	int a,b,Area,Perimeter;
	printf("enter the 2 numbers:");
	scanf("%d %d",&a,&b);
	Area=a*b;
	Perimeter=2*(a+b);
	printf("Area=%d ,Perimeter=%d",Area,Perimeter);
	return 0;
}	


/*
C:\C program>gcc cprog.2.1.c -o cprog.2.1.out

C:\C program>cprog.2.1.out
enter the 2 numbers: 5 10
Area=50 ,Perimeter=30
C:\C program>cprog.2.1.out
enter the 2 numbers:3 7
Area=21 ,Perimeter=20
*/
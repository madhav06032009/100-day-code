//Q27: Write a program to print the sum of the first n odd numbers.

/*
Sample Test Cases:
Input 1:
3
Output 1:
9

Input 2:
5
Output 2:
25

*/

#include<stdio.h>
int main() 
{
	int b,a,n;
	a=0;
	b=0;
	printf("enter a number: ");
	scanf("%d",&n);
	while (a<=(2*n)) {
		if ( a%2 !=0) {
			b=b+a;
		}
		a++;
		
		
	}
	printf("the value of the summation is %d",b);
	return 0;
}
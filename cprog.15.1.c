//Q29: Write a program to calculate the factorial of a number.

/*
Sample Test Cases:
Input 1:
5
Output 1:
120

Input 2:
3
Output 2:
6

*/

#include<stdio.h>
int main() {
	int b,a,n;
	a=1;
	b=1;
	printf("enter a number: ");
	scanf("%d",&n);
	while (a<=n) {
		b=b*a;
		a++;
		}
	printf("the value of the product is %d",b);
	return 0;
}
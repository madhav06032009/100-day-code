//Q28: Write a program to print the product of even numbers from 1 to n.

/*
Sample Test Cases:
Input 1:
4
Output 1:
8 (2 * 4)

Input 2:
6
Output 2:
48 (2 * 4 * 6)

*/
#include<stdio.h>
int main() {
	int b,a,n;
	a=1;
	b=1;
	printf("enter a number: ");
	scanf("%d",&n);
	while (a<=n) {
		if ( a%2==0) {
			b=b*a;
		}
		a++;
		
		
	}
	printf("the value of the product is %d",b);
	return 0;
}
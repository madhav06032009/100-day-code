//Q30: Write a program to reverse a given number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4321

Input 2:
100
Output 2:
1

*/

#include<stdio.h>
int main() {
	int a=0,n,r;
	printf("enter the number: ");
	scanf("%d",&n);
	while (n!=0) {
		r=n%10;
		a=a*10+r;
		n=n/10;
	}
	printf("the reversed number is: %d",a);
	return 0;
}
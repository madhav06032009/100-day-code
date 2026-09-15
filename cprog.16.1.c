//Q31: Write a program to take a number as input and print its equivalent binary representation.

/*
Sample Test Cases:
Input 1:
10
Output 1:
1010

Input 2:
7
Output 2:
111

*/

#include<stdio.h>
int main() {
	int a,b=0,c=1;
	printf("enter a number: ");
	scanf("%d",&a);
	while (a>=1) {
		b=b+(a%2)*c;
		a=a/2;
		c=c*10;
	}
	printf("the binary is form %d",b);
	return 0;
}
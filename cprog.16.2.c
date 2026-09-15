//Q32: Write a program to check if a number is a palindrome.

/*
Sample Test Cases:
Input 1:
121
Output 1:
Palindrome

Input 2:
123
Output 2:
Not palindrome

*/

#include<stdio.h>
int main() {
	int x,a,rev=0,rem;
	printf("enter a number: ");
	scanf("%d",&x);
	a=x;
	while (a>0) {
		rem=a%10;
		rev=rev+rem*10;
		a=a/10;
	}
	if (a==x) {
	printf("pallindrome");
	}
	else {
	printf("not a pallindrome");
	}

	return 0;
}
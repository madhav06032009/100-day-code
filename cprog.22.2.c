//Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

/*
Sample Test Cases:
Input 1:
3
Output 1:
Approximate sum: 3.3

Input 2:
5
Output 2:
Approximate sum: 4.4

*/
#include <stdio.h>

int main() {
	int n;
	float a=3,b=4;
	float sum=0;
    printf("enter the number till u want the summation: ");
	scanf("%d",&n);
	while (a<=n*2) {
		sum=sum+(a/b);
		a=a+2;
		b=2*n;
	}
	printf("approximate sum %.2f",1+sum);
	return 0;
}
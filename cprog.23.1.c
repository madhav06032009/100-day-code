//Q45: Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.

/*
Sample Test Cases:
Input 1:
3
Output 1:
Approximate sum: 1.56

Input 2:
5
Output 2:
Approximate sum: 2.22

*/
#include <stdio.h>

int main() {
	int n;
	float a=2,b=3;
	float sum=0;
    printf("enter the number till u want the summation: ");
	scanf("%d",&n);
	while (a<=n*2) {
		sum=sum+(a/b);
		a=a+2;
		b=b+4;
	}
	printf("approximate sum %.2f",sum);
	return 0;
}
//Q43: Write a program to check if a number is a strong number.

/*
Sample Test Cases:
Input 1:
145
Output 1:
Strong number

Input 2:
123
Output 2:
Not strong number

*/
#include <stdio.h>

int main() {
    int a,sum=0,r,prod,c,b;
    printf("Enter a number: ");
    scanf("%d", &a);
	r=a;
    while(a>0) {
		b=a%10;
		prod=1;
		for (c=1;c<=b;c++) {
			prod=prod*c;
		}
		sum=sum+prod;
		a=a/10;
	}
	if (sum==r) {
		printf("strong number");
	}
	else {
		printf("not strong number");
	}
	return 0;
}	
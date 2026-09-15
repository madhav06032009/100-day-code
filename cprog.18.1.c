//Q35: Write a program to print all factors of a given number.

/*
Sample Test Cases:
Input 1:
6
Output 1:
1 2 3 6

Input 2:
10
Output 2:
1 2 5 10

*/
#include<stdio.h>
int main() {
	int a,x=1;
	printf("enter a number: ");
	scanf("%d",&a);
	
	while (x<=a) {
		if (a%x==0) {
			printf("%d \t",x);
		}
		x++;
	}
	return 0;
}
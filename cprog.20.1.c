//Q39: Write a program to find the product of odd digits of a number.

/*
Sample Test Cases:
Input 1:
12345
Output 1:
15 (1*3*5)

Input 2:
2468
Output 2:
1 (no odd digits, assume 1)

*/
#include <stdio.h>

int main() {
    int a, prod=1,i;
    printf("Enter a number: ");
    scanf("%d", &a);
	
	while(a>0) {
		i=a%10;
		if (i%2!=0) {
		prod=prod*i;
		}
		a=a/10;
	}
	if (prod!=1) {
	printf("the product of odd digits is %d",prod);
	}
	else {
		printf("there are no odd digits so assume %d",prod);
	}
    return 0;
}
//Q42: Write a program to check if a number is a perfect number.

/*
Sample Test Cases:
Input 1:
6
Output 1:
Perfect number

Input 2:
10
Output 2:
Not perfect number

*/
#include <stdio.h>

int main() {
    int a,sum=0,x=1,r;
    printf("Enter a number: ");
    scanf("%d", &a);
	r=a;
    while(x>a) {
        if (a%x==0) {
            sum=sum+x;
        }
        x++;
		a/x;
    } 
    if (sum==r) {
        printf("%d is a perfect number", r);
    } 
	else {
        printf("%d is not a perfect number", r);
    }


    return 0;
}

		
		
	
		
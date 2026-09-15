//Q33: Write a program to check if a number is an Armstrong number.

/*
Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

*/

#include<stdio.h>
#include<math.h>
int main() {
	int s,x,a,n=0,sum=0,b;
	printf("enter a number: ");
	scanf("%d",&x);
	s=x;
	a=x;
	if (x==0) {
		n=1;
	}
	else {
		while (x!=0) {
			x=x/10;
		n++;
		}
	}
	while (a>0) {
		b=a%10;
		sum=sum+pow(b,n);
		//printf("the arm strong proceeding is %d\n",sum);
		a=a/10;
		
	}
	if (sum==s) {
	printf("armstrong number");
	}
	else {
	printf("not a armstrong");
	}

	return 0;
}
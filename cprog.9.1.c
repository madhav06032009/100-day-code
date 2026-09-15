//Q17: Write a program to find the roots of a quadratic equation and categorize them.

/*
Sample Test Cases:
Input 1:
1 -3 2
Output 1:
Roots are real and different: 2, 1

Input 2:
1 -2 1
Output 2:
Roots are real and same: 1

Input 3:
1 2 5
Output 3:
Roots are complex

*/
#include <stdio.h>
#include <math.h>
int main()
{
	int a,b,c;
	float l,j;
	printf("enter the coeffiecent of x^2 (a): ");
	scanf("%d",&a);
	printf("enter the coeffiecent of x (b): ");
	scanf("%d",&b);
	printf("enter the constant value (c): ");
	scanf("%d",&c);
	l= (-b+(pow((pow(b,2) -4*a*c),1/2)))/2*a;
	j= (-b-(pow((pow(b,2) -4*a*c),1/2)))/2*a;
	if ( pow(b,2) -4*a*c >0) {
		printf("the roots are real : %f,%f" ,l,j);
	}
	else if ( pow(b,2)	-4*a*c==0) {
		printf("the roots are real and equal: %f,%f" ,l,j);
	}
	else {
		printf("the roots are complex");
	}
	return 0;
}
	
	
	
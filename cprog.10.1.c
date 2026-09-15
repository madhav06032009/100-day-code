//Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

/*
Sample Test Cases:
Input 1:
3 3 3
Output 1:
Equilateral

Input 2:
3 3 4
Output 2:
Isosceles

Input 3:
2 3 4
Output 3:
Scalene

*/
#include <stdio.h>
int main()
{
	float a,b,c;
	printf("enter length of side 1");
	scanf("%f",&a);
	printf("enter length of side 2");
	scanf("%f",&b);
	printf("enter length of side 3");
	scanf("%f",&c);
	if (a==b==c) {
		printf("the triangle is equilateral");
	}
	else if (a==b || b==c || a==c) {
		printf("the triangle is isoceles");
	}
	else {
		printf("the triangle is scalene");
	}
    return 0;
}
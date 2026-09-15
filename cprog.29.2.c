//Q58: Find the maximum and minimum element in an array.

/*
Sample Test Cases:
Input 1:
5
2 9 1 4 7
Output 1:
Max=9, Min=1

Input 2:
3
10 10 10
Output 2:
Max=10, Min=10

*/
#include<stdio.h>
int main() {
	int x;
	printf("enter the number: "); 
	scanf("%d",&x);
	int a[x],i,max,min;
	for (i=0;i<x;i++) {
		printf("enter the %d number: ",i+1);
		scanf("%d",&a[i]);
	}
	max=a[0];
	min=a[0];
	for (i=0;i<x;i++) {
	if (a[i]>max) {
		max=a[i];
	}
	if (a[i]<min) {
		min=a[i];
	}
	}
	printf("min=%d,max=%d",min,max);
	return 0;
}
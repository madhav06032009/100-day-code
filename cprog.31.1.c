//Q61: Search for an element in an array using linear search.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
3
Output 1:
Found at index 2

Input 2:
4
10 20 30 40
25
Output 2:
-1

*/
#include<stdio.h>
int main() {
	int x,n;
	scanf("%d",&x);
	int i,a[x];
	for (i=0;i<x;i++) {
	printf("enter element %d: ",i+1);
	scanf("%d",&a[i]);
	}
	printf("enter the number: ");
	scanf("%d",&n);
	for (i=0;i<x;i++) {
		if (n==a[i]) {
			printf("found at index %d", i);
		}
	}
	return 0;
}
	
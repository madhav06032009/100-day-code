//Q67: Insert an element in an array at a given position.

/*
Sample Test Cases:
Input 1:
4
10 20 30 40
2 15
Output 1:
10 20 15 30 40

*/
#include <stdio.h>

int main() {
    int w,x,j;
	scanf("%d",&x);
	int a[x];
	for (int i=0;i<x;i++) {
		printf("enter element %d: ",i+1);
		scanf("%d",&a[i]);
	}
	printf("enter the index : ");
	scanf("%d",&w);
	printf("enter the number  : ");
	scanf("%d",&j);
	a[w]=j;
	for (int i=0;i<x;i++) {
		printf("%d ",a[i]);
	}
	return 0;
	
}
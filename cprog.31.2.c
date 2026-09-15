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
#include <stdio.h>

int main() {
    int x,j,l=0,w;
	scanf("%d",&x);
	int a[x];
	for (int i=0;i<x;i++) {
		printf("enter element %d: ",i+1);
		scanf("%d",&a[i]);
	}
	int y=x;
	int b[y];
	for (j=y-1;j>=0;j--) {
		b[j]=a[l];
		l++;
	}
	for (w=0;w<y;w++) {
	printf("%d",b[w]);
	}
	return 0;
}
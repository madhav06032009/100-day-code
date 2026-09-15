//Q59: Count even and odd numbers in an array.

/*
Sample Test Cases:
Input 1:
6
1 2 3 4 5 6
Output 1:
Even=3, Odd=3

Input 2:
4
2 4 6 8
Output 2:
Even=4, Odd=0

*/
#include<stdio.h>
int main() {
	int x,j=0,n=0;
	scanf("%d",&x);
	int i,a[x];
	for (i=0;i<x;i++) {
	printf("enter element %d: ",i+1);
	scanf("%d",&a[i]);
	}
	for (i=0;i<x;i++) {
		if (a[i]%2==0) {
			n++;
		}
		if (a[i]%2!=0){
			j++;
		}
	}
	printf("even=%d odd=%d ",n,j);
	return 0;
}
	
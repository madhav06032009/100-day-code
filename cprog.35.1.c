//Q69: Find the second largest element in an array.

/*
Sample Test Cases:
Input 1:
5
10 20 30 40 50
Output 1:
40

*/
#include <stdio.h>

int main() {
    int w,x,j;
	scanf("%d",&x);
	int a[x],b[x];
	for (int i=0;i<x;i++) {
		printf("enter element %d: ",i+1);
		scanf("%d",&a[i]);
	}
	int max=a[0];
	for (int i=0;i<x;i++) {
		if (a[i]>max) {
			max=a[i];
		}
	}
	//printf("%d",max);
	for (int i=0;i<x;i++) {
		if (a[i]==max) {
			j=i;
		}
	}
	//printf("%d",j);
	for (int i=j;i<x-1;i++) {
		a[i]=a[i+1];
	}
	int maxx=a[0];
	for (int i=0;i<x;i++) {
		if (a[i]>maxx) {
			maxx=a[i];
		}
	}
	printf("%d",maxx);
	return 0;
	
}
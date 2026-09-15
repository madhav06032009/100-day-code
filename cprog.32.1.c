//Q63: Merge two arrays.

/*
Sample Test Cases:
Input 1:
3
1 2 3
2
4 5
Output 1:
1 2 3 4 5

*/
#include <stdio.h>

int main() {
    int r,g,h,i,j,x,y;
	scanf("%d",&x);
	int a[x];
	for (i=0;i<x;i++) {
		printf("enter element %d: ",i+1);
		scanf("%d",&a[i]);
	}
	scanf("%d",&y);
	int b[y];
	for (j=0;j<y;j++) {
		printf("enter element %d: ",j+1);
		scanf("%d",&b[j]);
	}
	r=x+y;
	int c[r];
	for (int g=0;g<x;g++) {
		c[g]=a[g];
	}
	int m=0;
	for (int h=0;h<y;h++) {
		c[x+h]=b[m];
	}
	
	for (int r=0;r<x+y;r++) {
	printf("%d",c[r]);
	}
	return 0;
}
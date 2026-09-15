//Q41: Write a program to swap the first and last digit of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/#include<stdio.h>
int main() {
	int a,n=1,i,x,b,f;
	printf("enter the number: ");
	scanf("%d",&x);
	a=x;
	while (a>10) {
		n=n*10;
		a=a/10;
	}
	printf("%d\n",a);
	i=x%10;
	b=(x%n)/10;
	f=(i*n)+b*10+a;
	printf("%d" ,f);
	return 0;
}
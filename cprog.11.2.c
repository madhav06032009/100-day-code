//Q22: Write a program to find profit or loss percentage given cost price and selling price.

/*
Sample Test Cases:
Input 1:
1000 1200
Output 1:
Profit 20%

Input 2:
1000 800
Output 2:
Loss 20%

Input 3:
1000 1000
Output 3:
No Profit No Loss

*/
#include <stdio.h>
int main()
{
	int a,b;
	printf("enter the cost price: ");
	scanf("%d" ,&a);
	printf("enter the selling price: ");
	scanf("%d" ,&b);
	if (a>b) {
		printf(" loss: %d" , (((a-b)*100)/a));
	}
	else if (a==b) {
		printf("no profit no loss");
	}
	else {
		printf(" profit: %d" , (((b-a)*100)/a));
	}
    
    return 0;
}
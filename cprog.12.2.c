/*Q24: Write a program to calculate electricity bill based on units consumed with these rates: 
First 100 units at ₹5/unit 
Next 100 units at ₹7/unit 
Next 100 units at ₹10/unit 
Above at ₹12/unit

/*
Sample Test Cases:
Input 1:
50
Output 1:
Bill: ₹250

Input 2:
150
Output 2:
Bill: ₹850

Input 3:
250
Output 3:
Bill: ₹1700

*/

#include <stdio.h>
int main()
{
	int a;
	printf("enter the number of days u are late: ");
	scanf("%d",&a);
	if (a<100 && a>0) {
		printf("your bill is %d ", a*5);
	}
	else if (a>=100 && a<200) {
		printf("your bill is %d", 500+((a-100)*7));
	}
	else if (a>=200 && a<300) {
		printf("your bill is %d", 1200+((a-200)*10));
	}
	else {
		printf("your bill is %d", 2200+((a-300)*12));
	}
    return 0;
}
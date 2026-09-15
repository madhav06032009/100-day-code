///Q21: Write a program to display the month name and number of days using switch-case for a given month number.

/*
Sample Test Cases:
Input 1:
2
Output 1:
February, 28 days

Input 2:ṣ
12
Output 2:
December, 31 days

*/
#include <stdio.h>
int main()
{
	int a,b;
	char op;
	printf("enter a number: \n");
	scanf("%d" ,&a);
	printf("enter another number: \n");
	scanf("%d" ,&b);
	printf("enter the operation you want to do: \n");
	scanf(" %c", &op);
	
    switch(op) {	
	case '+': printf("the sum is %d" ,a+b); 
	break;
	case '-': printf("the difference is %d",a-b); 
	break;
	case '*': printf("the product is %d",a*b); 
	break;
	case '/': 
	if (b==0) {
		printf("not possible");
	}
	else {
		printf("the division is %f",a/b);
	}
		
	break;
	case '%' :
	if (b==0) {
		printf("this is not possible");
	}
	else {
		printf("the remainder is %d",a%b);
	}
	default: printf("enter a valid operator");
	}
    return 0;
}
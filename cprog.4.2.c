/*Q8: Write a program to find and display the sum of the first n natural numbers.
Sample Test Cases:
Input 1:
5
Output 1:
Sum=15

Input 2:
10
Output 2:
Sum=55

*/

#include <stdio.h>
int main()
{
    int i = 1, n, Sum = 0;
	printf("Enter the number up to which sum is needed: ");
    scanf("%d", &n);
	while (i <= n)
    {
        Sum = Sum + i;
        i = i + 1;
    }
	printf("Sum = %d", Sum);
	return 0;
}

/*
C:\C program>gcc cprog.4.2.c -o cprog.4.2.out

C:\C program>cprog.4.2.out
Enter the number up to which sum is needed: 5
Sum = 15
C:\C program>cprog.4.2.out
Enter the number up to which sum is needed: 10
Sum = 55
*/
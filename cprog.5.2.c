/*
Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.

Sample Test Cases:
Input 1:
3661
Output 1:
1:1:1

Input 2:
7322
Output 2:
2:2:2
*/

#include <stdio.h>
int main()
{
    int seconds, hours, minutes, secs;\
	printf("enter the time in second:");
	scanf("%d", &seconds);
	hours = seconds / 3600;
    minutes = (seconds % 3600) / 60;
    secs = seconds % 60;
	printf("%d:%d:%d", hours, minutes, secs);
	return 0;
}


/*
C:\C program>gcc cprog.5.2.c -o cprog.5.2.out

C:\C program>cprog.5.2.out
enter the time in second:3661
1:1:1
C:\C program>cprog.5.2.out
enter the time in second:7322
2:2:2
*/
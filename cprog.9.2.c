/*
Q18: Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria: 
90-100: Grade A 
80-89: Grade B 
70-79: Grade C 
60-69: Grade D 
below 60: Grade F.

Sample Test Cases:
Input 1:
95
Output 1:
Grade A

Input 2:
82
Output 2:
Grade B

Input 3:
68
Output 3:
Grade D

Input 4:
50
Output 4:
Grade F

*/


#include <stdio.h>
int main()
{
	int mark;
	printf("enter the mark:");
	scanf("%d",&mark);
	if (mark>100 || mark<0)
	{ printf("invalid"); }
	else
	{
		switch(mark/10)
		{
		case 10:
		case 9:
			printf("Grade A");
			break;
		case 8:
			printf("Grade B");
			break;
		case 7:
			printf("Grade c");
			break;
		case 6:
			printf("Grade D");
			break;
		default:
			printf("grade F");
			break;
		}
	}
	return 0;
}


/*
C:\C program>gcc cprog.9.2.c -o d

C:\C program>d
enter the mark:95
Grade A
C:\C program>d
enter the mark:82
Grade B
C:\C program>d
enter the mark:68
Grade D
C:\C program>d
enter the mark:50
grade F
*/
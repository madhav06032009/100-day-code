/*  return 0;
Q143: Find and print the student with the highest marks.


Sample Test Cases:
Input 1:
3 students: Ravi 101 95, Sita 102 85, Aman 103 88
Output 1:
Topper: Ravi (Marks: 95)

*/
#include<stdio.h>
int main()
{
    struct Student
    {
        char name[50];
        int roll;
        int marks;
    };
    int n,top=0;
    scanf("%d",&n);
    struct Student s[n];

    for(int i=0;i<n;i++)
    {
        scanf("%s",s[i].name);
        scanf("%d",&s[i].roll);
        scanf("%d",&s[i].marks);
    }

    for(int i=1;i<n;i++)
    {
        if(s[i].marks>s[top].marks)
        {
            top=i;
        }
    }

    printf("Topper: %s (Marks: %d)",s[top].name,s[top].marks);
    return 0;
}
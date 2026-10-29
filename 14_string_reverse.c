#include <stdio.h>
#include <string.h>
int main() {
   char s[100], r[100]; int n, i, j;
   printf("Input a string: ");
   scanf("%s", s);
   n = strlen(s);
   for (i = n - 1, j = 0; i >= 0; i--, j++) r[j] = s[i];
   r[j] = '\0';
   printf("Reversed string: %s\n", r);
   return 0;
}

#include <stdio.h>
int main() {
      double x, y, temp;
      printf("Enter x and y: ");
      scanf("%lf %lf", &x, &y);
      temp = x; x = y; y = temp;
      printf("After swapping, x = %.2f, y = %.2f\n", x, y);
      return 0;
}

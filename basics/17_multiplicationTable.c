#include <stdio.h>
int main() {
  int n, i;
  int limit;
  printf("Enter an integer and the table limit : ");
  scanf("%d %d", &n ,&limit);
  for (i = 1; i <= limit; ++i) {
    printf("%d * %d = %d \n", n, i, n * i);
  }
  return 0;
}
#include <stdio.h>
#include <math.h>

int main() {
  int n;
  printf("Nhap n: ");
  scanf("%d", &n);

  int count = 0;
  for (int i = 1; i <= n; i++) {
    if (sqrt(i) == (int)sqrt(i)) {
      printf("%d ", i);
      count++;
    }
  }

  printf("\nSo luong so chinh phuong: %d", count);
  return 0;
}

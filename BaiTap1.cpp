#include <stdio.h>

void inBoiCua7() {
  for (int i = 10; i < 100; i++) {
    if (i % 7 == 0) {
      printf("%d ", i);
    }
  }
}

int main() {
  inBoiCua7();
  return 0;
}

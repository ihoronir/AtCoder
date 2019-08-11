#include <stdio.h>
#include <stdlib.h>

int h[101];
int nth(int skip, int i) {
  if (i < skip) return h[i];
  return h[i + 1];
}

// return 0 or 1
int is_arithmetic(int h[], int skip, int n) {\
  int d = nth(skip, 1) - nth(skip, 0);

  for (int i = 2; i < n; i ++) {
    if (nth(skip, i) - nth(skip, i - 1) != d) {
      return 0;
    }
  }
  return 1;
}

int main() {
  int n;
  scanf("%d", &n);

  // i (0 ~ n)
  for (int i = 0; i < n + 1; i ++) {
    scanf("%d", &h[i]);
  }

  // i (0 ~ n)
  for (int i = 0; i < n + 1; i ++) {
    if (is_arithmetic(h, i, n) == 1) {
      printf("%d\n", h[i]);
    }
  }
  return EXIT_SUCCESS;
}

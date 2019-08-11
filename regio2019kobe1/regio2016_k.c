#include <stdio.h>
#include <stdlib.h>

int main() {
  int n;
  scanf("%d", &n);

  int y_int;
  scanf("%d", &y_int);
  double y = (double)y_int;

  double brt[n][3];

  for (int i = 0; i < n; i ++) {
    int b;
    int r;
    int t;
    scanf("%d", &b);
    scanf("%d", &r);
    scanf("%d", &t);
    brt[i][0] = (double)b;
    brt[i][1] = (double)r;
    brt[i][2] = (double)t;
  }

  double results[n][2];

  for (int i = 0; i < n; i ++) {
    double result = 0;
    if (brt[i][2] == 1) {
      result = 1 + y * brt[i][1] / 100;
    } else if (brt[i][2] == 2) {
      double p = 1;
      double q = 1 + brt[i][1] / 100;
      for (int j = 0; j < y; j ++) {
        p *= q;
      }
      result = p;
    }
    results[i][0] = brt[i][0];
    results[i][1] = result;
  }

  int largest = 0;

  for (int i = 0; i < n; i ++) {
    if (results[i][1] > results[largest][1]) {
      largest = i;
    }
  }

  printf("%d", largest + 1);

  return EXIT_SUCCESS;
}

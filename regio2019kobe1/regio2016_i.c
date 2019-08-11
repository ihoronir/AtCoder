#include <stdio.h>
#include <stdlib.h>

int main() {
  int n;
  scanf("%d", &n);

  int a[n][2];

  for (int i = 0; i < n; i ++) {
    scanf("%d", &a[i][0]);
    scanf("%d", &a[i][1]);
  }

  int results[n];

  for (int i = 0; i < n; i ++) {
    int result = a[i][0] % a[i][1];

    result = result ==  0 ? a[i][1] : result;

    results[i] = result;
  }

  for (int i = 0; i < n; i ++) {
    printf("%d\n", results[i]);
  }
}

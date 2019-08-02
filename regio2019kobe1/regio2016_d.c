#include <stdio.h>
#include <stdlib.h>
 
int main() {
  int n;
 
  scanf("%d", &n);
 
  int a[n];
  int b[n];
 
  for (int i = 0; i < n; i ++) {
    scanf("%d", &a[i]);
    scanf("%d", &b[i]);
  }
 
  int aSum = 0;
  int bSum = 0;
 
  for (int i = 0; i < n; i ++) {
    if (a[i] > b[i]) {
      aSum += a[i];
    } else if (a[i] < b[i]) {
      bSum += b[i];
    }
  }
 
  int result;
 
  if (aSum == bSum) {
    result = aSum;
  } else {
    result = aSum > bSum ? aSum : bSum;
  }
 
  printf("%d\n", result);
 
  return EXIT_SUCCESS;
}

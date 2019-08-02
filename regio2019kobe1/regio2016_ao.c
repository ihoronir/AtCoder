#include <stdio.h>
#include <stdlib.h>
 
int main() {
  int n, largest, smallest;
 
  scanf("%d", &n); // n を代入
 
  int a[n];
    for(int i = 0; i < n; i ++) {
      scanf("%d", &a[i]);
    }

  largest = a[0];
  smallest = a[0];
 
  for(int i = 0; i < n; i ++) {
    largest = a[i] > largest ? a[i] : largest;
    smallest = a[i] < smallest ? a[i] : smallest;
  }
 
  printf("%d\n", largest);
  printf("%d\n", smallest);
}

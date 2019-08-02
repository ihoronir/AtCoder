#include <stdio.h>
#include <stdlib.h>
 
int main() {
 
  int sum10;
  scanf("%d", &sum10);
 
  int sum9 = 0;
  for (int i = 0; i < 9; i ++) {
    int value;
    scanf("%d", &value);
    sum9 += value;
  }
 
  printf("%d\n", sum10 - sum9);
 
  return EXIT_SUCCESS;
}

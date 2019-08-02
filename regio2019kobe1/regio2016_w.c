#include <stdio.h>
#include <stdlib.h>
 
int main() {
  int a[3][2];
 
  for(int i = 0; i < 3; i ++) {
    scanf("%d", &a[i][0]);
    scanf("%d", &a[i][1]);
  }
 
  int sum = 0;
 
  for(int i = 0; i < 3; i ++) {
    sum += a[i][0] * a[i][1];
  }
 
  printf("%d\n", sum);
 
  return EXIT_SUCCESS;
}

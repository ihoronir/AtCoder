#include <stdio.h>
#include <stdlib.h>
 
int main() {
  int n;
 
  scanf("%d", &n);
 
  int a[n][2];
  int b[n][2];
 
  for(int i = 0; i < n; i ++) {
    scanf("%d", &a[i][0]);
    scanf("%d", &a[i][1]);
 
    b[i][0] = i;
    b[i][1] = a[i][0] + a[i][1];
  }
 
  int result = 0;
 
  for(int i = 0; i < n; i ++) {
    result = (b[i][1] > b[result][1]) ? b[i][0] : result;
  }
 
  printf("%d\n", result + 1);
 
  return EXIT_SUCCESS;
}

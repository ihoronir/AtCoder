#include <stdio.h>
#include <stdlib.h>
 
int main() {
  int n;
 
  scanf("%d", &n);
 
  int days[n];
 
  for (int i = 0; i < n; i ++) {
    int start;
    int end;
    scanf("%d", &start);
    scanf("%d", &end);
    days[i] = end - start;
  }
 
  int timeSum = 0;
 
  for (int i = 0; i < n; i ++) {
    timeSum += days[i];
  }
 
  int needTime = 3 * (n + 1) - timeSum;
 
  int nowTime;
  scanf("%d", &nowTime);
 
  printf("%d\n", nowTime + needTime);
 
  return EXIT_SUCCESS;
}

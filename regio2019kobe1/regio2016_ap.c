#include <stdio.h>
#include <stdlib.h>
 
int main() {
  int n;
 
  scanf("%d", &n); // n を代入
 
  int a[n];
  for(int i = 0; i < n; i ++) {
    scanf("%d", &a[i]);
  }
 
  int sum = 0;
 
  for(int i = 0; i < n; i ++) {
    sum += a[i];
  }
 
  double ave = ((double)sum)/n;
 
  printf("%d %.1f\n",sum, ave);
}

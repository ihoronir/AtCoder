#include <stdio.h>
#include <stdlib.h>
 
int main() {
  int a;
  int b;
  int c;
  int d;
  scanf("%d", &a);
  scanf("%d", &b);
  scanf("%d", &c);
  scanf("%d", &d);

  int sum = a + b + c + d;

  int m = sum / 60;
  int s = sum % 60;
 
  printf("%d\n", m);
  printf("%d\n", s);
}

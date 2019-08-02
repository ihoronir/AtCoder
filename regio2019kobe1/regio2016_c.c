#include <stdio.h>
#include <stdlib.h>
 
int main() {
  int kijiValue;
 
  scanf("%d", &kijiValue);
 
  int topping[3];
 
  for (int i = 0; i < 3; i ++) {
    scanf("%d", &topping[i]);
  }
 
  int toppingValue[3];
 
  for (int i = 0; i < 3; i ++) {
    scanf("%d", &toppingValue[i]);
  }
 
  int toppingValueSum = 0;
 
  for (int i = 0; i < 3; i ++) {
    toppingValueSum += topping[i] * toppingValue[i];
  }
 
  printf("%d\n", kijiValue + toppingValueSum);
 
  return EXIT_SUCCESS;
}

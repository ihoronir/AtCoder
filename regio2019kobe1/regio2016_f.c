#include <stdio.h>
#include <stdlib.h>
 
int main() {
  int Value;
  scanf("%d", &Value);
 
  int Otsuri = 1000 - Value;
 
  int mai500 = Otsuri / 500;
  int amari500 = Otsuri % 500;
 
  int mai100 = amari500 / 100;
  int amari100 = amari500 % 100;
 
  int mai50 = amari100 / 50;
  int amari50 = amari100 % 50;
 
  int mai10 = amari50 / 10;
  int amari10 = amari50 % 10;
 
  int mai5 = amari10 / 5;
  int amari5 = amari10 % 5;
 
  int mai1 = amari5 / 1;
 
  printf("%d\n", mai500 + mai100 + mai50 + mai10 + mai5 + mai1);
}

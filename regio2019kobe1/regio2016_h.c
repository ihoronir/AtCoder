#include <stdio.h>
#include <stdlib.h>

int main() {

  int n;
  scanf("%d", &n);

  char s[7];
  snprintf(s, 7, "%o", n);

  for (int i = 0; i < 7; i ++) {
    if (s[i] == '4') {
      s[i] = '5';
    } else if (s[i] == '5') {
      s[i] = '6';
    } else if (s[i] == '6') {
      s[i] = '7';
    } else if (s[i] == '7') {
      s[i] = '8';
    }
  }

  printf("%s\n", s);

  return EXIT_SUCCESS;
}

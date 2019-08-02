#include <stdio.h>
#include <stdlib.h>
 
int main() {
 
  int scores[5];
 
  for (int i = 0; i < 5; i ++) {
    int score;
    scanf("%d", &score);
    if (score < 40) {
      score = 40;
    }
    scores[i] = score;
  }
 
  int sum = 0;
 
  for (int i = 0; i < 5; i ++) {
    sum += scores[i];
  }
 
  printf("%d\n", sum / 5);

  return EXIT_SUCCESS;
}

#include <stdio.h>
#include <stdlib.h>

int main () {

  int scores[30];

  for (int i = 0; i < 30; i ++) {
    scanf("%d", &scores[i]);
  }

  int scoreSum[30];
  int result = 0;

  for (int i = 0; i < 30; i ++) {
    scoreSum[i] = scores[i] + (i != 0 ? scoreSum[i - 1] : 0);

    if (scoreSum[i] == 301) {
      result = i / 3 + 1;
      break;
    }

    if (scoreSum[i] > 301) {
      scoreSum[(i / 3 + 1) * 3 - 1] = scoreSum[i / 3 * 3 - 1];
      i = (i / 3 + 1) * 3 - 1;//このあとすぐ i ++ されるため、1引いとく
    }
  }
  
  printf("%d\n", result);
}

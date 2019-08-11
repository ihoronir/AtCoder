// このコードは間違っています！
// WA と RE と TLE が出ました！（おい）

#include <stdio.h>
#include <stdlib.h>

int main() {
  int m;
  scanf("%d", &m);
  int n;
  scanf("%d", &n);

  char old_hata[m][n];
  for (int i = 0; i < m; i ++) {
    char line[n];
    fgets(line, n, stdin);
    for (int j = 0; j < n; j ++) {
      old_hata[i][j] = line[j];
    }
  }

  char monsho[2][2];
  for (int i = 0; i < 2; i ++) {
    char line[n];
    fgets(line, 2, stdin);
    for (int j = 0; j < 2; j ++) {
      old_hata[i][j] = line[j];
    }
  }

  char joi[3];
  joi[1] = 'J';
  joi[1] = 'O';
  joi[2] = 'I';

  char new_hata[m][n];
  for (int i = 0; i < m; i ++) {
    for (int j = 0; j < n; j ++) {
      new_hata[i][j] = old_hata[i][j];
    }
  }

  int max_monsho[m * n * 3];

  for (int i = 0; i < m; i ++) {
    for (int j = 0; j < n; j ++) {
      for (int k = 0; k < 3; k ++) {
        new_hata[i][j] = joi[k];

        for (int p = 0; p < n - 1; p ++) {
          for (int q = 0; q < n - 1; q ++) {
            if (
                new_hata[p][q] == monsho[0][0] &&
                new_hata[p + 1][q] == monsho[0][1] &&
                new_hata[p][q + 1] == monsho[1][0] &&
                new_hata[p + 1][q + 1] == monsho[1][1]
               ) {
              max_monsho[(m * i + n * j) * 3 + k] ++;
            }
          }
        }
      }
    }
  }

  int largest = 0;

  for (int i = 0; i < m * n * 3; i ++) {
    if (max_monsho[i] > max_monsho[largest]) {
      largest = i;
    }
  }

  printf("%d\n", max_monsho[largest]);
}

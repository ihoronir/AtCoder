#include <stdio.h>
#include <stdlib.h>

int main() {
  int n;
  scanf("%d", &n);
  int m;
  scanf("%d", &m);

  int target[m];
  for (int i = 0; i < m; i ++) {
    int target_plus_one;
    scanf("%d", &target_plus_one);
    target[i] = target_plus_one - 1;
  }

  int yosou[m][n];
  for (int i = 0; i < m; i ++) {
    for (int j = 0; j < n; j ++) {
      int yosou_plus_one;
      scanf("%d", &yosou_plus_one);
      yosou[i][j] = yosou_plus_one - 1;
    }
  }

  int score[n];
  // 0 にリセット
  for (int i = 0; i < n; i ++) {
    score[i] = 0;
  }

  for (int i = 0; i < m; i ++) {
    for (int j = 0; j < n; j ++) {
      // i 回目のゲームの j さん
      if (j == target[i]) {
        // 自分がターゲットだったら

        // 自分で入れた一点
        score[j] ++;

        // はずれ人数
        int hazure = 0;
        for (int k = 0; k < n; k ++) {
          if (yosou[i][k] != target[i]) {
            hazure ++;
          }
        }

        // はずれ人数たす
        score[j] += hazure;
      } else {
        // 自分がターゲットじゃなかったら

        if (yosou[i][j] == target[i]) {
          score[j] ++;
        }
      }
 
 
    }
  }
 
  for (int i = 0; i < n; i ++) {
    printf("%d\n", score[i]);
  }
}

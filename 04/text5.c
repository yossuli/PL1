#include <stdio.h>
#include <unistd.h>

int main() {
  // アニメーションする文字列
  char loading[] = "Loading...";

  // アニメーションループ
  while (1) {
    // 文字列を表示
    printf("%s\r", loading);
    // バッファを即時にフラッシュすることで、表示を即座に更新する
    fflush(stdout);

    // 少し待つ（アニメーションが速すぎると見にくいため）
    usleep(200000); // 200ms待つ

    // アニメーションのため、文字列を1つずつ左にシフトする
    char temp = loading[0];
    for (int i = 0; i < sizeof(loading) - 1; i++) {
      loading[i] = loading[i + 1];
    }
    loading[sizeof(loading) - 2] = temp;
  }

  return 0;
}

# PL1

## 01

### [attendance](01/attendance.py)

#### contents

- python の復習
-
- sigma 関数

#### points

- 特になし

### [JST_to_EST](01/JST_to_EST.c)

#### contents

- 時差を計算する関数

#### points

- if 文
- 算術演算子

### [example](01/example.c)

#### contents

- C 言語の基本的な入力と出力の例

#### points

- printf 関数
  - `%d`: int 10 進数
  - `%b`: int 2 進数
  - `%o`: int 8 進数
  - `%x`: int 16 進数
  - `%f`: float (小数)
  - `%lf`: double (小数)
  - `%e`: float (指数)
  - `%g`: float (指数)
  - `%hd`: short int
  - `%ld`: long int
  - `%u`: unsigned int
  - `%c`: char (1 文字)
  - `%hhu`: unsigned char
  - `%s`: string (文字列)
  - `%p`: pointer (アドレス)
  - `#include <stdio.h>` が必要
- scanf 関数

### [example2](01/example2.c)

#### contents

- 指定した秒数だけカウントダウンする例

#### points

- for ループ
- sleep 関数
  `#include <unistd.h>` が必要

## 03

### [example1](03/example1.c)

#### contents

- 2 つの整数の商と余りを計算する関数

#### points

- ポインタを使用して計算結果を返す

  ```
  int a = 10;
  ```

  - `int *` でポインタを宣言
    ```
    int *p;
    ```
  - `&` で変数のアドレスを取得
    ```
    p = &a;
    ```
  - `*` でポインタの指す先の値を取得
    ```
    printf("%d\n", *p);
    // 10
    ```
  - `*` でポインタの指す先に値を代入
    ```
    *p = 20;
    ```

  ```
  printf("%d\n", a);
  // 20
  ```

### [example2](03/example2.c)

#### contents

- 秒を時間、分、秒に変換する関数

## 04

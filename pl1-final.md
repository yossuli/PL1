<div id="top" style="height:36px"></div>

# C 言語 テストカンペ

## はじめに

このテストカンペは、C 言語の基本的な文法とその実際の使用例を書きまとめます。 \
基本的に、MOOCs の内容、順序に従って記述します。

### 使用方法

VSCode でこの markdown ファイルを開き、右上のプレビューボタンをクリックしてください。 \

![使用方法](https://cdn.discordapp.com/attachments/1092840828784889938/1266848910043910315/image.png?ex=66a6a47d&is=66a552fd&hm=5f818bd7df32de70928b9c7b29aefedae55391b1ac6e988476a66f7ea9b79053&)

<details>
  <summary><span style="font-size:1.4em;font-weight:bold">目次</span></summary>
  <ul>
    <li>
      <a href="#数値データ型と制御構造">数値データ型と制御構造</a>
      <ul>
        <li>
          <a href="#整数型とその算術">整数型とその算術</a>
        </li>
        <li>
          <a href="#浮動小数と型キャスト">浮動小数と型キャスト</a>
        </li>
        <li>
          <a href="#真偽値と条件に基づく処理">真偽値と条件に基づく処理</a>
        </li>
      </ul>
    </li>
    <li>
      <a href="#変数のスコープとポインタ">変数のスコープとポインタ</a>
      <ul>
        <li>
          <a href="#変数のスコープと記憶クラス">変数のスコープと記憶クラス</a>
        </li>
        <li>
          <a href="#ポインタの基礎">ポインタの基礎</a>
        </li>
        <li>
          <a href="#ポインタと変数の生存期間">ポインタと変数の生存期間</a>
        </li>
      </ul>
    </li>
    <li>
      <a href="#配列とポインタの奇妙な関係">配列とポインタの奇妙な関係</a>
      <ul>
        <li>
          <a href="#配列">配列</a>
        </li>
        <li>
          <a href="#配列とポインタの関係">配列とポインタの関係</a>
        </li>
        <li>
          <a href="#関数ポインタ">関数ポインタ</a>
        </li>
        <li>
          <a href="#汎用ポインタとメモリ操作">汎用ポインタとメモリ操作</a>
        </li>
        <li>
          <a href="#ポインタ演算">ポインタ演算</a>
        </li>
      </ul>
    </li>
    <li>
      <a href="#文字列と動的メモリ管理">文字列と動的メモリ管理</a>
      <ul>
        <li>
          <a href="#文字と文字列の表現">文字と文字列の表現</a>
        </li>
        <li>
          <a href="#文字列の操作関数">文字列の操作関数</a>
        </li>
        <li>
          <a href="#バッファオーバーフローとその対策">
            バッファオーバーフローとその対策
          </a>
        </li>
        <li>
          <a href="#動的メモリ管理">動的メモリ管理</a>
        </li>
      </ul>
    </li>
    <li>
      <a href="#カスタムデータ型の利用">カスタムデータ型の利用</a>
      <ul>
        <li>
          <a href="#ポインタのポインタ">ポインタのポインタ</a>
        </li>
        <li>
          <a href="#構造体">構造体</a>
        </li>
        <li>
          <a href="#列挙型">列挙型</a>
        </li>
        <li>
          <a href="#共用体とヴァリアント型の表現">
            共用体とヴァリアント型の表現
          </a>
        </li>
      </ul>
    </li>
    <li>
      <a href="#リストの表現">リストの表現</a>
      <ul>
        <li>
          <a href="#配列とリンクリスト">配列とリンクリスト</a>
        </li>
        <li>
          <a href="#配列に基づく実装">配列に基づく実装</a>
        </li>
        <li>
          <a href="#リンクリストに基づく実装">リンクリストに基づく実装</a>
        </li>
        <li>
          <a href="#可変長配列">可変長配列</a>
        </li>
      </ul>
    </li>
    <li>
      <a href="#ファイル入出力">ファイル入出力</a>
      <ul>
        <li>
          <a href="#テキストファイルの読み書き">テキストファイルの読み書き</a>
        </li>
        <li>
          <a href="#バイナリファイルの読み書き">バイナリファイルの読み書き</a>
        </li>
      </ul>
    </li>
    <li>
      <a href="#ファイル分割と-makefile">ファイル分割と Makefile</a>
      <ul>
        <li>
          <a href="#ファイル分割の概要とコマンドライン引数">
            ファイル分割の概要とコマンドライン引数
          </a>
        </li>
        <li>
          <a href="#extern-宣言と-include">extern 宣言と include</a>
        </li>
        <li>
          <a href="#makefile-を用いた分割コンパイル">
            Makefile を用いた分割コンパイル
          </a>
        </li>
      </ul>
    </li>
    <li>
      <a href="#プリプロセッサと条件付きコンパイル">
        プリプロセッサと条件付きコンパイル
      </a>
      <ul>
        <li>
          <a href="#マクロとインライン関数">マクロとインライン関数</a>
        </li>
        <li>
          <a href="#条件付きコンパイルとインクルードガード">
            条件付きコンパイルとインクルードガード
          </a>
        </li>
        <li>
          <a href="#プログラムの診断とエラー処理">
            プログラムの診断とエラー処理
          </a>
        </li>
      </ul>
    </li>
    <li>
      <a href="#2-進数とビット演算">2 進数とビット演算</a>
      <ul>
        <li>
          <a href="#8-進数と-16-進数">8 進数と 16 進数</a>
        </li>
        <li>
          <a href="#論理演算とビット演算">論理演算とビット演算</a>
        </li>
        <li>
          <a href="#シフト演算子とその応用">シフト演算子とその応用</a>
        </li>
      </ul>
    </li>
    <li>
      <a href="#標準ライブラリに関する落穂拾い">
        標準ライブラリに関する落穂拾い
      </a>
      <ul>
        <li>
          <a href="#文字操作-ctypeh">文字操作 ctype.h</a>
        </li>
        <li>
          <a href="#数学-mathh">数学 math.h</a>
        </li>
        <li>
          <a href="#clock-関数による時間の計測">clock 関数による時間の計測</a>
        </li>
        <li>
          <a href="#一般ユーティリティ-stdlibh">一般ユーティリティ stdlib.h</a>
        </li>
      </ul>
    </li>
  </ul>
  <p align="right"><a href="#top">トップに戻る</a></p>
</details>

## 数値データ型と制御構造

### 整数型とその算術

整数型

- `char`: 1 byte (= 8bit) の符号付き整数型 (範囲: -128 ～ 127)
- `short`: 2 byte (= 16bit) の符号付き整数型 (範囲: -32768 ～ 32767)
- `int`: 4 byte (= 32bit) の符号付き整数型 (範囲: -2147483648 ～ 2147483647)
- `long`: 8 byte (= 64bit) の符号付き整数型 (範囲: -9223372036854775808 ～ 9223372036854775807)
- `long long`: 8 byte (= 64bit) の符号付き整数型 (範囲: -9223372036854775808 ～ 9223372036854775807)
- `unsigned char`: 1 byte (= 8bit) の符号なし整数型 (範囲: 0 ～ 255)
- `unsigned short`: 2 byte (= 16bit) の符号なし整数型 (範囲: 0 ～ 65535)
- `unsigned int`: 4 byte (= 32bit) の符号なし整数型 (範囲: 0 ～ 4294967295)
- `unsigned long`: 8 byte (= 64bit) の符号なし整数型 (範囲: 0 ～ 18446744073709551615)
- `unsigned long long`: 8 byte (= 64bit) の符号なし整数型 (範囲: 0 ～ 18446744073709551615)

整数型の算術演算

```c
int a = 10;
int b = 20;
int c = a + b; // a と b の和
int d = a - b; // a と b の差
int e = a * b; // a と b の積
int f = a / b; // a と b の商
int g = a % b; // a と b の剰余
a++; // a の値を 1 増加
b--; // b の値を 1 減少

printf("a + b = %d\n", c); // a + b = 30
printf("a - b = %d\n", d); // a - b = -10
printf("a * b = %d\n", e); // a * b = 200
printf("a / b = %d\n", f); // a / b = 0
printf("a %% b = %d\n", g); // a % b = 10
printf("a++ = %d\n", a); // a++ = 11
printf("b-- = %d\n", b); // b-- = 19
```

整数型の`printf`フォーマット指定子

- `%d`: int 型 (またはそれより小さい整数型)
- `%ld`: long 型
- `%lld`: long long 型
- `%u`: unsigned int 型 (またはそれより小さい符号なし整数型)
- `%lu`: unsigned long 型
- `%llu`: unsigned long long 型
- `%x`: 16 進数 (小文字)
- `%X`: 16 進数 (大文字)
- `%o`: 8 進数

桁数指定も可能

- `%4d`: 4 桁の整数
- `%04d`: 4 桁の整数 (0 埋め)

<p align="right"><a href="#top">トップに戻る</a></p>

### 浮動小数と型キャスト

浮動小数型

- `float`: 4 byte (= 32bit) の単精度浮動小数型
- `double`: 8 byte (= 64bit) の倍精度浮動小数型

浮動小数型の算術演算

```c
double a = 10.5;
double b = 20.5;
double c = a + b; // a と b の和
double d = a - b; // a と b の差
double e = a * b; // a と b の積
double f = a / b; // a と b の商

printf("a + b = %f\n", c); // a + b = 31.000000
printf("a - b = %f\n", d); // a - b = -10.000000
printf("a * b = %f\n", e); // a * b = 215.250000
printf("a / b = %f\n", f); // a / b = 0.512195
```

型キャスト

```c
int a = 10;
int b = 20;
double c = (double)a / (double)b; // a と b の商 (浮動小数にキャスト)

printf("a / b = %f\n", c); // a / b = 0.500000
```

浮動少数型の`printf`フォーマット指定子

- `%f`: float 型
- `%lf`: double 型
- `%e`: 指数表記
- `%g`: 最適な方を用いる

<p align="right"><a href="#top">トップに戻る</a></p>

### 真偽値と条件に基づく処理

#### 真偽値

- `0`: 偽
- `0` 以外: 真
- `false`: 偽 (`#include <stdbool.h>` が必要)
- `true`: 真 (`#include <stdbool.h>` が必要)

#### 関係演算子, 論理演算子

- `==`: 等しい
- `!=`: 等しくない
- `<`: より小さい
- `<=`: 以下
- `>`: より大きい
- `>=`: 以上
- `&&`: 論理積 (AND)
- `||`: 論理和 (OR)
- `!`: 否定 (NOT)

#### 条件に基づく処理

##### if 文

```c
int a = 10;

if (a > 0) {
  printf("a は正の数です\n");
} else if (a < 0) {
  printf("a は負の数です\n");
} else {
  printf("a は 0 です\n");
}

int b = 20;

if (b % 2 == 0) {
  printf("b は偶数です\n");
} else {
  printf("b は奇数です\n");
}
```

##### 三項演算子

```c
int a = 10;
int b = 20;
int c = (a > b) ? a : b; // a と b のうち大きい方

printf("a と b のうち大きい方は %d\n", c); // a と b のうち大きい方は 20
```

##### switch 文

```c
int a = 10;
int b = 20;

switch (a) {
  case 10:
    printf("a は 10 です\n");
    break;
  case 20:
    printf("a は 20 です\n");
    break;
  default:
    printf("a は 10 でも 20 でもありません\n");
} // a は 10 です

switch (b) {
  case 10:
    printf("b は 10 です\n");
    break;
  case 20:
    printf("b は 20 です\n");
    break;
  default:
    printf("b は 10 でも 20 でもありません\n");
} // b は 20 です
```

##### do-while 文

```c
int a = 0;

do {
  printf("a = %d\n", a);
  a++;
} while (a < 10);
```

##### while 文

```c
int a = 0;

while (a < 10) {
  printf("a = %d\n", a);
  a++;
}
```

##### for 文

```c
for (int i = 0; i < 10; i++) {
  printf("i = %d\n", i);
}
```

以下のように省略し、無限ループも作れる

```c
for (;;) {
  printf("無限ループ\n");
}
```

カンマ演算子(`,`)を用いて、複数の初期化式や更新式を記述できる

```c
for (int i = 0, j = 10; i < 10; i++, j--) {
  printf("i = %d, j = %d\n", i, j);
}
```

`break`, `continue` 文を用いて、ループの途中で処理を中断、次のループに進む

```c
for (int i = 0; i < 10; i++) {
  if (i == 5) {
    break; // ループを中断
  }
  if (i % 2 == 0) {
    continue; // 次のループに進む
  }
  printf("i = %d\n", i);
}
```

##### goto 文

`goto` 文を用いて、プログラムの任意の位置にジャンプできる

```c
int a = 0;

start: // ラベル
printf("a = %d\n", a);
a++;

if (a < 10) {
  goto start; // ラベルにジャンプ
}
```

<p align="right"><a href="#top">トップに戻る</a></p>

## 変数のスコープとポインタ

### 変数のスコープと記憶クラス

#### スコープ

##### グローバルスコープ

グローバルスコープに宣言された変数は、プログラム全体で利用できるが、**他のファイルからも参照できる**

```c
int a = 10;

void func() {
  printf("a = %d\n", a);
}

int main() {
  func(); // a = 10
}
```

##### ファイルスコープ

ファイルスコープに宣言された変数は、ファイル全体で利用できるが、**他のファイルから参照出来ない**

```c
static int a = 10;

void func() {
  printf("a = %d\n", a);
}

int main() {
  func(); // a = 10
}
```

##### ブロックスコープ

ブロックスコープに宣言された変数は、ブロック内でのみ利用できる

```c
int a = 10;

void func() {
  int b = 20;
  printf("a = %d, b = %d\n", a, b); // a = 10, b = 20
}

int main() {
  func();
  printf("a = %d\n", a); // a = 10
}
```

#### 記憶クラス

##### テキスト領域

プログラムコードや定数データなどの置き場 \
OS によってこの領域は通常書き込み禁止

##### スタック領域

普通のローカル変数(自動変数)を配置する領域 \
関数の呼び出し時に確保され、関数の終了時(`return`時)に解放される

##### 静的記憶域

グローバル変数や静的変数を配置する領域 \
プログラムの起動から終了まで固定的に確保される

##### ヒープ領域

動的に割り当てるメモリを配置する領域 \
`malloc`, `calloc`, `realloc`, `free` などの関数を用いてメモリの確保と解放を行う
詳細は[動的メモリ管理](#動的メモリ管理)を参照

<p align="right"><a href="#top">トップに戻る</a></p>

### ポインタの基礎

ポインタは、変数のアドレスを格納する変数 \
宣言方法

```c
int a = 10;
int *p = &a; // a のアドレスを p に格納
```

ポインタを用いて、変数の値を参照

```c
int a = 10;
int *p = &a;

printf("a = %d\n", *p); // a = 10
```

ポインタを用いて、変数の値を更新

```c
int a = 10;

printf("a = %d\n", a); // a = 10

int *p = &a;
*p = 20;

printf("a = %d\n", a); // a = 20
```

ポインタの`printf`フォーマット指定子

- `%p`: ポインタのアドレス

```c
int a = 10;
int *p = &a;

printf("p = %p\n", p); // p = 0x7ffeeb1b3b60
printf("*p = %d\n", *p); // *p = 10
```

<p align="right"><a href="#top">トップに戻る</a></p>

### ポインタと変数の生存期間

ポインタを用いて、スタック領域に確保された変数を参照できる

スタック領域に確保された変数は、関数の終了時に解放されるため、 \
ポインタが参照する変数が解放された後に参照すると、未定義の動作が発生

```c
int *p;

void func() {
  int a = 10;
  p = &a;
}

int main() {
  func();
  printf("*p = %d\n", *p); // *p = 10
}
```

<p align="right"><a href="#top">トップに戻る</a></p>

## 配列とポインタの奇妙な関係

### 配列

配列は、同じ型の複数の要素をまとめて扱うためのデータ構造 \
宣言方法

```c
int a[5]; // int 型の要素を 5 つ持つ配列
```

配列の要素には、以下のようにアクセスする

```c
int a[5] = {1, 2, 3, 4, 5};

printf("a[0] = %d\n", a[0]); // a[0] = 1
printf("a[1] = %d\n", a[1]); // a[1] = 2
printf("a[2] = %d\n", a[2]); // a[2] = 3
printf("a[3] = %d\n", a[3]); // a[3] = 4
printf("a[4] = %d\n", a[4]); // a[4] = 5
```

<p align="right"><a href="#top">トップに戻る</a></p>

### 配列とポインタの関係

配列は、ポインタと密接な関係がある \
配列名は、配列の先頭要素のアドレスを表す

```c
int a[5] = {1, 2, 3, 4, 5};

printf("a = %p\n", a); // a = 0x7ffeeb1b3b60
printf("&a[0] = %p\n", &a[0]); // &a[0] = 0x7ffeeb1b3b60
printf("&a[1] = %p\n", &a[1]); // &a[1] = 0x7ffeeb1b3b64
printf("&a[2] = %p\n", &a[2]); // &a[2] = 0x7ffeeb1b3b68
printf("&a[3] = %p\n", &a[3]); // &a[3] = 0x7ffeeb1b3b6c
printf("&a[4] = %p\n", &a[4]); // &a[4] = 0x7ffeeb1b3b70
```

配列名をポインタとして扱うこともできる

```c
int a[5] = {1, 2, 3, 4, 5};

int *p = a;

printf("*p = %d\n", *p); // *p = 1
printf("*(p + 1) = %d\n", *(p + 1)); // *(p + 1) = 2
printf("*(p + 2) = %d\n", *(p + 2)); // *(p + 2) = 3
printf("*(p + 3) = %d\n", *(p + 3)); // *(p + 3) = 4
printf("*(p + 4) = %d\n", *(p + 4)); // *(p + 4) = 5
```

<p align="right"><a href="#top">トップに戻る</a></p>

### 関数ポインタ

関数ポインタは、関数のアドレスを格納する変数 \
宣言方法

```c
int add(int a, int b) {
  return a + b;
}

int main() {
  int (*p)(int, int) = add; // add 関数のアドレスを p に格納
  int result = p(10, 20); // p に格納されたアドレスの関数を呼び出す
  printf("result = %d\n", result); // result = 30
}
```

<p align="right"><a href="#top">トップに戻る</a></p>

### 汎用ポインタとメモリ操作

#### メモリ確保関数

##### `memcpy` 関数

`memcpy` 関数は、メモリのコピーを行う関数 \
`string.h` に定義されている

```c
#include <string.h>

int a[5] = {1, 2, 3, 4, 5};
int b[5];

memcpy(b, a, sizeof(a)); // a の内容を b にコピー

for (int i = 0; i < 5; i++) {
  printf("b[%d] = %d\n", i, b[i]);
}
```

##### `memset` 関数

`memset` 関数は、メモリの初期化を行う関数 \
`string.h` に定義されている

```c
#include <string.h>

int a[5];

memset(a, 0, sizeof(a)); // a の内容を 0 で初期化

for (int i = 0; i < 5; i++) {
  printf("a[%d] = %d\n", i, a[i]);
}
```

##### `memcmp` 関数

`memcmp` 関数は、メモリの比較を行う関数 \
`string.h` に定義されている

```c
#include <string.h>

int a[5] = {1, 2, 3, 4, 5};

if (memcmp(a, b, sizeof(a)) == 0) {
  printf("a と b は等しい\n");
} else {
  printf("a と b は等しくない\n");
}
```

<p align="right"><a href="#top">トップに戻る</a></p>

#### 汎用ポインタ

汎用ポインタは、`void` 型のポインタ \
どの型のポインタでも代入できる

```c
int a = 10;
double b = 20.5;
void *p;

p = &a;
printf("*p = %d\n", *(int *)p); // *p = 10

p = &b;
printf("*p = %f\n", *(double *)p); // *p = 20.500000
```

<p align="right"><a href="#top">トップに戻る</a></p>

### ポインタ演算

ポインタ演算は、ポインタのアドレスを更新する演算 \
ポインタ演算は、以下のように行う

```c
int a[5] = {1, 2, 3, 4, 5};
int *p = a;

printf("*p = %d\n", *p); // *p = 1
printf("*(p + 1) = %d\n", *(p + 1)); // *(p + 1) = 2
printf("*(p + 2) = %d\n", *(p + 2)); // *(p + 2) = 3
printf("*(p + 3) = %d\n", *(p + 3)); // *(p + 3) = 4
printf("*(p + 4) = %d\n", *(p + 4)); // *(p + 4) = 5
```

<p align="right"><a href="#top">トップに戻る</a></p>

## 文字列と動的メモリ管理

### 文字と文字列の表現

文字は、`char` 型の変数で表す \
文字列は、`char` 型の配列で表す

```c
char c = 'A'; // 文字
char s[] = "Hello, World!"; // 文字列
```

文字列は、以下のように扱う

```c
char s[] = "Hello, World!";
char *p = s;

printf("s = %s\n", s); // s = Hello, World!
printf("p = %s\n", p); // p = Hello, World!
```

`printf`フォーマット指定子

- `%c`: char 型 -> 文字コードが表示される
- `%s`: char 型の配列 -> 文字列が表示される

```c
char c = 'A';
char s[] = "Hello, World!";

printf("c = %c\n", c); // c = A
printf("s = %s\n", s); // s = Hello, World!
```

<p align="right"><a href="#top">トップに戻る</a></p>

### 文字列の操作関数

文字列の操作関数は、`string.h` に定義されている

- `strlen`: 文字列の長さを取得
- `strcpy`: 文字列をコピー
- `strcat`: 文字列を連結
- `strcmp`: 文字列を比較
- `strdup`: 文字列を複製

```c
#include <string.h>
#include <stdlib.h>

char s1[] = "Hello";
char s2[] = "World";

printf("strlen(s1) = %ld\n", strlen(s1)); // strlen(s1) = 5
printf("strlen(s2) = %ld\n", strlen(s2)); // strlen(s2) = 5

char s3[12];
strcpy(s3, s1); // s1 を s3 にコピー
strcat(s3, s2); // s2 を s3 に連結

printf("s3 = %s\n", s3); // s3 = HelloWorld

if (strcmp(s1, s2) == 0) { // s1 と s2 が等しいか比較
  printf("s1 と s2 は等しい\n");
} else {
  printf("s1 と s2 は等しくない\n");
}

char *s4 = strdup(s1); // s1 を複製

printf("s4 = %s\n", s4); // s4 = Hello

free(s4); // s4 のメモリを解放
```

<p align="right"><a href="#top">トップに戻る</a></p>

### バッファオーバーフローとその対策

バッファオーバーフローは、配列の範囲外に書き込むと以下のように発生する

```c
char a[8] = "Hello";
char b[8] = "World";

strcpy(a, " overflow"); // バッファオーバーフロー

printf("a = %s\n", a); // a = Hello overflow
printf("b = %s\n", b); // b = erflow
```

バッファオーバーフローを防ぐために、以下のような対策がある

- `strncpy`: 文字列をコピー
- `strncat`: 文字列を連結
- `strncmp`: 文字列を比較
- `snprintf`: 文字列を書式化

<p align="right"><a href="#top">トップに戻る</a></p>

### 動的メモリ管理

動的メモリ管理は、プログラム実行中にメモリを動的に確保すること \
動的メモリ管理は、以下の関数を用いて行う

- `malloc`: メモリの確保
- `calloc`: メモリの確保と初期化
- `realloc`: メモリの再確保
- `free`: メモリの解放

```c
#include <stdlib.h>

int *p = (int *)malloc(sizeof(int)); // int 型のメモリを確保
int *q = (int *)calloc(1, sizeof(int)); // int 型のメモリを確保して 0 で初期化
int *r = (int *)realloc(q, 2 * sizeof(int)); // int 型のメモリを再確保
free(p); // メモリの解放
free(r); // メモリの解放
```

<p align="right"><a href="#top">トップに戻る</a></p>

## カスタムデータ型の利用

### ポインタのポインタ

ポインタのポインタは、ポインタを格納するポインタ \
ポインタのポインタは、以下のように宣言する

```c
int a = 10;
int *p = &a;
int **q = &p;
```

ポインタのポインタを用いて、変数の値を参照することができる

```c
int a = 10;
int *p = &a;
int **q = &p;

printf("a = %d\n", **q); // a = 10
```

ポインタのポインタを用いて、変数の値を更新することができる

```c
int a = 10;
int *p = &a;
int **q = &p;

**q = 20;

printf("a = %d\n", a); // a = 20
```

<p align="right"><a href="#top">トップに戻る</a></p>

### 構造体

構造体は、異なる型の複数の要素をまとめて扱うためのデータ構造 \
構造体は、以下のように宣言する

```c
struct Point {
  int x;
  int y;
};

struct Point p = {10, 20};
```

typedef を用いて、構造体に別名を付けることもできる

```c
typedef struct Point {
  int x;
  int y;
} Point;

Point p = {10, 20};
```

構造体の要素には、以下のようにアクセスする

```c
struct Point p = {10, 20}; // struct を用いた場合
Point p = {10, 20}; // typedef を用いた場合

printf("p.x = %d\n", p.x); // p.x = 10
printf("p.y = %d\n", p.y); // p.y = 20
```

アロー演算子を用いて、構造体のポインタの要素にアクセスすることもできる

```c
struct Point p = {10, 20};
struct Point *q = &p;

printf("q->x = %d\n", q->x); // q->x = 10
printf("q->y = %d\n", q->y); // q->y = 20
```

<p align="right"><a href="#top">トップに戻る</a></p>

### 列挙型

列挙型は、整数値に名前を付けるためのデータ構造 \
列挙型は、以下のように宣言する

```c
enum Color {
  RED,
  GREEN,
  BLUE
};

enum Color color = RED;
```

列挙型の要素には、以下のようにアクセスする

```c
enum Color color = RED;

switch (color) {
  case RED:
    printf("color = RED\n");
    break;
  case GREEN:
    printf("color = GREEN\n");
    break;
  case BLUE:
    printf("color = BLUE\n");
    break;
}
```

<p align="right"><a href="#top">トップに戻る</a></p>

### 共用体とヴァリアント型の表現

共用体は、同じメモリ領域を複数の型で共有するためのデータ構造 \
共用体は、以下のように宣言する

```c
union Value {
  int i;
  double d;
};

union Value value;
value.i = 10;
value.d = 20.5;
```

共用体の要素には、以下のようにアクセスする

```c
union Value value;
value.i = 10;

printf("value.i = %d\n", value.i); // value.i = 10
printf("value.d = %f\n", value.d); // value.d = 0.000000
```

<p align="right"><a href="#top">トップに戻る</a></p>

## リストの表現

### 配列とリンクリスト

配列とリンクリストは、データを格納するためのデータ構造 \
配列は、連続したメモリ領域に、リンクリストは、非連続なメモリ領域にデータを格納する

### 配列に基づく実装

```c
int a[5] = {1, 2, 3, 4, 5};

for (int i = 0; i < 5; i++) {
  printf("a[%d] = %d\n", i, a[i]);
}
```

<p align="right"><a href="#top">トップに戻る</a></p>

### リンクリストに基づく実装

```c
struct Node {
  int data;
  struct Node *next;
};

struct Node *head = NULL;

void insert(int data) {
  struct Node *node = (struct Node *)malloc(sizeof(struct Node));
  node->data = data;
  node->next = head;
  head = node;
}

void print() {
  struct Node *node = head;

  while (node != NULL) {
    printf("data = %d\n", node->data);
    node = node->next;
  }
}

int main() {
  insert(1);
  insert(2);
  insert(3);
  insert(4);
  insert(5);

  print();
}
```

<p align="right"><a href="#top">トップに戻る</a></p>

### 可変長配列

可変長配列は、配列のサイズを動的に変更するためのデータ構造

```c
int *a = (int *)malloc(sizeof(int) * 5);

for (int i = 0; i < 5; i++) {
  a[i] = i + 1;
}

for (int i = 0; i < 5; i++) {
  printf("a[%d] = %d\n", i, a[i]);
}

a = (int *)realloc(a, sizeof(int) * 10);

for (int i = 5; i < 10; i++) {
  a[i] = i + 1;
}

for (int i = 0; i < 10; i++) {
  printf("a[%d] = %d\n", i, a[i]);
}

free(a);
```

<p align="right"><a href="#top">トップに戻る</a></p>

## ファイル入出力

### テキストファイルの読み書き

テキストファイルの読み書きは、以下のように行う

```c
#include <stdio.h>

int main() {
  FILE *fp = fopen("data.txt", "w");

  if (fp == NULL) {
    return 1;
  }

  fprintf(fp, "Hello, World!\n");
  fclose(fp);

  fp = fopen("data.txt", "r");

  if (fp == NULL) {
    return 1;
  }

  char buf[256];
  fgets(buf, sizeof(buf), fp);
  printf("buf = %s", buf);
  fclose(fp);

  return 0;
}
```

<p align="right"><a href="#top">トップに戻る</a></p>

### バイナリファイルの読み書き

バイナリファイルの読み書きは、以下のように行う

```c
#include <stdio.h>

int main() {
  FILE *fp = fopen("data.bin", "wb"); // `data.bin` をバイナリ書き込みモードで開く

  if (fp == NULL) { // ファイルが開けない場合
    return 1;
  }

  int a = 10;
  fwrite(&a, sizeof(int), 1, fp); // `a` をバイナリで書き込む
  fclose(fp); // ファイルを閉じる

  fp = fopen("data.bin", "rb"); // `data.bin` をバイナリ読み込みモードで開く

  if (fp == NULL) { // ファイルが開けない場合
    return 1;
  }

  int b;
  fread(&b, sizeof(int), 1, fp); // `b` にバイナリで読み込む
  printf("b = %d\n", b); // b = 10
  fclose(fp); // ファイルを閉じる

  return 0;
}
```

<p align="right"><a href="#top">トップに戻る</a></p>

## ファイル分割と Makefile

### ファイル分割の概要とコマンドライン引数

#### ファイル分割

ファイル分割は、プログラムを複数のファイルに分割すること \
ファイル分割は、以下のように行う

```c
// sample.h
#ifndef _SAMPLE_H_
#define _SAMPLE_H_

int add(int a, int b);

#endif
```

```c
// sample.c
#include "sample.h"

int add(int a, int b) {
  return a + b;
}
```

```c
// main.c
#include <stdio.h>
#include "sample.h"

int main() {
  int a = 10;
  int b = 20;
  int c = add(a, b);
  printf("c = %d\n", c);
  return 0;
}
```

ファイル分割を行う際に、コマンドライン引数を用いてファイルを指定することができる

```sh
gcc main.c sample.c -o main
./main
```

#### コマンドライン引数

コマンドライン引数は、プログラムの実行時に引数を渡すための機能 \
コマンドライン引数は、以下のように行う

```c
#include <stdio.h>

int main(int argc, char *argv[]) { // argc: 引数の数, argv: 引数の値
  for (int i = 0; i < argc; i++) { // 引数の数だけ繰り返す
    printf("argv[%d] = %s\n", i, argv[i]); // 引数の値を表示
  }
  return 0;
}
```

コマンドライン引数を用いて、プログラムを実行する

```sh
./main arg1 arg2 arg3
```

<p align="right"><a href="#top">トップに戻る</a></p>

### extern 宣言と include

`extern` 宣言は、他のファイルで定義された変数や関数を参照するための宣言 \
`extern` 宣言は、以下のように行う

```c
// sample.h
#ifndef _SAMPLE_H_
#define _SAMPLE_H_

extern int a;
extern int add(int a, int b);

#endif
```

```c
// sample.c
#include "sample.h"

int a = 10;

int add(int a, int b) {
  return a + b;
}
```

```c
// main.c
#include <stdio.h>
#include "sample.h"

int main() {
  int b = 20;
  int c = add(a, b);
  printf("c = %d\n", c);
  return 0;
}
```

`include` は、他のファイルをインクルードするための命令 \
`include` は、以下のように行う

```c
#include "sample.h"
```

<p align="right"><a href="#top">トップに戻る</a></p>

### Makefile を用いた分割コンパイル

Makefile は、ファイル分割を行う際に、コンパイルを自動化するためのファイル \
Makefile は、以下のように記述する

```makefile
main: main.o sample.o
  gcc -o main main.o sample.o

main.o: main.c sample.h
  gcc -c main.c

sample.o: sample.c sample.h
  gcc -c sample.c

clean:
  rm -f main main.o sample.o
```

Makefile を用いて、コンパイルを行う

```sh
make
./main
```

<p align="right"><a href="#top">トップに戻る</a></p>

## プリプロセッサと条件付きコンパイル

### マクロとインライン関数

マクロは、プリプロセッサによって置換される定数 \
マクロは、以下のように定義する

```c
#define PI 3.14159265359
```

マクロを用いて、定数を定義することができる

```c
#include <stdio.h>

#define PI 3.14159265359

int main() {
  double r = 10.0;
  double area = PI * r * r;
  printf("area = %f\n", area);
  return 0;
}
```

インライン関数は、関数呼び出しを省略するための機能 \
インライン関数は、以下のように定義する

```c
inline int add(int a, int b) {
  return a + b;
}
```

インライン関数を用いて、関数呼び出しを省略できる

```c
#include <stdio.h>

inline int add(int a, int b) {
  return a + b;
}

int main() {
  int a = 10;
  int b = 20;
  int c = add(a, b);
  printf("c = %d\n", c);
  return 0;
}
```

<p align="right"><a href="#top">トップに戻る</a></p>

### 条件付きコンパイルとインクルードガード

条件付きコンパイルは、条件によってコンパイルするコードを切り替える機能 \
条件付きコンパイルは、以下のように行う

```c
#define DEBUG

#ifdef DEBUG
  printf("DEBUG\n");
#endif
```

インクルードガードは、ヘッダファイルの重複を防ぐ機能 \
インクルードガードは、以下のように行う

```c
#ifndef _SAMPLE_H_
#define _SAMPLE_H_

int add(int a, int b);

#endif
```

<p align="right"><a href="#top">トップに戻る</a></p>

### プログラムの診断とエラー処理

プログラムの診断とエラー処理は、以下のように行う

```c
#include <stdio.h>
#include <errno.h>
#include <string.h>

int main() {
  FILE *fp = fopen("data.txt", "r");

  if (fp == NULL) {
    fprintf(stderr, "Error: %s\n", strerror(errno));
    return 1;
  }

  fclose(fp);
  return 0;
}
```

<p align="right"><a href="#top">トップに戻る</a></p>

## 2 進数とビット演算

### 8 進数と 16 進数

8 進数と 16 進数は、以下のように表現する

```c
int a = 010; // 8 進数
int b = 0x10; // 16 進数

printf("a = %d\n", a); // a = 8

printf("b = %d\n", b); // b = 16
```

<p align="right"><a href="#top">トップに戻る</a></p>

### 論理演算とビット演算

論理演算とビット演算は、以下のように行う

- `&`: 論理積 -> 両方のビットが 1 の場合に 1 を返す
- `|`: 論理和 -> どちらかのビットが 1 の場合に 1 を返す
- `^`: 排他的論理和 -> どちらか一方のビットが 1 の場合に 1 を返す
- `~`: 否定 -> ビットを反転

```c
int a = 0b1010; // 2 進数
int b = 0b1100; // 2 進数

int c = a & b; // 論理積
int d = a | b; // 論理和
int e = a ^ b; // 排他的論理和
int f = ~a; // 否定

printf("a & b = %d\n", c); // a & b = 8
printf("a | b = %d\n", d); // a | b = 14
printf("a ^ b = %d\n", e); // a ^ b = 6
printf("~a = %d\n", f); // ~a = -11
```

<p align="right"><a href="#top">トップに戻る</a></p>

### シフト演算子とその応用

シフト演算子は、ビットを左右にシフトする演算

- `<<`: 左シフト -> ビットを左にシフト
- `>>`: 右シフト -> ビットを右にシフト

```c
int a = 0b1010; // 2 進数

int b = a << 1; // 左シフト
int c = a >> 1; // 右シフト

printf("a << 1 = %d\n", b); // a << 1 = 20
printf("a >> 1 = %d\n", c); // a >> 1 = 5
```

<p align="right"><a href="#top">トップに戻る</a></p>

## 標準ライブラリに関する落穂拾い

### 文字操作 `ctype.h`

`ctype.h` には、文字操作関数が定義されてる

- `isalnum`: **英数字かどうか**判定し、真偽値を返す
- `isalpha`: **英字かどうか**判定し、真偽値を返す
- `islower`: **小文字かどうか**判定し、真偽値を返す
- `isupper`: **大文字かどうか**判定し、真偽値を返す
- `isdigit`: **数字かどうか**判定し、真偽値を返す
- `isxdigit`: **16 進数かどうか**判定し、真偽値を返す

- `tolower`: **小文字に変換**
- `toupper`: **大文字に変換**

```c
#include <stdio.h>
#include <ctype.h>

if (isalnum(c)) { // 英数字かどうか -> true
  printf("c is alphanumeric\n");
}

if (isalpha(c)) { // 英字かどうか -> true
  printf("c is alphabetic\n");
}

if (islower(c)) { // 小文字かどうか -> false
  printf("c is lowercase\n");
}

if (isupper(c)) { // 大文字かどうか -> true
  printf("c is uppercase\n");
}

if (isdigit(c)) { // 数字かどうか -> false
  printf("c is digit\n");
}

if (isxdigit(c)) { // 16 進数かどうか -> true
  printf("c is hexadecimal\n");
}

printf("tolower(c) = %c\n", tolower(c)); // tolower(c) = a
printf("toupper(c) = %c\n", toupper(c)); // toupper(c) = A
```

<p align="right"><a href="#top">トップに戻る</a></p>

### 数学 `math.h`

#### 三角関数

- `sin`: 角度`r`(ラジアン)を受け取り、正弦を`double`型で返す
- `cos`: 角度`r`(ラジアン)を受け取り、余弦を`double`型で返す
- `tan`: 角度`r`(ラジアン)を受け取り、正接を`double`型で返す
- `asin`: 角度`r`(ラジアン)を受け取り、逆正弦を`double`型で返す
- `acos`: 角度`r`(ラジアン)を受け取り、逆余弦を`double`型で返す
- `atan`: 角度`r`(ラジアン)を受け取り、逆正接を`double`型で返す

```c
#include <stdio.h>
#include <math.h>

double x = 1.0;

printf("sin(x) = %f\n", sin(x)); // sin(x) = 0.841471
printf("cos(x) = %f\n", cos(x)); // cos(x) = 0.540302
printf("tan(x) = %f\n", tan(x)); // tan(x) = 1.557408
printf("asin(x) = %f\n", asin(x)); // asin(x) = 1.570796
printf("acos(x) = %f\n", acos(x)); // acos(x) = 0.000000
printf("atan(x) = %f\n", atan(x)); // atan(x) = 0.785398
```

#### 指数と平方根

- `exp`: `x`を受け取り、$e^{x}$を`double`型で返す
- `exp2`: `x`を受け取り、$2^{x}$を`double`型で返す
- `pow`: `x`と`y`を受け取り、$x^{y}$を`double`型で返す
- `sqrt`: `x`を受け取り、$\sqrt{x}$を`double`型で返す

```c
#include <stdio.h>
#include <math.h>

double x = 2.0;
double y = 3.0;

printf("exp(x) = %f\n", exp(x)); // exp(x) = 7.389056
printf("exp2(x) = %f\n", exp2(x)); // exp2(x) = 4.000000
printf("pow(x, y) = %f\n", pow(x, y)); // pow(x, y) = 8.000000
printf("sqrt(x) = %f\n", sqrt(x)); // sqrt(x) = 1.414214
```

#### 対数

- `log`: `x`を受け取り、$\log_{e}x$を`double`型で返す
- `log2`: `x`を受け取り、$\log_{2}x$を`double`型で返す
- `log10`: `x`を受け取り、$\log_{10}x$を`double`型で返す

```c
#include <stdio.h>
#include <math.h>

double x = 2.0;

printf("log(x) = %f\n", log(x)); // log(x) = 0.693147
printf("log2(x) = %f\n", log2(x)); // log2(x) = 1.000000
printf("log10(x) = %f\n", log10(x)); // log10(x) = 0.301030
```

#### 切り上げ, 切り捨て, 四捨五入, 絶対値

- `ceil`: `x`を受け取り、切り上げを`double`型で返す
- `floor`: `x`を受け取り、切り捨てを`double`型で返す
- `round`: `x`を受け取り、四捨五入を`double`型で返す
- `fabs`: `x`を受け取り、絶対値を`double`型で返す

```c
#include <stdio.h>
#include <math.h>

double x = 2.5;
double y = -2.5;

printf("ceil(x) = %f\n", ceil(x)); // ceil(x) = 3.000000
printf("floor(x) = %f\n", floor(x)); // floor(x) = 2.000000
printf("round(x) = %f\n", round(x)); // round(x) = 3.000000
printf("fabs(x) = %f\n", fabs(x)); // fabs(x) = 2.500000
```

<p align="right"><a href="#top">トップに戻る</a></p>

### clock 関数による時間の計測

`clock`関数は、プログラムの実行時間を計測する関数

```c
#include <stdio.h>
#include <time.h>

int main() {
  clock_t start = clock();

  for (int i = 0; i < 1000000; i++) {
    printf("%d\n", i);
  }

  clock_t end = clock();

  double elapsed = (double)(end - start) / CLOCKS_PER_SEC;
  printf("elapsed = %f\n", elapsed);

  return 0;
}
```

<p align="right"><a href="#top">トップに戻る</a></p>

### 一般ユーティリティ `stdlib.h`

`stdlib.h` には、一般ユーティリティ関数が定義されている
既に記載した関数(`abort`, `malloc`, `calloc`, `realloc`, `free`, `atoi`, `atof`, `atol` など)以外にも、以下のような関数がある。

#### exit

`exit`関数は、プログラムを終了する関数

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
  printf("Hello, World!\n");
  exit(0);
}
```

#### qsort

`qsort`関数は、配列をソートする関数

```c
#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
  return *(int *)a - *(int *)b;
}

int main() {
  int a[] = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5};

  qsort(a, sizeof(a) / sizeof(a[0]), sizeof(a[0]), compare);

  for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++) {
    printf("a[%d] = %d\n", i, a[i]);
  }

  return 0;
}
```

#### rand

`rand`関数は、乱数を生成する関数

```c
#include <stdio.h>

int main() {
  for (int i = 0; i < 10; i++) {
    printf("rand() = %d\n", rand()); // rand() = 1804289383 <- 乱数
  }

  return 0;
}
```

#### srand

`srand`関数は、乱数のシードを設定する関数

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
  srand(42);

  for (int i = 0; i < 10; i++) {
    printf("rand() = %d\n", rand()); // rand() = 1608637542 <- 乱数
  }

  return 0;
}
```

<p align="right"><a href="#top">トップに戻る</a></p>

# 動作確認環境

- macOS 13.2.1（22D68)

# 使用方法

- ビルド成果物をおくディレクトリの作成

  ```bash
  cd 01_minimal
  mkdir build
  ```

- ビルド前の設定

  ```bash
  cd build
  cmake ..
  ```

- ビルド

  ```bash
  make
  ```

- 実行

  ```bash
  ./minimal
  ```

02_use_include_files等も同様な手順となる．（実行ファイル名は異なるのでCMakeLists.txtを確認すること)

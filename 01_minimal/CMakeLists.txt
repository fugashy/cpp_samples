cmake_minimum_required(VERSION 3.10)
project(minimal)

# 実行ファイル名とそれをつくるために必要なソースコードの指定をする
# 必ず一つはmain関数を含んでいる必要があるはず
add_executable(minimal
  src/minimal.cpp
)

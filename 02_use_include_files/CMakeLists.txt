cmake_minimum_required(VERSION 3.10)
project(02_use_include_files)

include_directories(
  include
)

add_executable(use_include_files
  src/${PROJECT_NAME}/plus.cpp
  src/${PROJECT_NAME}/use_include_files.cpp
)

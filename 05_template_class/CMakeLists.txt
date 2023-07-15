cmake_minimum_required(VERSION 3.10)
project(05_class)

if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 20)
endif()

include_directories(
  include
)

add_executable(main
  src/class/main.cpp
)

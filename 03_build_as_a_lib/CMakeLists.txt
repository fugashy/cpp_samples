cmake_minimum_required(VERSION 3.10)
project(03_build_as_a_lib)

include_directories(
  include
)

add_library(plus SHARED
  src/${PROJECT_NAME}/plus.cpp
)


add_executable(build_as_a_lib
  src/${PROJECT_NAME}/build_as_a_lib.cpp
)

target_link_libraries(build_as_a_lib
  plus
)

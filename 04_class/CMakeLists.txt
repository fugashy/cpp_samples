cmake_minimum_required(VERSION 3.10)
project(04_class)

if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 20)
endif()

include_directories(
  include
)

add_library(counter SHARED
  src/class/counter.cpp
)


add_executable(main
  src/class/main.cpp
)

target_link_libraries(main
  counter
)

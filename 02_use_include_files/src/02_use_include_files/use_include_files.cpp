#include <iostream>

#include "02_use_include_files/plus.hpp"


int main(int argc, char** argv) {
  std::cout << "1 + 2 = " << use_include_files::Plus(1, 2) << std::endl;
}

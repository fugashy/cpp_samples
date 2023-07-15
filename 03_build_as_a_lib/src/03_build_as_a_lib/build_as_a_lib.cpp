#include <iostream>

#include "03_build_as_a_lib/plus.hpp"


int main(int argc, char** argv) {
  std::cout << "1 + 2 = " << build_as_a_lib::Plus(1, 2) << std::endl;
}

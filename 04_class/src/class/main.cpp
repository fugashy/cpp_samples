#include <iostream>

#include "class/counter.hpp"


int main(int argc, char** argv) {
  auto counter = Counter::SharedPtr(new Counter(3));

  std::cout
    << "current value: " << counter->Get() << std::endl;

  counter->Up();

  std::cout
    << "current value: " << counter->Get() << std::endl;

  counter->Down();

  std::cout
    << "current value: " << counter->Get() << std::endl;

  return EXIT_SUCCESS;
}

#include <iostream>

#include "class/counter.hpp"


int main(int argc, char** argv) {
  std::cout << "int version ---------------" << std::endl;
  Counter<int>::SharedPtr int_counter(new Counter<int>(0));
  std::cout
    << "current value: " << int_counter->Get() << std::endl;
  int_counter->Down();
  std::cout
    << "current value: " << int_counter->Get() << std::endl;
  int_counter->Up();
  std::cout
    << "current value: " << int_counter->Get() << std::endl;

  std::cout << "uint version --------------" << std::endl;
  Counter<unsigned int>::SharedPtr uint_counter(new Counter<unsigned int>(0));
  std::cout
    << "current value: " << uint_counter->Get() << std::endl;
  uint_counter->Down();
  std::cout
    << "current value: " << uint_counter->Get() << std::endl;
  uint_counter->Up();
  std::cout
    << "current value: " << uint_counter->Get() << std::endl;

  std::cout << "tension version -----------" << std::endl;
  Counter<Tension>::SharedPtr t_counter(new Counter<Tension>(Tension()));
  std::cout
    << "current value: " << t_counter->Get() << std::endl;
  t_counter->Down();
  std::cout
    << "current value: " << t_counter->Get() << std::endl;
  t_counter->Up();
  std::cout
    << "current value: " << t_counter->Get() << std::endl;

  return EXIT_SUCCESS;
}

#include "class/counter.hpp"

Counter::Counter(const int init_value) : count_(init_value) {}

void Counter::Up() {
  ++count_;
}

void Counter::Down() {
  --count_;
}

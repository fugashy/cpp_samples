#ifndef CLASS_COUNTER_HPP_
#define CLASS_COUNTER_HPP_
#include <memory>
#include <string>
#include <iostream>

template<class T>
class Counter {
 public:
  using SharedPtr = std::shared_ptr<Counter>;

  // 初期値
  Counter(const T state) : state_(state) {}
  ~Counter() = default;

  void Up() {
    ++state_;
  }

  void Down() {
    --state_;
  }

  T Get() const { return state_; }

 private:
  T state_;
};

class Tension {
 public:
  Tension() : tension_(std::string("normal")) {}

  Tension operator++() {
    tension_ = "hey!";
    return *this;
  }

  Tension operator--() {
    tension_ = "...";
    return *this;
  }

  friend std::ostream& operator<<(std::ostream& os, const Tension& o) {
    os << o.tension_;
    return os;
  }

 private:
  std::string tension_;
};

#endif

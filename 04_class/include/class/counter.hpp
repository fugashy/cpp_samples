#ifndef CLASS_COUNTER_HPP_
#define CLASS_COUNTER_HPP_
#include <memory>

class Counter {
 public:
  using SharedPtr = std::shared_ptr<Counter>;

  // 初期値
  Counter(const int init_value);
  ~Counter() = default;

  void Up();
  void Down();

  int Get() const { return count_; }

 private:
  int count_;
};

#endif

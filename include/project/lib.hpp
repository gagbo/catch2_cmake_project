#ifndef PROJECT__LIB_HPP__
#define PROJECT__LIB_HPP__

#include <string>

class Test {
 public:
  Test() = default;
  void display() const;
  inline std::string get_name() const { return name; }
 private:
  std::string name{"Test"};

};

#endif  // PROJECT__LIB_HPP__

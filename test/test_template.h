#include <iostream>

// 普通模版
template <class T1, class T2>
class Test {
 public:
  Test(T1 a, T2 b) : a_(a), b_(b) { std::cout << "模板化" << std::endl; }

 private:
  T1 a_;
  T2 b_;
};

//模板全特化  所有参数都定下来
// 类模板 不能隐式 必须显式
template <>
class Test<int, int> {
 public:
  Test(int a, int b) : a_(a), b_(b) { std::cout << "模板全特化" << std::endl; }

 private:
  int a_;
  int b_;
};

//模板偏特化  只限定其中一部分模版类型
template <class T>
class Test<int, T> {
 public:
  Test(int a, T b) : a_(a), b_(b) { std::cout << "模板偏特化" << std::endl; }

 private:
  int a_;
  T b_;
};

#include "./test_template.h"

int main() {
  // 编译器在找模版的时候，是先会匹配模版全特化，和模版偏特化，最后取匹配普通模板
  Test<double, double> t1(1.1, 1.1);
  Test<int, int> t2(1, 1);
  Test<int, char*> t3(1, "test");
  return 0;
}
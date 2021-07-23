#include <iostream>
class Solution {
public:
  int reverse_int(int a) {
    int ret = 0;
    int sign = 1;
    if (a < 0)
      sign = -1;

    while (a > 0) {
      ret = ret * 10 + a % 10;
      a /= 10;
    }

    return sign * ret;
  }
};

int main() {
  Solution s;
  auto ret = s.reverse_int(123);
  std::cout << "revers of 123:" << ret << std::endl;
}

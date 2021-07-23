#include "common.h"
//#include <math.h>

int guess(int x, long n) {
  cout << "guess " << x << " as sqrt of " << n << std::endl;

  long ret = x * x;

  if (ret > n) {
    return 1;

  } else if (ret < n) {
    return -1;
  } else {
    return 0;
  }
}
float find_sqrt(int n) {
  // monotonous for n and sqrt n
  int l = 1;
  int r = n;
  while (l < r) {
    float mid = (l + r) / 2;
    cout << "mid !!!" << mid << std::endl;
    auto gr = guess(mid, n);
    cout << "guess ret " << gr << " l is: " << l << " r is: " << r << " "
         << std::endl;
    if (gr > 0) {
      // mid too big.
      r = mid - 1;

    } else if (gr < 0) {
      l = mid + 1;

    } else {
      // mid == sqrt(n)?
      return mid;
    }
  }
  // in this case sqrt(n) is between l and r
  return (l + r) / 2;
}

int main() {
  auto ret = find_sqrt(13);
  cout << "sqrt of 13: " << ret << std::endl;
}
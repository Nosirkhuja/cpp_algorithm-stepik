//Даны целые числа 1<=n<=10^18, 2<=m<=10^5, необходимо найти остаток от деления n-го числа Фибоначчи на m

#include <cassert>
#include <iostream>

class Fibonacci {
 public:
  static int get_remainder(long long n, int m) {
    assert(n >= 1);
    assert(m >= 2);
      int* z = new int[m * 6 + 1]{ 0, 1 };
      int p = 0;
		for (int i = 2; i <= m * 6; i++) {
			z[i] = (z[i - 1] + z[i - 2]) % m;
			if (z[i] == 1 && z[i - 1] == m - 1) {
				p = i + 1;
				break;
			}
		}
		n = z[n % p];
		delete[] z;
		return n;
  }
};

int main(void) {
  long long n;
  int m;
  std::cin >> n >> m;
  std::cout << Fibonacci::get_remainder(n, m) << std::endl;
  return 0;
}

#include <cstdint>
#include <iostream>
#include <utility>

using namespace std;

uint64_t gcd(uint64_t a, uint64_t b) {
  uint64_t r = a % b;
  if (r == 0)
    return b;
  return gcd(b, r);
}

uint64_t lcm(uint64_t a, uint64_t b) {
  return a * b / gcd(a, b);
}

int main() {
  uint64_t x = 2;
  for (uint64_t i = 3; i <= 20; ++i)
    x = lcm(x, i); 
  cout << x << endl;
}

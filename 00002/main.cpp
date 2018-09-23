#include <cstdint>
#include <iostream>

using namespace std;

int main() {
  uint64_t a = 0, b = 1;
  uint64_t sum = 0;
  while(b <= 4000000) {
    if (b & 1) sum += b;
    int t = a;
    a = b;
    b += t;
  }
  cout << "Sum is " << sum << endl;
}

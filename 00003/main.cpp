#include <cstdint>
#include <cmath>
#include <vector>
#include <iostream>

using namespace std;

int main() {
  uint64_t x = 600851475143;
  uint64_t sqrtx = sqrt(x) + 1;

  vector<bool> isPrime(sqrtx, true); 
  for (uint64_t i = 4; i <= sqrtx; i += 2)
    isPrime[i] = false;
  for (uint64_t i = 6; i <= sqrtx; i += 3)
    isPrime[i] = false;
  for (uint64_t i = 5, gap = 2; i <= sqrtx; i += gap, gap = 6 - gap) {
    if (isPrime[i]) {
      for (uint64_t j = i << 1; j <= sqrtx; j += i)
        isPrime[j] = false;
    }
  }

  uint64_t factor;
  if (x % 3 == 0)
    factor = 3;
  for (uint64_t i = 5, gap = 2; i <= sqrtx; i += gap, gap = 6 - gap) {
    if (isPrime[i] && x % i == 0)
      factor = i;
  }
  
  cout << "The greatest prime factor is " << factor << endl;
}

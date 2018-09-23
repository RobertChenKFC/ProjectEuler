#include <iostream>
#include <string>

using namespace std;

int main() {
  int largest = -1;
  int largesti, largestj;
  for (int i = 999; i >= 100; --i) {
    for (int j = i; j >= 100; --j) {
      int prod = i * j;
      if (prod > largest) {
        auto x = to_string(prod);
        bool isPalindrome = true;
        for (int i1 = 0, i2 = x.length() - 1; i1 < i2; ++i1, --i2) {
          if (x[i1] != x[i2]) {
            isPalindrome = false;
            break;
          } 
        } 
        if (isPalindrome) {
          largest = prod;
          largesti = i, largestj = j;
        }
      }
    } 
  }
  cout << largest << " = " << largesti << " * " << largestj << endl;
}

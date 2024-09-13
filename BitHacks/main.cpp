#include <iostream>

bool checkKthBit(int n, int k) {
  return (n & (1 << k));
}

int main()
{
  std::cout << checkKthBit(4, 0) << "\n"; // 0
  std::cout << checkKthBit(4, 2) << "\n"; // 1
}
#include <iostream>
#include "bitHacks.h"

int main()
{
  std::cout << bitHackFunctions::checkKthBit(4, 0) << "\n"; // 0
  std::cout << bitHackFunctions::checkKthBit(4, 2) << "\n"; // 1

  auto NumOfSetBits = bitHackFunctions::countSetBits(3);
  std::cout << "Number of Set Bits are " << NumOfSetBits << "\n"; // 2
}
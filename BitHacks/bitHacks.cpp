#include "bitHacks.h"

bool bitHackFunctions::checkKthBit(int n, int k)
{
   return (n & (1 << k));
}

int bitHackFunctions::countSetBits(int n)
{
  int count = 0;
  while(n > 0)
  {
    if(n & 0x1)
      ++count;
    n = n >> 1;
  }
  return count;
}

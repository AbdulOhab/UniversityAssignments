//Bitwise Operators
#include <iostream>
int main()
{
 // logical not (false)

  // Bitwise operators
  i = 5 & 4;  // 101 & 100 = 100 (4) // and
  i = 5 | 4;  // 101 | 100 = 101 (5) // or
  i = 5 ^ 4;  // 101 ^ 100 = 001 (1) // xor
  i = 4 << 1; // 100 << 1  =1000 (8) // left shift
  i = 4 >> 1; // 100 >> 1  =  10 (2) // right shift
  i = ~4;     // ~00000100 = 11111011 (-5) // invert

  i=5; i &= 4; // 101 & 100 = 100 (4) // and
  i=5; i |= 4; // 101 | 100 = 101 (5) // or
  i=5; i ^= 4; // 101 ^ 100 = 001 (1) // xor
  i=5; i <<= 1;// 101 << 1  =1010 (10)// left shift
  i=5; i >>= 1;// 101 >> 1  =  10 (2) // right shift
}

#include <iostream>
#include<cstdint>
using namespace std;

int main()
{
    char  myChar  = 0; // -128   to +127
    short myShort = 0; // -32768 to +32767
    int   myInt   = 0; // -2^31  to +2^31-1
    long  myLong  = 0; // -2^31  to +2^31-1
    long long myL2 = 0; // -2^63 to +2^63-1

    std::cout << sizeof(myChar)  // 1 byte (per definition)
              << sizeof(myShort) // 2
#include <iostream>
#include <cstdint>
using namespace std;

int main()
{
  char  myChar  = 0; // -128   to +127
  short myShort = 0; // -32768 to +32767
  int   myInt   = 0; // -2^31  to +2^31-1
  long  myLong  = 0; // -2^31  to +2^31-1
  long long myL2 = 0; // -2^63 to +2^63-1

  std::cout << sizeof(myChar)  // 1 byte (per definition)
            << sizeof(myShort) // 2
            << sizeof(myInt)   // 4
            << sizeof(myLong)  // 4
            << sizeof(myL2);   // 8

  int8_t   myInt8   = 0; // 8 bits
  int16_t  myInt16  = 0; // 16 bits
  int32_t  myInt32  = 0; // 32 bits
  int64_t  myInt64  = 0; // 64 bits

  signed char  myChar  = 0; // -128   to +127
  signed short myShort = 0; // -32768 to +32767
  signed int   myInt   = 0; // -2^31  to +2^31-1
  signed long  myLong  = 0; // -2^31  to +2^31-1
  signed long long myL2= 0; // -2^63  to +2^63-1

  unsigned char  myChar  = 0; // 0 to 255
  unsigned short myShort = 0; // 0 to 32767
  unsigned int   myInt   = 0; // 0 to 2^32-1
  unsigned long  myLong  = 0; // 0 to 2^32-1
  unsigned long long myL2= 0; // 0 to 2^64-1

  unsigned uInt; // unsigned int
  signed sInt;   // signed int

  short myShort; // short int
  long myLong;   // long int

  int myOct = 062;  // octal notation (0)
  int myHex = 0x32; // hexadecimal notation (0x)
  int myBin = 0b0011'0010; // binary notation (0b)

  // Floating-point types
  float  myFloat; // ~7 digits
  double myDouble; // ~15 digits
  long double myLongDouble; // typically same as double

  myFloat = 12345.678; // rounded to 12345.68
  myFloat = 3e2; // 3*10^2 = 300
  myFloat = 0xFp2; // 15*2^2 = 60

  // Literal suffixes
  int i = 10;
  long l = 10L;
  unsigned long ul = 10UL;

  float f = 1.23F;
  double d = 1.23;
  long double ld = 1.23L;

  // Char type
  char c = 'x'; // assigns 120 (ASCII for 'x')
  cout << c; // prints 'x'

  i = c; // assigns 120
  cout << i; // prints 120
  cout << static_cast<char>(i); // C++ new-style cast
  cout << (char)i; // C-style cast

  char ascii = u8'x'; // use UTF-8 encoding
  char8_t c8 = 'A'; // UTF-8 character
  char16_t c16 = u'€'; // UTF-16 character
  char32_t c32 = U'??'; // UTF-32 character

  // Bool type
  bool b = false; // true or false value

  i = false; // 0
  int j = true; // 1
  b = static_cast<bool>(32); // true
    int myArray[3]; // integer array with 3 elements

  // Array assignment
  myArray[0] = 1;
  myArray[1] = 2;
  myArray[2] = 3;

  int myArray2[3] = { 1, 2, 3 };
  int myArray3[] = { 1, 2, 3 };

  std::cout << myArray[0]; // "1"

  // Multi-dimensional arrays
  int myArray4[2][2] = { { 0, 1 }, { 2, 3 } };
  myArray4[0][0] = 0;
  myArray4[0][1] = 1;

  // Dynamic arrays
  int* p = new int[3]; // dynamically allocated array
  *(p+1) = 10; // p[1] = 10;
  delete[] p; // release allocated array
  int myArray[2] = { 1, 2 };
  int length = std::size(myArray); // 2
}

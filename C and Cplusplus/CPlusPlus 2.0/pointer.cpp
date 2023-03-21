#include <iostream>

int main()
{
  // Creating pointers
  // int* p; // pointer to an integer
  // int *q; // alternative syntax
  // int *a, *b, *c; // multiple pointers

  //int i = 10;
  // p = &i; // address of i assigned to p

  // // Dereferencing pointers
  // std::cout << "Address of i: " <<  p<<"\n"; // ex. 0017FF1C
  // std::cout << "Value of i: "   << *p<<"\n"; // "10"

   //p = &i;  // address of i assigned to p
  int p = 20; // value of i changed through p
  int* p2 = &p; // copy of p (copies address stored in p)
  int** r = &p2; // pointer to p (assigns address of p)

  std::cout << "Address of p: " << r<<std::endl;  // ex. 0017FF28
  std::cout << "Address of i: " << *r<<std::endl;// ex. 0017FF1C
  std::cout << "Value of i: "   << **r<<std::endl;// "20"

  //Dynamic allocation
  int* d = new int; // dynamic allocation
  delete d; // release allocated memory

  // Null pointer
  d = nullptr; // mark as null pointer
  delete d; // safe

  if (d != nullptr) { *d = 10; } // check for null pointer
  
  if (d) { *d = 10; } // alternative
  int* g = 0; // null pointer (unused pointer)
  int* h = NULL; // null pointer
  int* q = nullptr; // ok
  //int i = nullptr; // error
  bool b = (bool) nullptr; // false
  std::nullptr_t mynull = nullptr; // ok 
 }
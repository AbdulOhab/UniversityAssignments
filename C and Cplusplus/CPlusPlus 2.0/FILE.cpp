#include <iostream>
using namespace std;
int main()
{
  cout << "Error in " << __FILE__ << " at line " << __LINE__<<"\n";
  cout << "Error in " << __DATE__ << " at line " << __TIME__;
}
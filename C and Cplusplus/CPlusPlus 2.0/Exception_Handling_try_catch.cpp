//Exception Handling
#include <iostream>
using namespace std;

// int divide(double x, double y)
// {
//   if (y == 0) throw 0;
//   return x / y;
// }

// int main()
// {
//   try {
//     divide(10,0);
//   }
//   catch(int& e) {
//     cout << "Error code: " << e;
//   }
//   catch(char& e) {
//     cout << "Error char: " << e;
//   }
//   catch(...) { cout << "Error"; }
// }
int main()
{
    try  {
       throw 'a';
    }
    catch (int x)  {
        cout << "Caught " << x;
    }
    catch (...)  {
        cout << "Default Exception\n";
    }
    return 0;
}
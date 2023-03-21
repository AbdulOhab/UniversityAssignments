/*Streams
• I/O Streams are used for input and output data to and from the program
• C++ provides class for accessing input output operations
• Iostream is a base class for all classes
• Istream is for input
• Cin is the object of istream
• ostream is for output
• Cout is an object of ostream
ifstream is a file input stream
• ofstream is a file output stream
Writing in a File*/
#include <iostream>
#include<fstream >
using namespace std;
//Writing in a File
int main()
{
    ofstream write("Test.txt",ios::trunc);
    write<<"John"<<endl;
    write<<25<<endl;
    write<<"CS"<<endl;
    write.close();
}
// writing on a text file
//#include <iostream>
//#include <fstream>
//using namespace std;
//
//int main () {
//  ofstream myfile ("example.txt");
//  if (myfile.is_open())
//  {
//    myfile << "This is a line.\n";
//    myfile << "This is another line.\n";
//    myfile.close();
//  }
//  else cout << "Unable to open file";
//  return 0;
//}
//

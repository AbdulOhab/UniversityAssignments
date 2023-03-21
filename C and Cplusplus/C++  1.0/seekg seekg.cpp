#include <iostream>
#include <fstream>
using namespace std;

//int main ()
//{
//    ofstream myfile("example.txt");
//    if (myfile.is_open())
//    {
//        myfile.seekp(4);
//        myfile << "This is a line.\n";
//        myfile.close();
//    }
//    else cout << "Unable to open file";
//    return 0;
//}
int main ()
{
    ifstream in("example.txt");
    if (!in) cout << "Unable to open file";
    else
    {
        char str[100];
        in.seekg(6);
        in>>str;
        cout<<str;
        in.close();
    }
    return 0;
}

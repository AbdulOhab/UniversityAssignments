#include <iostream>
#include <fstream>
using namespace std;

//int main ()
//{
//    ofstream myfile("example.txt");
//    if (myfile.is_open())
//    {
//        cout<<myfile.tellp()<<endl;
//        myfile << "This is";
//        cout<<myfile.tellp()<<endl;
//        myfile.close();
//    }
//    else cout << "Unable to open file";
//    return 0;cout<<myfile.tellp()<<endl;
//}
int main ()
{
    ifstream in("example.txt");
    if (!in) cout << "Unable to open file";
    else
    {
        char str[100];
        cout<<in.tellg()<<endl;
        in>>str;
        cout<<str;
        cout<<in.tellg()<<endl;
        in.close();
    }
    return 0;
}

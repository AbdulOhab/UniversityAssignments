// ios::eof example
#include <iostream>
#include <fstream>
using namespace std;

int main ()
{

    ifstream in;
    in.open("example.txt");

    if(!in)
        cout<<"cannot open file";
    else
    {
        char str[100];
        while(!in.eof())
        {
            in.getline(str,100);
            cout<<str<<endl;
        }

    }

    in.close();

    return 0;
}

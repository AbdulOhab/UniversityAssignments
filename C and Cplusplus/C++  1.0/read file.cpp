#include <iostream>
#include<fstream >
using namespace std;
int main()
{
    ifstream in("Test.txt");
    if(!in)
        cout<<"file cannot open"<<endl;
    else
    {
        string s;
        in>>s;
        cout<<s;
        in.close();

    }
    return 0;
}

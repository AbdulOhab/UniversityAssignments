#include <iostream>
#include<fstream >
using namespace std;
int main()
{
    ofstream out;
    out.open("Test.txt");
    if(out)
        cout<<"file open";
    else
        cout<<"connot open file";
    out.close();

//  ifstream in;
//  in.open("Test.txt");
//  if(!in)
//  cout<<"connot open file"<<endl;
}

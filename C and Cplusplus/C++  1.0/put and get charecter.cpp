#include <iostream>
#include<fstream>
using namespace std;
int main()
{
    int count=0;
    char c;
    cout<<"INPUT TEXT \n";
    cin.get(c);
    while (c)
    {
        cout.put(c);
        count++;
        cin.get( c );
    }
    cout<< "\n Number of characters ="<<count;
    return 0;
}

//
//int main()
//{
//    ofstream fout;
//    char ch;
//
//    fout.open("Text.txt");			//Statement 1
//
//    do							//Statement 2
//    {
//
//        cin.get(ch);
//        fout.put(ch);
//
//    }
//    while(ch);
//
//    fout.close();
//
//    cout<<"\nData written successfully...";
//
//}

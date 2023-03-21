#include <iostream>
using namespace std;

int main()
{
    int i=0;
AGAIN:
    cout<<i<<endl;

    ++i;
    if(i<=20)

        goto AGAIN;
}

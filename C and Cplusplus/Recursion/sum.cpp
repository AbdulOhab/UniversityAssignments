#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <vector>
using namespace std;
using ull = unsigned long long;
typedef long long ll;

int test(int r)
{
    if(r  == 0)
    {
        return 0;
    }
    else
    {
        r--;
        int a;
        cin>>a;
        return  a+test(r);
    }

}
int main()
{
    cout<<"Hello World";
    int a;
    cin>>a;
    for(int i =0;i<a;i++)
    {
        int b;
        cin>>b;
        int result = 0;
        result += test(b);
        cout << result << endl;
    }

    return 0;
}

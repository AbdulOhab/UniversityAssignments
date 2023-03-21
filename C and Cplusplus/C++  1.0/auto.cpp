#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> vec(10);       // Auto deduce type to be iterator of a vector of ints.
    for(auto it = vec.begin(); it != vec.end(); vec ++)
    {
        cin >> *it;
    }
    return 0;
}

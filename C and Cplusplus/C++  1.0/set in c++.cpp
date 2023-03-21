#include <iostream>
#include <set>
using namespace std;
int main()
{
    set < int > amarSet;
    int in;

    // icchamoto 10 ta element di
    for (int i=1; i<=10; i++)
    {
        cin >> in;
        amarSet.insert(in);
    }

    set < int > :: iterator it;

    // koita element ache dekha jak!
    cout << "There are " << amarSet.size() << " elements in the set!\n";

    // ebar element gula print kore dekhi!
    for(it = amarSet.begin(); it != amarSet.end(); it++)
    {
        cout << *it << endl;
    }

    return 0;
}

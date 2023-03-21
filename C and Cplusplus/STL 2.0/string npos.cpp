//static const size_t npos = -1;
#include <bits/stdc++.h>
using namespace std;

// Function that using string::npos
// to find the index of the occurrence
// of any string in the given string
void fun(string s1, string s2)
{
    int found = s1.find(s2);
    if (found != string::npos) {

        cout << "first " << s2 << " found at: " << int(found) << endl;
    }

    else
        cout << s2 << " is not in"<< "the string" << endl;
}
int main()
{
    string s1 = "geeksforgeeks";
    string s2 = "for";
    string s3 = "no";
    fun(s1, s2);

    return 0;
}

#include<algorithm>
#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <set>
#include <vector>
using namespace std;
using ull=unsigned long long;
typedef long long ll;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        char temp;
        cin >> s;
        int n, i;
        cin >> n;
        vector<char> a;
        for(i = 0; i<n; i++)
        {
            cin >> temp;
            a.push_back(temp);
        }
        int l = s.length();
        set<char> set;
        for(i = 0; i<l; i++)
        {
            set.insert(s[i]);
        }
        int flag = 1;
        for(auto it = set.begin(); it!=set.end(); it++)
        {
            if(find(a.begin(), a.end(), *it) == a.end())
            {
                flag = 0;
                break;
            }
        }

        if(flag) cout << 1 << "\n";
        else cout << 0 << "\n";
    }
    return 0;
}

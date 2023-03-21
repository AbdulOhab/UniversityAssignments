#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
using ull = unsigned long long;

int main(int ab_ohab, char const *abohab[]){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
  multiset<int> s = { 1, 1, 2, 1, 3 };
  s.insert(50);

  // cout<<s.count(1)<<endl;
	auto it=s.find(1);
	s.erase(it);
	for ( auto u : s ) cout << u << " ";
	cout << endl;
	return 0;
}

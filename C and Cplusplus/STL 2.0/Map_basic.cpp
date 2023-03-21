//Map basic
#include<bits/stdc++.h>
using namespace std;

int main()
{
   vector<long long> v= {1,2032029302,2329048390,2032029302};
   map<long long,long long>cnt;

   for(auto x: v) cnt[x]++;
//
//	for(int x=0;x<v.size();x++)
//	{
//		cnt[v[x]]++;
//	}
   for(auto u: cnt)
   {
       cout<<u.first<<"  "<<u.second<<endl;
   }
   //cout<<cnt[2329048390]<<endl;
}

int main()
{
    map<int,int> vis;
    vector<int>v={1,2,2,3,3,4,1,6};
    for(auto u:v) vis[u]++;
    for(auto u:vis) cout<<u.first<<" "<<u.second<<endl;
}

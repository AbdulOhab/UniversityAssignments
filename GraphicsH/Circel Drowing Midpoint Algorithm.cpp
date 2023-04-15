#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
typedef long long ll;
typedef double dl;
#define endl "\n"
#define all(a) (a).begin(),(a).end()
#define sz(x) (int)x.size()
const double PI = acos(-1);
const double eps = 1e-9;
#define MOD 1000000007
#define mem(a,val) memset(a,val,sizeof(a))
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main(int argc, char const *argv[])
{
  int x= 4;
  int y = -4;
  int r = 14;

  //cin>>x>>y>>r;

  int x0 = x;
  int y0 = r;

  int dp0 = 1-r;

  int x1,y1,dp1;
  cout<<"DPk \t\t  DPk+1 \t\t  Xk+1,Yk+1\n"<<endl;
  cout<<"\t\t\t\t"<<x0<<","<<y0<<endl;
  for(int i=0;i<10;i++){

    if(dp0<0){
      x1 = x0 + 1;
      y1 = y0;
      dp1 = dp0+ (2*x1)+1;
      cout<<dp0<<"\t";
      cout<<dp0<<"+2*"<<x1<<"+1 = "<< dp1<<"\t\t";
      cout<<x1<<","<<y1<<endl;
    }
    else if(dp0>=0){
      x1 = x0 + 1;
      y1 = y0 - 1;
      dp1 = dp0 + (2*x1)+1 - (2*y1);
      cout<<dp0<<"\t";
      cout<<dp0<<"+2*"<<x1<<"+1 - 2*"<<y1<<"= "<<dp1<<"\t\t";
      cout<<x1<<","<<y1<<endl;
    }
    dp0 = dp1;
    x0 = x1;
    y0 = y1;
  }

   return 0;
}

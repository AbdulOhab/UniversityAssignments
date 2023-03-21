#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

struct Ques
{
    double weight,price,unit;
};

bool compare(Ques a,Ques b)
{
    return a.unit>b.unit;
}

int main()
{
    ll n,W;
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    Ques arr[100100];
    cin>>n>>W;
    for(ll i=1;i<=n;i++)
    {
        cin>>arr[i].weight>>arr[i].price;
        arr[i].unit=arr[i].price/arr[i].weight;
    }
    sort(&arr[0],&arr[n],compare);
    ll flag=0;
    for(ll i=1;i<=n;i++)
    {
        if(W > arr[i].weight)
        {
            flag=flag+arr[i].price;
            W   =W - arr[i].weight;
        }
        else
        {
            flag = flag + W*arr[i].unit;
            W = 0;
        }
    }
    cout << "Total Profit = " << flag << endl ;
    return 0;
}

#include<bits/stdc++.h>
using namespace std;

struct item
{
    double w,p,u;
};
bool compare(item A, item B)
{
    return A.u>B.u;
}
int main()
{
    int n, W;
    item arr[100];
    cin>>n>>W;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i].w>>arr[i].p;
        arr[i].u = arr[i].p/arr[i].w;
    }
    sort(&arr[0],&arr[n],compare); //sorting based on unit price//

    int P = 0;
    for(int i=0;i<n;i++)
    {
        if(W>arr[i].w)
        {
            P = P + arr[i].p;
            W = W - arr[i].w;
        }
        else
        {
            P = P + W * arr[i].u;
            W = 0;
        }
    }
    cout<< "Total Profit = "<<P<<endl;
}

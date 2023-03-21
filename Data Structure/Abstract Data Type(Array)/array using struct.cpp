#include <bits/stdc++.h>
#include<algorithm>
using namespace std;
struct age
{
    int x,y;
};

bool compare(age a,age b)
{
    if(a.x>b.x) return true;
    if(a.x==b.x && a.y>b.y) return true;
    return false;
}

int main()
{
    //int arr[] = { 3,12,20,1-5};
    age arr[] = { { 60, 10 }, { 100, 20 }, { 120, 30 } };
    int n = sizeof(arr) / sizeof(arr[0]);
    sort(arr,arr+n,compare);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i].x<<" "<<arr[i].y<<endl;
    }

    return 0;
}

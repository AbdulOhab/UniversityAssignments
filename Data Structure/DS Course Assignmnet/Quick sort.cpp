#include<bits/stdc++.h>
#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <vector>
using namespace std;
using ull=unsigned long long;
typedef long long ll;
int Quick_sort_Partitioning_descending(ll arr[],ll first,ll last);
int Quick_sort_descending(ll arr[],ll first,ll last);
int Quick_sort_ascending(ll arr[],ll first,ll last);
int Quick_sort_Partitioning_ascending(ll arr[],ll first,ll last);

int main()
{
    freopen("input1.txt","r",stdin);
    freopen("output_File1.txt","w",stdout);
    ll n;
    cin>>n;
    ll v[n];
    for(ll i=1; i<=n; i++)
    {
        cin >>v[i];
    }
    //Quick_sort_descending(v,1,n);
    Quick_sort_ascending(v,1,n);
    for(ll k=1; k<=n; k++)
    {
        cout <<v[k]<<endl;
    }
    return 0;
}



int Quick_sort_Partitioning_descending(ll arr[],ll first,ll last)
{
    ll pivot = arr[last];
    ll i=first-1;
    for(ll j=first; j<last; j++)
    {
        if(arr[j]>=pivot)
        {
            i=i+1;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[last]);
    return i+1;
}


int Quick_sort_descending(ll arr[],ll first,ll last)
{
    ll tmp;
    if(first<last)
    {
        tmp= Quick_sort_Partitioning_descending(arr,first,last);
        Quick_sort_descending(arr,first,tmp-1);
        Quick_sort_descending(arr,tmp+1,last);
    }
}

int Quick_sort_Partitioning_ascending(ll arr[],ll first,ll last)
{
    ll pivot = arr[last];
    ll i=first-1;
    for(ll j=first; j<last; j++)
    {
        if(arr[j]<=pivot)
        {
            i=i+1;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[last]);
    return i+1;
}

int Quick_sort_ascending(ll arr[],ll first,ll last)
{
    ll tmp;
    if(first<last)
    {
        tmp= Quick_sort_Partitioning_ascending(arr,first,last);
        Quick_sort_ascending(arr,first,tmp-1);
        Quick_sort_ascending(arr,tmp+1,last);
    }
}


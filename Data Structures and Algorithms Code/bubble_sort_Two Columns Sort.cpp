#include<bits/stdc++.h>
#include <algorithm>
#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <vector>
using namespace std;
using ull=unsigned long long;
typedef unsigned long ul;
using ll=long long int;

int bubble_sort(ll n,ll v[],ll x[])
{
    ll i,j;
    for(i=1; i<=n-1; i++)
    {
        for(j=1; j<=n-i; j++)
        {
            if(v[j]<v[j+1])
            {
                swap(v[j],v[j+1]);
                swap(x[j],x[j+1]);
            }

            if(v[j]==v[j+1])
            {
                if(x[j]<x[j+1])
                {
                    swap(x[j],x[j+1]);
                }
            }
        }
    }
}

int  main()
{
    clock_t time1,time2 ,total;
    time1= clock();

    freopen("input.txt","r",stdin);
    freopen("output_File.txt","w",stdout);
    ll n;
    cin>>n;
    ll v[n];
    ll x[n];


    for(ll i=1; i<=n; i++)
    {
        cin >>v[i]>>x[i];
    }
    bubble_sort(n,v,x);
    ll k;
    for(k=1;k<=n;k++)
    {
        cout <<v[k]<< " " << x[k] << endl;
    }
    time2 = clock();
    total =time2-time1/CLOCKS_PER_SEC;
    cout << "Total Time = " <<total << endl;

    return 0;
}


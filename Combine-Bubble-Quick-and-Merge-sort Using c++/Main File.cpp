///MD ABdul Ohab
///ID:2019000000061.
#include<bits/stdc++.h>
#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <vector>
#include <fstream>
using namespace std;
using ull=unsigned long long;
typedef long long ll;


void bubble_ascending_order(ll n,ll v[])
{
    ll i,j;
    for(i=1; i<=n-1; i++)
    {
        for(j=1; j<=n-i; j++)
        {
            if(v[j]>v[j+1])
            {
                swap(v[j],v[j+1]);
            }
        }
    }
}

void bubble_descending_order(ll n,ll v[])
{
    ll i,j;
    for(i=1; i<=n-1; i++)
    {
        for(j=1; j<=n-i; j++)
        {
            if(v[j]<v[j+1])
            {
                swap(v[j],v[j+1]);
            }
        }
    }
}

int bubble_Sort_ascending_input(const string& input_file, const string& output_file)
{
    fstream input(input_file, fstream::in); //read
    fstream output(output_file, fstream::out); //write
    ll n;
    input>>n;
    ll t[n];
    for(ll i=1; i<=n; i++)
    {
        input>>t[i];
    }
    bubble_ascending_order(n,t);
    for(ll k=1; k<=n; k++)
    {
        output<<t[k]<<endl;
    }
    input.close();
    output.close();
}


int bubble_Sort_descending_input(const string& input_file, const string& output_file)
{
    fstream input(input_file, fstream::in); //read
    fstream output(output_file, fstream::out); //write
    ll n;
    input>>n;
    ll t[n];
    for(ll i=1; i<=n; i++)
    {
        input>>t[i];
    }
    bubble_descending_order(n,t);
    for(ll k=1; k<=n; k++)
    {
        output<<t[k]<<endl;
    }
    input.close();
    output.close();
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


void Quick_sort_ascending(ll arr[],ll first,ll last)
{
    ll tmp;
    if(first<last)
    {
        tmp= Quick_sort_Partitioning_ascending(arr,first,last);
        Quick_sort_ascending(arr,first,tmp-1);
        Quick_sort_ascending(arr,tmp+1,last);
    }
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


void Quick_sort_descending(ll arr[],ll first,ll last)
{
    ll tmp;
    if(first<last)
    {
        tmp= Quick_sort_Partitioning_descending(arr,first,last);
        Quick_sort_descending(arr,first,tmp-1);
        Quick_sort_descending(arr,tmp+1,last);
    }
}


void Quick_Sort_descending_input(const string& input_file, const string& output_file)
{
    fstream input(input_file, fstream::in); //read
    fstream output(output_file, fstream::out); //write
    ll n;
    input>>n;
    ll t[n];
    for(ll i=1; i<=n; i++)
    {
        input>>t[i];
    }
    Quick_sort_ascending(t,1,n);
    for(ll k=1; k<=n; k++)
    {
        output<<t[k]<<endl;
    }
    input.close();
    output.close();
}

void Quick_Sort_ascending_input(const string& input_file, const string& output_file)
{
    fstream input(input_file, fstream::in); //read
    fstream output(output_file, fstream::out); //write
    ll n;
    input>>n;
    ll t[n];
    for(ll i=1; i<=n; i++)
    {
        input>>t[i];
    }
    Quick_sort_descending(t,1,n);
    for(ll k=1; k<=n; k++)
    {
        output<<t[k]<<endl;
    }
    input.close();
    output.close();
}


void Merge_function_ascending(ll first,ll mid,ll last,ll arr[])
{
    ll i = first, j = mid + 1;
    ll tmp[100000], k = 1 ;

    while(i<=mid && j<=last)
    {
        if(arr[i]<arr[j])
        {
            tmp[k++] = arr[i++];
        }
        else
        {
            tmp[k++] = arr[j++];
        }
    }
    while(i<=mid)
    {
        tmp[k++] = arr[i++];
    }
    while(j<=last)
    {
        tmp[k++] = arr[j++];
    }
    for(k=1,i=first; i<=last; k++,i++)
    {
        arr[i] = tmp[k];
    }
}

void mergeSort_ascending(ll first,ll last,ll arr[])
{
    if(first==last) return ;
    ll mid = (first+last)/2;
    mergeSort_ascending(first,mid,arr);
    mergeSort_ascending(mid+1,last,arr);
    Merge_function_ascending(first,mid,last,arr);
}

void Merge_Sort_ascending_input(const string& input_file, const string& output_file)
{
    fstream input(input_file, fstream::in); //read
    fstream output(output_file, fstream::out); //write
    ll n;
    input>>n;
    ll t[n];
    for(ll i=1; i<=n; i++)
    {
        input>>t[i];
    }
    mergeSort_ascending(0,n-1,t);
    for(ll k=1; k<=n; k++)
    {
        output<<t[k]<<endl;
    }
    input.close();
    output.close();
}

void Merge_function_descending(ll first,ll mid,ll last,ll arr[])
{
    ll i = first, j = mid + 1;
    ll tmp[100000], k = 1 ;

    while(i<=mid && j<=last)
    {
        if(arr[i]>arr[j])
        {
            tmp[k++] = arr[i++];
        }
        else
        {
            tmp[k++] = arr[j++];
        }
    }
    while(i<=mid)
    {
        tmp[k++] = arr[i++];
    }
    while(j<=last)
    {
        tmp[k++] = arr[j++];
    }
    for(k=1,i=first; i<=last; k++,i++)
    {
        arr[i] = tmp[k];
    }
}

void mergeSort_descending(ll first,ll last,ll arr[])
{
    if(first==last) return ;
    ll mid = (first+last)/2;
    mergeSort_descending(first,mid,arr);
    mergeSort_descending(mid+1,last,arr);
    Merge_function_descending(first,mid,last,arr);
}

void Merge_Sort_descending_input(const string& input_file, const string& output_file)
{
    fstream input(input_file, fstream::in); //read
    fstream output(output_file, fstream::out); //write
    ll n;
    input>>n;
    ll t[n];
    for(ll i=1; i<=n; i++)
    {
        input>>t[i];
    }
    mergeSort_descending(0,n-1,t);
    for(ll k=1; k<=n; k++)
    {
        output<<t[k]<<endl;
    }
    input.close();
    output.close();
}

int main()
{
    clock_t t26 = clock();
    Merge_Sort_ascending_input("input1.txt","Merge_output_ascending_1.txt");
    clock_t t27 = clock();
    clock_t tt13 = (t27-t26)/CLOCKS_PER_SEC;

    clock_t t28 = clock();
    Merge_Sort_ascending_input("input2.txt","Merge_output_ascending_2.txt");
    clock_t t29 = clock();
    clock_t tt14 = (t29-t28)/CLOCKS_PER_SEC;

    clock_t t30 = clock();
    Merge_Sort_ascending_input("input3.txt","Merge_output_ascending_3.txt");
    clock_t t31 = clock();
    clock_t tt15 = (t31-t30)/CLOCKS_PER_SEC;

    clock_t t32 = clock();
    Merge_Sort_descending_input("input1.txt","Merge_output_descending_1.txt");
    clock_t t33 = clock();
    clock_t tt16 = (t33-t32)/CLOCKS_PER_SEC;

    clock_t t34 = clock();
    Merge_Sort_descending_input("input2.txt","Merge_output_descending_2.txt");
    clock_t t35 = clock();
    clock_t tt17 = (t35-t34)/CLOCKS_PER_SEC;

    clock_t t36 = clock();
    Merge_Sort_descending_input("input3.txt","Merge_output_descending_3.txt");
    clock_t t37 = clock();
    clock_t tt18 = (t37-t36)/CLOCKS_PER_SEC;

    clock_t t1 = clock();
    bubble_Sort_ascending_input("input1.txt","bubble_output_ascending_1.txt");
    clock_t t2 = clock();
    clock_t tt1 = (t2-t1)/CLOCKS_PER_SEC;

    clock_t t3 = clock();
    bubble_Sort_ascending_input("input2.txt","bubble_output_ascending_2.txt");
    clock_t t4 = clock();
    clock_t tt2 = (t4-t3)/CLOCKS_PER_SEC;

    clock_t t5 = clock();
    bubble_Sort_ascending_input("input3.txt","bubble_output_ascending_3.txt");
    clock_t t6 = clock();
    clock_t tt3 = (t6-t5)/CLOCKS_PER_SEC;

    clock_t t7 = clock();
    bubble_Sort_descending_input("input1.txt","bubble_output_descending_1.txt");
    clock_t t8 = clock();
    clock_t tt4 = (t8-t7)/CLOCKS_PER_SEC;

    clock_t t9 = clock();
    bubble_Sort_descending_input("input2.txt","bubble_output_descending_2.txt");
    clock_t t10 = clock();
    clock_t tt5 = (t10-t9)/CLOCKS_PER_SEC;

    clock_t t11 = clock();
    bubble_Sort_descending_input("input3.txt","bubble_output_descending_3.txt");
    clock_t t12 = clock();
    clock_t tt6 = (t12-t11)/CLOCKS_PER_SEC;


//      clock_t t13 = clock();
//      Quick_Sort_ascending_input("input1.txt","Quick_output_ascending_1.txt");
//      clock_t t14 = clock();
//      clock_t tt7 = (t14-t13)/CLOCKS_PER_SEC;
//
//      clock_t t15 = clock();
//      Quick_Sort_ascending_input("input2.txt","Quick_output_ascending_2.txt");
//      clock_t t16 = clock();
//      clock_t tt8 = (t16-t15)/CLOCKS_PER_SEC;
//
//      clock_t t17 = clock();
//      Quick_Sort_ascending_input("input3.txt","Quick_output_ascending_3.txt");
//      clock_t t18 = clock();
//      clock_t tt9 = (t18-t17)/CLOCKS_PER_SEC;
//
//      clock_t t20 = clock();
//      Quick_Sort_descending_input("input1.txt","Quick_output_descending_1.txt");
//      clock_t t21 = clock();
//      clock_t tt10 = (t21-t20)/CLOCKS_PER_SEC;
//
//      clock_t t22 = clock();
//      Quick_Sort_descending_input("input2.txt","Quick_output_descending_2.txt");
//      clock_t t23 = clock();
//      clock_t tt11 = (t23-t22)/CLOCKS_PER_SEC;
//
//      clock_t t24 = clock();
//      Quick_Sort_descending_input("input3.txt","Quick_output_descending_3.txt");
//      clock_t t25 = clock();
//      clock_t tt12 = (t25-t24)/CLOCKS_PER_SEC;


///----------------------------------time--------------------------------------------
    ofstream file;
    file.open("output_final_result.txt",fstream::out);

    file<<"Input 1 Result:-"<<endl;
    file<<"Bubble Sort :  "<<"Ascending order  :"<<tt1<<"s"<<endl;
    file<<"Bubble Sort :  "<<"Descending order :"<<tt4<<"s"<<endl;
    //file<<"Quick Sort  :  "<<"Ascending order  :"<<tt7<<"s"<<endl;
    //file<<"Quick Sort  :  "<<"Descending order :"<<tt10<<"s"<<endl;
    file<<"Merge Sort  :  "<<"Ascending order  :"<<tt13<<"s"<<endl;
    file<<"Merge Sort  :  "<<"Descending order :"<<tt16<<"s"<<endl;
    file<<"Best Sorting Ascending: "; /// tt1 tt7 tt13
    //if(tt1<tt7 and tt1<tt13) file<<"Bubble Sort."<<endl;
    //else if(tt7<tt3)file<<"Quick Sort."<<endl;
    //else file<<"Merge Sort."<<endl;

    if(tt1>tt13) file<<"Bubble Sort."<<endl ;
    else file<<"Merge Sort."<<endl;

    file<<"Best Sorting Descending: "; /// tt4 tt10 tt16
//    if(tt4<tt10 and tt4<tt16) file<<"Bubble Sort."<<endl;
//    else if(tt10<tt16)file<<"Quick Sort."<<endl;
//    else file<<"Merge Sort."<<endl;
    if(tt4<tt16) file<<"Bubble Sort."<<endl;
    else file<<"Merge Sort."<<endl;

    file<<"\n";
    file<<"Input 2 Result:-"<<endl;
    file<<"Bubble Sort :  "<<"Ascending order  :"<<tt2<<"s"<<endl;
    file<<"Bubble Sort :  "<<"Descending order :"<<tt5<<"s"<<endl;
    //file<<"Quick Sort  :  "<<"Ascending order  :"<<tt8<<"s"<<endl;
    //file<<"Quick Sort  :  "<<"Descending order :"<<tt11<<"s"<<endl;
    file<<"Merge Sort  :  "<<"Ascending order  :"<<tt14<<"s"<<endl;
    file<<"Merge Sort  :  "<<"Descending order :"<<tt17<<"s"<<endl;
    file<<"Best Sorting Ascending: "; /// tt2 tt8 tt14
//    if(tt2<tt8 and tt2<tt14) file<<"Bubble Sort."<<endl;
//    else if(tt8<tt14)file<<"Quick Sort."<<endl;
//    else file<<"Merge Sort."<<endl;
    if(tt2<tt14) file<<"Bubble Sort."<<endl;
    else file<<"Merge Sort."<<endl;

    file<<"Best Sorting Descending: "; /// tt5 tt11 tt16
//    if(tt5<tt11 and tt11<tt16) file<<"Bubble Sort."<<endl;
//    else if(tt11<tt16)file<<"Quick Sort."<<endl;
//    else file<<"Merge Sort."<<endl;
    if(tt5<tt16) file<<"Bubble Sort."<<endl;
    else file<<"Merge Sort."<<endl;

    file<<"\n";
    file<<"Input 3 Result:-"<<endl;
    file<<"Bubble Sort :  "<<"Ascending order  :"<<tt3<<"s"<<endl;
    file<<"Bubble Sort :  "<<"Descending order :"<<tt6<<"s"<<endl;
    //file<<"Quick Sort  :  "<<"Ascending order  :"<<tt9<<"s"<<endl;
    //file<<"Quick Sort  :  "<<"Descending order :"<<tt12<<"s"<<endl;
    file<<"Merge Sort  :  "<<"Ascending order  :"<<tt15<<"s"<<endl;
    file<<"Merge Sort  :  "<<"Descending order :"<<tt18<<"s"<<endl;
    file<<"Best Sorting Ascending: "; /// tt3 tt9 tt15
//    if(tt3<tt9 and tt3<tt15) file<<"Bubble Sort."<<endl;
//    else if(tt9<tt15)file<<"Quick Sort."<<endl;
//    else file<<"Merge Sort."<<endl;
    if(tt3<tt15) file<<"Bubble Sort."<<endl;
    else file<<"Merge Sort."<<endl;

    file<<"Best Sorting Descending: "; /// tt6 tt12 tt18
//    if(tt6<tt12 and tt6<tt18) file<<"Bubble Sort."<<endl;
//    else if(tt12<tt18)file<<"Quick Sort."<<endl;
//    else file<<"Merge Sort."<<endl;
    if(tt6<tt18) file<<"Bubble Sort."<<endl;
    else file<<"Merge Sort."<<endl;

//    bubble_Sort_ascending_input("input1.txt","bubble_output_ascending_1.txt");
//    bubble_Sort_ascending_input("input2.txt","bubble_output_ascending_2.txt");
//    bubble_Sort_ascending_input("input3.txt","bubble_output_ascending_3.txt");
//
//    bubble_Sort_descending_input("input1.txt","bubble_output_descending_1.txt");
//    bubble_Sort_descending_input("input2.txt","bubble_output_descending_2.txt");
//    bubble_Sort_descending_input("input3.txt","bubble_output_descending_3.txt");
//
    Quick_Sort_ascending_input("input1.txt","Quick_output_ascending_1.txt");
    Quick_Sort_ascending_input("input2.txt","Quick_output_ascending_2.txt");
    Quick_Sort_ascending_input("input3.txt","Quick_output_ascending_3.txt");

    Quick_Sort_descending_input("input1.txt","Quick_output_descending_1.txt");
    Quick_Sort_descending_input("input2.txt","Quick_output_descending_2.txt");
    Quick_Sort_descending_input("input3.txt","Quick_output_descending_3.txt");
//
//    Merge_Sort_ascending_input("input1.txt","Merge_output_ascending_1.txt");
//    Merge_Sort_ascending_input("input2.txt","Merge_output_ascending_2.txt");
//    Merge_Sort_ascending_input("input3.txt","Merge_output_ascending_3.txt");
//
//    Merge_Sort_descending_input("input1.txt","Merge_output_descending_1.txt");
//    Merge_Sort_descending_input("input2.txt","Merge_output_descending_2.txt");
//    Merge_Sort_descending_input("input3.txt","Merge_output_descending_3.txt");

    ///endl(^-^).
    return 0;
}

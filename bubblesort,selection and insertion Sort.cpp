///Name:Abdul Ohab
///ID:2019000000061
///Final Assignment
///Question Time analysis of sorting algorithms: Bubble sort, Selection sort and Insertion sort.

#include <bits/stdc++.h>
#include <iostream>
#include <ctime>
#include <cmath>
using namespace std;

int arr[]= {25,5,934}; //declare array.

// Displaying value.
void Display(int arr[])
{
    int siz=sizeof(arr)/sizeof(*arr);
    for(int i=0; i<=siz; i++)
    {
        cout<<arr[i]<<endl;
    }
}
//swap
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

/// Bubble_Sort
void bubblesort(int items[])
{
    int s=sizeof(items)/sizeof(*items);
    for(int i=0; i<s; i++)
    {
        for(int j=0; j<s-1-i; j++)
            if(items[j]>items[j+1])
                swap(items[j],items[j+1]);
    }
}

///Selection_Sort.
void  selection(int arr[])
{
    int min_dex,n;

    n=sizeof(arr)/sizeof(arr[0]);


    for(int i=0; i<n-1; i++)
    {
        min_dex=i;
        for(int j=i+1; j<n; j++)
            if(arr[j]<arr[min_dex])
                min_dex=j;
        if(min_dex!=i)
            swap(arr[min_dex],arr[i]);
    }

}

///Insertion_Sort
void insertion(int arr[])
{
    int i,j,n;
    n=sizeof(arr)/sizeof(arr[0]);
    for(i=1; i<n; i++)
    {
        j=i;
        while(j>0 && arr[j-1] > arr[j])
        {
            swap(arr[j],arr[j-1]);
            j--;
        }
    }

}

int main()
{
    clock_t t;
    t = clock();
    cout<<"Bubble_Sort Output"<<endl;
    bubblesort(arr);
    Display(arr);
    t = clock() - t;
    cout<<"Total time taken Bubble_Sort:"<<(float)t/CLOCKS_PER_SEC<<" seconds" << endl;

    t = clock();
    cout<<"Selection_Sort Output"<<endl;
    selection(arr);
    Display(arr);
    t = clock() - t;
    cout<<"Total time taken Selection_Sort:"<<(float)t/CLOCKS_PER_SEC<<" seconds" << endl;


    t= clock();
    cout<<"Insertion_Sort Output"<<endl;
    insertion(arr);
    Display(arr);
    t = clock() - t;
    cout<<"Total time taken Selection_Sort:"<<(float)t/CLOCKS_PER_SEC<<" seconds" << endl;
    return 0;
}

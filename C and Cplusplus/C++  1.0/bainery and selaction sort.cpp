#include<iostream>
#include<cstdio>
using namespace std;

int selectionsort(int arr[],int arrsize,int n)
{
    int i, j, mini;
    for (i = 0; i<arrsize-1; i++)
    {
        mini=i;
        for (j=i+1; j<arrsize; j++)
            if (arr[j] < arr[mini])
                mini= j;
        swap(arr[mini],arr[i]);
    }
    //Binary Search
    int l=0;
    while (l <= arrsize)
    {
        int m = l + (arrsize - l) / 2;
        if (arr[m] == n)
            return m;
        if (arr[m] < n)
            l = m + 1;
        else
            arrsize= m - 1;
    }
    return -1;
}

//void printarray(int arr[], int size)
//{
//    int i;
//    for (i=0; i < size; i++)
//        cout << arr[i] << " ";
//    cout << endl;
//}
int main()
{
    int arr[100];
    int arrsize,found;
    int Search_element;

    cout<<"Enter the size of the array:";

    cin>>arrsize;

    cout<<"Enter the array elements:"<<endl;
    for (int i=1;i<=arrsize; i++)
    {
        cin>>arr[i];

    }

    cout<<"Enter the number you are searching for:";

    cin>>Search_element;
    found=selectionsort(arr,arrsize,Search_element);

    if(found == -1)
        cout<<"false"<<endl;
    else
        cout<<"true"<<endl;
    return 0;
}

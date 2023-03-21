#include <iostream>
#include<cstdio>
#include <vector>
using namespace std;

struct array
{
    int A[100];
    int size;
    int length;
};
void Display(struct array arr)
{
    int i;
    cout<<"Elements are: ";
    for(i=0; i<arr.length; i++)
        cout<<arr.A[i]<<" ";
}
int Max(struct array arr)
{
    int max=arr.A[0];
    int i;
    for(i=1; i<arr.length; i++)
    {
        if(arr.A[i]>max)
            max=arr.A[i];
    }
    return max;
}
int Min(struct array arr)
{
    int min=arr.A[0];
    int i;
    for(i=1; i<arr.length; i++)
    {
        if(arr.A[i]<min)
            min=arr.A[i];
    }
    return min;
}
int Sum(struct array arr)
{
    int s=0;
    int i;
    for(i=0; i<arr.length; i++)
        s+=arr.A[i];
    return s;
}
float Avg(struct array arr)
{
    return (float)Sum(arr)/arr.length;
}

int main()
{
    struct array arr1= {{2,3,9,16,18,21,28,32,35},10,9};
    Display(arr1);
    cout<<endl;
    cout<<Max(arr1)<<" ";
    cout<<Min(arr1)<<endl;
    printf("%d",Sum(arr1));
    cout<<Avg(arr1);

    return 0;
}

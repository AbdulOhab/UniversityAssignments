///Priority Queue
///ID:2019000000061

#include<iostream>
#include<Algorithm>
#include <string>
#include <queue>
#include <vector>
using namespace std;
priority_queue <int, vector<int>, greater<int> >a;

int Q_push()
{
    int input;
    cout<<"Push Number in Queue"<<endl;
    cin>>input;
    a.push(input);
    cout<<input<<" Successfully Inserted......"<<endl;
}
int Q_find()
{
    cout<<a.top()<<" is the minimum number."<<endl;

}
int Q_Delet()
{
    int input;
    cout<<"Enter Deleting Number"<<endl;
    cin>>input;
    if(a.empty())
    {
        cout<<"there is no element in the priority queue..."<<endl;
    }
    else if(a.top()==input)
    {
       a.pop();
       cout<<input<<"  is Successfully Deleted......"<<endl;
    }
    else
    {
       cout<<"wrong Input"<<endl;
    }
}

int main()
{
    int n;

    cout<<"Priority Queue"<<endl;
    cout<<endl;
    StarT:
    cout<<"enter the operator"<<endl;
    cout<<"1. Insert"<<endl;
    cout<<"2. Find"<<endl;
    cout<<"3. Delete"<<endl;
    cout<<"4. Exit"<<endl;

    cin>>n;
    switch(n)
    {
    case 1:
        Q_push();
        break;
    case 2:
        Q_find();
        break;
    case 3:
        Q_Delet();
        break;
    case 4:
        cout<<"End Program"<<endl;
        return 0;

    }
    goto StarT;
    return 0;
}


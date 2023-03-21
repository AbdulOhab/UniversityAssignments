/*Polymorphism
• Same name different actions
• Runtime Polymorphism is achieved using function overriding
• Virtual functions are abstract functions of base class
• Derived class must override virtual function
• Base class pointer pointing to derived class object and a override function is called
Summary: class car is defined, then sub classes override, then base class method made as
virtual the pure virtual*/
#include <bits/stdc++.h>
using namespace std;
class Car
{
public:
    virtual void start()=0;
};
class Innova:public Car
{
public:
    void start()
    {
        cout<<"Innova Started"<<endl;
    }
};
class Swift:public Car
{
public:
    void start()
    {
        cout<<"Swift Started"<<endl;
    }
};
int main()
{
//Car c;
    Car *p=new Innova();
    p->start();
    p=new Swift();
    p->start();
}

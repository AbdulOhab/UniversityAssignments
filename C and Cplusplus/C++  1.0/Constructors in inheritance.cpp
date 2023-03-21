/*Constructors in inheritance
• Constructors of base class is executed first then the constructor of derived class is executed.
• By default, non-parameterised constructor of base class is executed.
• parameterised constructor of base class must be called from derived class constructor
Explain using base and derived class8//*/
#include <iostream>
using namespace std;
class Base
{
public:
    Base()
    {
        cout<<"Non-param Base"<<endl;
    }
    Base(int x)
    {
        cout<<"Param of Base "<<x<<endl;
    }
};
class Derived:public Base
{
public:
    Derived()
    {
        cout<<"Non-Param Derived"<<endl;
    }
    Derived(int y)
    {
        cout<<"Param of Derived "<<y<<endl;
    }
    Derived(int x,int y):Base(x)
    {
        cout<<"Param of Derived "<<y<<endl;
    }
};
int main()
{
    Derived d(5,10);
}

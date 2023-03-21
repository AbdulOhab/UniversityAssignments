/*Virtual Functions polymorphism
• Virtual functions are used for achieving polymorphism
• Base class can have virtual functions
• Virtual functions can be overrides in derived class
• Pure virtual functions must be overrides by derived class*/
#include <bits/stdc++.h>
using namespace std;
class BasicCar
{
public:
    virtual void start() //decilering virtual
    {
        cout<<"BasicCar started"<<endl;
    }
};
class AdvanceCar: public BasicCar
{
public:
    void start()
    {
        cout<<"AdvanceCar Started"<<endl;
    }
};
int main()
{
    //BasicCar *p=new AdvanceCar();
    //p->start();
    BasicCar s;
    AdvanceCar t;
    s.start();
    t.start();
    BasicCar *p;
    p=&t;
    p->start();
}

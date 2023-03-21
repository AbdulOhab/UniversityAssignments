/*Ways of inheritance
A class can be inherited in flowing ways
Publicly - All members of base will have same accessibility in derived class
Protectedly - All members of base will become protected in derived class
Privately - All members of base will become private in derived class*/
#include <bits/stdc++.h>
using namespace std;
class Parent
{
private:
    int a;
protected:
    int b;
public:
    int c;
    void funParent()
    {
        a=10;
        b=5;
        c=15;
    }
};
class Child: private Parent
{
private:
protected:
public:
    void funChild()
    {
//a=10;
        b=5;
        c=15;
    }
};
class GrandChild : public Child
{
public:
    void funGrandChild()
    {
//a=10;
//b=5;
//c=20;
    }
};
int main()
{
// Child c;
//c.a=10;
//c.b=5;
//c.c=20;
}

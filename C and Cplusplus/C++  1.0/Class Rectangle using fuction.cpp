#include <bits/stdc++.h>
using namespace std;
/*All types of Member Functions
• Constructors - called when object is created
• Accessors - used for knowing the value of data members
• Mutators - used for changing value of data member
• Facilitator - actual functions of class
• Enquiry - used for checking if an object satisfies some condition
• Destructor - used for releasing resources used by object*/
class Rectangle
{
private:
    int length;
    int breadth;
public:
    Rectangle();
    Rectangle(int l,int b);
    Rectangle(Rectangle &r);
    int getLength()
    {
        return length;
    }
    int getBreadth()
    {
        return breadth;
    }
    void setLength(int l);
    void setBreadth(int b);
    int area();
    int perimeter();
    bool isSquare();
    ~Rectangle();
};
class Cuboid:public Rectangle
{
private:
    int height;
public:
    Cuboid(int h)
    {
        height=h;
    }
    int getHeight()
    {
        return height;
    }
    void setHeight(int h)
    {
        height=h;
    }
    int volume()
    {
        return getLength()*getBreadth()*height;
    }
};
Rectangle::Rectangle()
{
    length=1;
    breadth=1;
}
Rectangle::Rectangle(int l,int b)
{
    length=l;
    breadth=b;
}
Rectangle::Rectangle(Rectangle &r)
{
    length=r.length;
    breadth=r.breadth;
}
void Rectangle::setLength(int l)
{
    length=l;
}
void Rectangle::setBreadth(int b)
{
    breadth=b;
}
int Rectangle::area()
{
    return length*breadth;
}
int Rectangle::perimeter()
{
    return 2*(length+breadth);
}
bool Rectangle::isSquare()
{
    return length==breadth;
}
Rectangle::~Rectangle()
{
// cout<<"Rectangle Destroyed";
}
int main()
{
    Cuboid c(5);
    c.setLength(10);
    c.setBreadth(7);
    cout<<"Volume is "<<c.volume()<<endl;
}

/*Friend functions and classes
• Friend functions are global functions
• They can access member of a class upon their objects
• A class can be declared as friend on another class
• All the functions of friend class can access private and protected members of other class
class Your;*/
class My
{
private:
    int a;
protected:
    int b;
public:
    int c;
    friend class Your;
    friend class save;
};
class Your
{
public:
    My m;
    void fun()
    {
        m.a=10;
        m.b=10;
        m.c=10;
    }
};
int main()
{

}

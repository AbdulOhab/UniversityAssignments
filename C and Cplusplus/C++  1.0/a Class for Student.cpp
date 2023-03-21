//Program with a Class for Student
#include<iostream>
using namespace std;
class Student
{
private:
    int roll;
    string name;
    int mathMarks;
    int phyMarks;
    int chemMarks;
public:
    Student(int r,string n,int m,int p,int c)
    {
        roll=r;
        name=n;
        mathMarks=m;
        phyMarks=p;
        chemMarks=c;
    }
    int total()
    {
        return mathMarks+phyMarks+chemMarks;
    }
    char grade()
    {
        float average=total()/3;
        if(average > 60)
            return 'A';
        else if(average>=40 && average<60)
            return 'B';
        else
            return 'C';
    }
};
int main()
{
    int roll;
    string name;
    int m,p,c;
    cout<<"Enter Roll number of a Student: ";
    cin>>roll;
    cout<<"Enter Name of a Student:";
    cin>>name;
    cout<<"Enter marks in 3 subjects";
    cin>>m>>p>>c;
    Student s(roll,name,m,p,c);
    cout<<"Total Marks:"<<s.total()<<endl;
    cout<<"Grade of Student:"<<s.grade()<<endl;
}
/*Object-Oriented Programming
Features of OOPS
• Abstraction
• Data Hiding
• Inheritance
• Polymorphism
Classes
• Class is a blue print of an object
• Class in a group of objects
• Class is a design of object
••
Many object can be created from same class
• Object consumes memory equal to sum of sizes of all data members
• Member functions don’t occupy memory
• Member functions are called depending on object
• . Dot operator is used for accessing members of object
• Memory allocated for object is also called as instance
Pointer to an Object
• A pointer of type class can be created
• A pointer can point on existing object
• A new object can be created in heap using pointer
• Arrow operator is used for accessing members of an object using pointer
Data Hiding
• Data members of a class class are usually declared as Private or Protected,
• They can be accessed only inside the class and child classes
• Data finding protects data from mishandling
Constructors
• Constructor is a member function of a class
• It will have same name as class name
• It will not have return type
• Its should be public
• It can be declared as private also in some cases
• It is called when object is created
• It is used for initialising an object
• It can be overloaded
• If its not defined then class will have a default constructor
• Constructor can take default arguments
Types of constructors
• Non-argument constructor
• Parameterised constructor
• Copy constructor
All types of Member Functions
• Constructors - called when object is created
• Accessors - used for knowing the value of data members
• Mutators - used for changing value of data member
• Facilitator - actual functions of class
• Enquiry - used for checking if an object satisfies some condition
• Destructor - used for releasing resources used by object*/

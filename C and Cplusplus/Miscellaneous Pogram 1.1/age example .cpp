#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int birthmonth,birthyear;
    int currentmonth,currentyear;
    int agey,agem;
    cout<<"\n\n\t\t\tRaje's Age Calculator\n\n";
    cout<<"Enter Your Birth Year(Eg:1989):";
    cin>>birthyear;
    cout<<"\n\nEnter Your Birth Month(Eg:7):";
    cin>>birthmonth;
    cout<<"\nEnter The Current Month(Eg:7):";
    cin>>currentmonth;
    cout<<"\nEnter The Current Year(Eg:2010):";
    cin>>currentyear;
    agey=currentyear-birthyear;
    agem=12-birthmonth;
    cout<<"\n\n\t\tYour Age is "<<agey<<" Years And "<<agem<<" Months ";
    getch();
}

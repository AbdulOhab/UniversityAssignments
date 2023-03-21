//#include<bits/stdc++.h>
#include <iostream>
#include<complex>
#include<chrono>
using namespace std;


int main()
{
    cout<<"=================================================\n";
	//copy
	cout<<"Copy"<<endl;
	int a=500;
	int n;
	n=a;
	cout<<a<<endl;
	//move
	cout<<"Move"<<endl;
	int b=200;
	int y;
	y=std::move(b);
	cout<<y<<"\nB="<<b<<endl;
	cout<<"=================================================\n";
	cout<<"range for loop"<<endl;
	int x[10]={1,2,3,4,5,6,7,8,9,10};
	for(auto i:x)
    {

        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"=================================================\n";
    cout<<"complex"<<endl;
    complex<double> z = 2.7182818+6.283185i;
    cout<<real(z)<<endl;
    cout<<"\n=================================================\n";
	return 0;
}

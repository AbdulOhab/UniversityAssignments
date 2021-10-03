#include <bits/stdc++.h>
using namespace std;
double f(double x)
{
    return x*x+x-3;
}

int main()
{
    double x1,x2,fx1,fx2,x0,fx0;
    int  step;
    double fgl;
    cout<<"false position Methods"<<endl;

   Again:
        cout<<"X1"<<endl;
        cin>>x1;
        cout<<"x2"<<endl;
        cin>>x2;
        int x3=(f(x2)*x1-f(x1)*x2)/(f(x2)-f(x1));
        cout<<"x3"<<endl;
        cout<<x3<<endl;
        fx0=x0*x0-(4*x0)-10;
        goto Again;


  return 0;
}

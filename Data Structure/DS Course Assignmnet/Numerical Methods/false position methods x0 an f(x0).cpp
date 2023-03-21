#include <bits/stdc++.h>
using namespace std;

int main()
{
    double x1,x2,fx1,fx2,x0,fx0;
    int  step;
    double fgl;
    cout<<"false position Methods"<<endl;

   Again:
        cout<<"X1"<<endl;
        cin>>x1;
        cout<<"fx1"<<endl;
        cin>>fx1;
        cout<<"x2"<<endl;
        cin>>x2;
        cout<<"fx2"<<endl;
        cin>>fx2;

        fgl=(x2-x1)/(fx2-fx1);
        x0=x2-fx2*fgl;
        cout<<"x0"<<endl;
        cout<<x0<<endl;
        fx0=x0*x0-(4*x0)-10;
        cout<<"fx0"<<endl;
        cout<<fx0<<endl;
        goto Again;


  return 0;
}

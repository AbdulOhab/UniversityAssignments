#include <bits/stdc++.h>
using namespace std;
double f(double x)
{
    return x*x-4*x-10;
}

int main()
{
    double x1,x2,fx1,fx2,x3,fx0;

    int  step=1,n=1;

    double fgl,counter;

    cout<<"false position Methods"<<endl;


//    cout<<"X1"<<endl;
//    cin>>x1;
//
//    cout<<"x2"<<endl;
//    cin>>x2;
    x1=4;
    x2=2;

    cout<<"step"<<endl;
    //cin>>counter;
    counter=7;
    cout<<"NO"<<"   "<<"x1"<<"\t\t"<<"f(x1)"<<"\t\t"<<"x2"<<"\t\t"<<"f(x2)"<<"\t\t"<<"x3"<<"\n";

    while(step<=counter)
    {
        x3=(f(x2)*x1-f(x1)*x2)/(f(x2)-f(x1));

        printf("%d   %.3f   \t%.3f   \t%.3f   \t%.3f    \t%.3f\n",n++,x1,f(x1),x2,f(x2),x3);

         x1=x2;

         x2=x3;
        step++;
    }
  cout<<"aproximate root"<<x3<<endl;

    return 0;
}

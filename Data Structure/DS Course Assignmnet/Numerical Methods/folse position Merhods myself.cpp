#include <bits/stdc++.h>
using namespace std;
double f(double x)
{
    return x*x-4*x-10;
}

int main()
{
    double x1,x2,fx1,fx2,x0,fx0;

    int  step=1;

    double fgl,counter;

    cout<<"false position Methods"<<endl;


    cout<<"X1"<<endl;
    cin>>x1;

    cout<<"x2"<<endl;
    cin>>x2;

    cout<<"step"<<endl;
    cin>>counter;
    cout<<"x1"<<" \t"<<"f(x1)"<<" \t"<<"x2"<<" \t"<<"f(x2)"<<" \t\t"<<"x0"<<" \t\t"<<"f(x0)"<<"\n";

    while(step<=counter)
    {
        fgl=(x2-x1)/(f(x2)-f(x1));
        x0=x2-f(x2)*fgl;

        printf("%.3f \t%.3f \t%.3f \t%.3f  \t%.3f  \t%.3f\n",x1,f(x1),x2,f(x2),x0,f(x0));

        if(f(x1)*f(x0)<0)
            x2=x0;
        else
            x1=x0;
        step++;
    }


    return 0;
}

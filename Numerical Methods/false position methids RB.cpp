#include<bits/stdc++.h>
using namespace std;

double f(double x)
{
    return x*x-4*x-10;
}

int main()
{
    double x1=-4,x2=3,x0,fgl;
    int step =1;

    while(step<=7)
    {
        fgl=(x2-x1)/(f(x2)-f(x1));
        x0=x2-f(x2)*fgl;
        if(f(x1)*f(x0)<0)
            x2=x0;
        else
            x1=x0;
        step++;
    }
    cout<<x0;
    return 0;
}

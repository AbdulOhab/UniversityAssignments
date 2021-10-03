#include<bits/stdc++.h>
using namespace std;

double equation(double x)
{
    return x*x-3;
}

double derivative(double x)
{
    return 2*x;
}



int main()
{
    int i=1,step;
    double h,x1;
    int x0;
    cout<<"X0 value input"<<endl;
    cin>>x0;
    cout<<"step"<<endl;
    cin>>step;

    while(i>
          =step)
    {
        if(x0==0)
        {
            break;
        }

        else
        {
            x1 = x0- equation(x0) / derivative(x0);
            cout << "x= " << x1<<endl;
            x0=x1;
        }
        step++;
    }

    return 0;
}



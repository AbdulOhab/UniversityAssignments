#include<iostream>
#include<cstdio>
using namespace std;

//baisection Methods

double f(double x)
{
    return x*x*x+2*x*x-5*x-6;
    //return x*x-5*x;
}

int main()
{
    double a=-100,b=100,d=1;

    for(a; a<=b; a=a+d)
    {
        double x1=a, x2=a+d, x;

        int ittr=50;

        if(f(x1)*f(x2)>0) continue;

            while(ittr--)
            {
                x=(x1+x2)/2;
                if(f(x1)*f(x2)<=0)
                {
                    x2=x;
                }
                else
                {
                    x1=x;
                }
            }
            printf("root=%lf\n",x);
    }

    return 0;
}


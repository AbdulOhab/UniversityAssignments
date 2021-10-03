#include<bits/stdc++.h>
#define Ans  0.001
using namespace std;

double equation(double x)
{
    return x*x- 3;
}


double derivative(double x)
{
    return 2*x;
}

void newtonRaphson(double x)
{ int k=1;
    double h = equation(x) / derivative(x);
    while (abs(h) >= Ans)
    {
        h = equation(x)/derivative(x);
        x = x - h;
        cout <<k++<< "  x=" << x<<endl;
    }
    cout << "The value of the root is : " << x<<endl;
}

int main()
{
    double x0 = 7;
    newtonRaphson(x0);
    return 0;
}

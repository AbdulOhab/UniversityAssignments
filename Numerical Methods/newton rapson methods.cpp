#include<bits/stdc++.h>
#define EPSILON 0.001
using namespace std;

int No=1;
double func(double x)
{
    return x*x - 3;
}

double derivFunc(double x)
{
    return 2*x;
}

// Function to find the root
void newtonRaphson(double x)
{
    double h = func(x) / derivFunc(x);
    while (abs(h) >= EPSILON)
    {
        h = func(x)/derivFunc(x);

        // x(i+1) = x(i) - f(x) / f'(x)
        x = x - h;
        cout<<"X"<<No++<<"="<<x<<endl;
    }

    cout << "The value of the root is : " << x;
}

int main()
{
    double x0 =7; // Initial values assumed
    newtonRaphson(x0);
    return 0;
}

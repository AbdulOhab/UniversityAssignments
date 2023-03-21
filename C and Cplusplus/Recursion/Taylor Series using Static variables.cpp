 //Taylor Series using Static variables
#include <bits/stdc++.h>
using namespace std;

double ext(int x, int n)
{
    static double p=1,f=1;
    double r;
    if(n==0)
        return 1;
    r=ext(x,n-1);
    p=p*x;
    f=f*n;
    return r+p/f;
}
int main()
{
    printf("%lf \n",ext(4,4));
    return 0;
}

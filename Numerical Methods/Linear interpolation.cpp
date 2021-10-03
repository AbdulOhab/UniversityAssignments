#include <bits/stdc++.h>
using namespace std;

double LiIP(int N,double x[], double fx[], double xx)
{
    double T; int i = 0;
    while (1)
    {
        if (x[i] >= xx) break;
        i = i + 1;
    }
    T=fx[i-1]+(fx[i]-fx[i-1])*(xx-x[i-1])/(x[i]-x[i-1]);
    return T;

}

int main()
{
    int N;
    double x[100], fx[100], xx ;
//    cout << "Numbers of Data, N : ";
//    cin >> N ;
//    for(int i=0; i<N; i++)
//    {
//        cout << "For data No. " << i+1 << endl ;
//        cout << "Insert x : ";
//        cin >> x[i];
//        cout << "Insert y : ";
//        cin >> fx[i];
//    }
//    cout << "Finding value of : " ;
//    cin >> xx ;
   //custom input
    N=4;
    x[0]=1;
    x[1]=2;
    x[2]=3;
    x[3]=4;
    fx[0]=1;
    fx[1]=1.4142;
    fx[2]=1.7321;
    fx[3]=2;
    xx=2.5;
    //double ans = int1(N,x,fx,xx);
    double ans = LiIP(N,x,fx,xx);
    double exact_ans = sqrt(xx) ;
    double error = fabs(ans - exact_ans);
    cout << "From Linear Interpolation Polynomial, Answer is = " << ans << endl ;
    cout << "From Linear Interpolation Polynomial, error is = " << error << endl ;

    return 0;
}

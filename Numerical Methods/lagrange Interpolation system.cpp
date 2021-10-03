#include <bits/stdc++.h>
using namespace std;

// double LiIP(int N,double x[], double fx[], double xx)
// {
//
// }
//
// double NIP(int N,double x[], double fx[], double xx)
// {
//
// }

double LIP(int N,double x[], double fx[], double xx)
{
    double ans = 0 ;
    for(int i=0;i<N;i++)
    {
        double up = 1 , down = 1 ;
        for(int j=0;j<N;j++)
        {
            if(i==j) continue ;
            up = up * (xx-x[j]) ;
            down = down * (x[i]-x[j]);
        }
        ans = ans + fx[i]*(up/down);
    }
    return ans ;
}
int main()
{
    int N;
    double x[100], fx[100] , xx ;
    cout << "Numbers of Data, N : ";
    cin >> N ;
    for(int i=0;i<N;i++)
    {
        cout << "For data No. " << i+1 << endl ;
        cout << "Insert x : ";
        cin >> x[i];
        cout << "Insert y : ";
        cin >> fx[i];
    }
    cout << "Finding value of : " ;
    cin >> xx ;

    double ans = LIP(N,x,fx,xx);
    double exact_ans = sqrt(xx) ;
    double error = fabs(ans - exact_ans);
    cout << "From Lagrange Interpolation Polynomial, Answer is = " << ans << endl ;
    cout << "From Lagrange Interpolation Polynomial, error is = " << error << endl ;

    // ans = LiIP(N,x,fx,xx);
    // exact_ans = sqrt(xx) ;
    // error = fabs(ans - exact_ans);
    // cout << "From Linear Interpolation Polynomial, Answer is = " << ans << endl ;
    // cout << "From Linear Interpolation Polynomial, error is = " << error << endl ;
    //
    // ans = NIP(N,x,fx,xx);
    // exact_ans = sqrt(xx) ;
    // error = fabs(ans - exact_ans);
    // cout << "From Newton Interpolation Polynomial, Answer is = " << ans << endl ;
    // cout << "From Newton Interpolation Polynomial, error is = " << error << endl ;
    return 0;
}

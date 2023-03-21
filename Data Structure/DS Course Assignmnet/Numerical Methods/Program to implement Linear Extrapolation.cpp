#include <bits/stdc++.h>
using namespace std;

double LiIP(int N,double x[], double fx[], double xx)
{
    double  T,Q;
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<N; j++)
        {
            T=x[i]+x[i]-(x[j]/x[j]-x[i])*(fx[j]-fx[i]);
        }
    }
    return T;
}


//double extrapolate(Data d[], double x)
//{
//    double y;
//    y = d[0].y + (x - d[0].x)  / (d[1].x - d[0].x) * (d[1].y - d[0].y);
//
//    return y;
//}

//double LIP(int N,double x[], double fx[], double xx)
//{
//    double ans = 0 ;
//    for(int i=0;i<N;i++)
//    {
//        double up = 1 , down = 1 ;
//        for(int j=0;j<N;j++)
//        {
//            if(i==j) continue ;
//            up = up * (xx-x[j]) ;
//            down = down * (x[i]-x[j]);
//        }
//        ans = ans + fx[i]*(up/down);
//    }
//    return ans ;
//}

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

   double ans = LiIP(N,x,fx,xx);
   double exact_ans = sqrt(xx) ;
   double error = fabs(ans - exact_ans);

   cout << "From Linear Interpolation Polynomial, Answer is = " << ans << endl;
   cout << "From Linear Interpolation Polynomial, error is = " << error << endl;

}

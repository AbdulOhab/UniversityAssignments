/*Name:Abdul Ohab
  ID  :2019000000061
  batch:51
  course code:261
  section:11*/
#include <bits/stdc++.h>
using namespace std;

//Linear Interpolation Polynomial
double LiIP(int N,double x[], double fx[], double xx)
{
    double T;
    int i = 0;
    while (1)
    {
        if (x[i] >= xx) break;
        i = i + 1;
    }
    T=fx[i-1]+(fx[i]-fx[i-1])*(xx-x[i-1])/(x[i]-x[i-1]);
    return T;

}

//Newton Interpolation Polynomial
double NIP(int N,double x[], double fx[], double xx)
{
    int i,j;
    double sum=0;

    for(j=0; j<N-1; j++)
    {
        for(i=N-1; i>j; i--)
            fx[i]=(fx[i]-fx[i-1])/(x[i]-x[i-j-1]);
        cout<<x[i-j-1]<<endl;
    }
    //0 0.301 -0.06245

    for( i=N-1; i>=0; i--)
    {
        double sp=1;
        for( j=0; j<i; j++)
            sp=sp*(xx-x[j]);

        sp=sp*fx[j];
        sum= sum+sp;
    }
    return sum;
}

//Lagrange polynomial
double LIP(int N,double x[], double fx[], double xx)
{
    double ans = 0 ;
    for(int i=0; i<N; i++)
    {
        double up = 1, down = 1 ;
        for(int j=0; j<N; j++)
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
    double x[100], fx[100], xx ;
//    cout << "Numbers of Data, N : ";
//    cin >> N ;
//    for(int i=0;i<N;i++)
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

    double ans = LIP(N,x,fx,xx);
    double exact_ans = sqrt(xx) ;
    double error = fabs(ans - exact_ans);
    cout << "From Lagrange Interpolation Polynomial, Answer is = " << ans << endl ;
    cout << "From Lagrange Interpolation Polynomial, error is = " << error << endl ;
    cout<<endl;

    ans = LiIP(N,x,fx,xx);
    exact_ans = sqrt(xx) ;
    error = fabs(ans - exact_ans);
    cout << "From Linear Interpolation Polynomial, Answer is = " << ans << endl ;
    cout << "From Linear Interpolation Polynomial, error is = " << error << endl ;
    cout<<endl;

    ans = NIP(N,x,fx,xx);
    exact_ans = sqrt(xx) ;
    error = fabs(ans - exact_ans);
    cout << "From Newton Interpolation Polynomial, Answer is = " << ans << endl ;
    cout << "From Newton Interpolation Polynomial, error is = " << error << endl ;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;


double NIP(int N,double x[], double fx[], double xx)
{
    int i,j;
    double sum=0;

    for(j=0; j<N-1; j++)
    {
        for(i=N-1; i>j; i--)
            fx[i]=(fx[i]-fx[i-1])/(x[i]-x[i-j-1]);
        cout<<fx[i]<<endl;
    }
    //0 0.301 -0.06245
    //
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
int main()
{
    int N;
    double x[100], fx[100] , xx ;
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
//        N=4;
//    x[0]=1;
//    x[1]=2;
//    x[2]=3;
//    x[3]=4;
//    fx[0]=0;
//    fx[1]=0.3010;
//    fx[2]=0.4771;
//    fx[3]=0.6021;
//    xx=2.5;

    double ans = NIP(N,x,fx,xx);
    double exact_ans = sqrt(xx) ;
    double error = fabs(ans - exact_ans);
    cout << "From Newton Interpolation Polynomial, Answer is = " << ans << endl ;
    cout << "From Newton Interpolation Polynomial, error is = " << error << endl ;
    return 0;
}

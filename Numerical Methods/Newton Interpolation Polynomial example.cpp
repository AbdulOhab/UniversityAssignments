#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n,i,j;
    float x[10],f[10],a,sum=0,mult;

    cout<<"No of sample points ? ";
    cin>>n;
    cout<<"\nAll x with corresponding f(x) ";
    for(i=0;i<n;i++)
    {
     cout<<"\nAll x : ";
     cin>>x[i];
     cout<<"\nAll fx : ";
     cin>>f[i];
    }


    cout<<"\nEnter x for calculation ";
    cin>>a;

    for(j=0;j<n-1;j++)
    {
        for(i=n-1;i>j;i--)
            f[i]=(f[i]-f[i-1])/(x[i]-x[i-j-1]);
    }
    for(i=n-1;i>=0;i--)
    {
        mult=1;
        for(j=0;j<i;j++)
            mult*=(a-x[j]);

        mult*=f[j];
        sum+=mult;
    }
    cout<<"The result is: "<<sum;
    getch();
    return 0;
}


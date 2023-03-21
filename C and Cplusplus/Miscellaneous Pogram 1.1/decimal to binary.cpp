#include <iostream>
using namespace std;

int main()
{
    int a[10], n, i;
    cout<<"Enter the number to convert: ";
    cin>>n;
    for(i=0; n>0; i++)
    {
        a[i]=n%2;
        n= n/2;
    }

    cout<<"Binary of the given number= ";
    for(i=i-1 ; i>=0 ; i--)
    {
        cout<<a[i];
    }
}
/*#include<stdio.h>
#include<math.h>

int main()
{

    int deci, bin, ara[100], i = 0, k = 0;

    scanf("%d",&deci);

    while(deci)
    {
        ara[i++] =  deci % 2;
        deci /= 2;
        k++;
    }

    for(k = k - 1; k >= 0; k--)
    {
        printf("%d",ara[k]);
    }
}*/

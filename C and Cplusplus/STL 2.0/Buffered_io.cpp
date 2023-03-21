#include<bits/stdc++.h>
using namespace std;

int main()
{
    int aa,bb;
    double dd,ee;
    long double ll;
    char cc;
    char name[100];
    unsigned int uu;
    //long long qq; // for uva
    __int64 qq; // for vc
    aa=2;
    bb=101;
    printf("%d %d\n",aa,bb);
// for int the identifier is %d
    dd=1.06;
    ee=78;
    printf("%lf %lf\n",dd,ee);
// for double the identifier is %lf
    cc='m';
    printf("%c\n",cc);
// for char the identifier is %c
    name[0]='a';
    name[1]='b';
    name[2]='\0';
    printf("%s\n",name);
// for string the identifier is %s
    ll=-89767;
    printf("%Lf\n",ll);
// for long double the identifier is %Lf
    qq=7186212;
    printf("%lld\n",qq); // for uva
// for long long the identifier is %lld // for uva
    qq=7186212;
    printf("%I64d\n",qq); // for vc
// for __int64 the identifier is %I64d // for vc
    uu=18726;
    printf("%u\n",uu);
// for unsigned int the identifier is %u
// to print multiple thigs you can use
    printf("%d %lf %s %Lf\n",aa,dd,name,ll);
    return 0;
}

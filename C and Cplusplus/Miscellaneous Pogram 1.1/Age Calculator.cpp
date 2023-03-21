#include <bits/stdc++.h>
#include <iostream>
#include <cstdio>
#include <cmath>
#include <string>
#include <vector>
using namespace std;
int invalid(int a,int b, int c)
{
    if(a>=2022) return 0;
    if(a>=12) return 0;
    if(a>=30) return 0;
}
int main()
{
    int ca,cb,cc,ba,bb,bc;
    int year,month,day;
    int c,e,b,d;
        printf("enter current year:\n");
        scanf("%d",&ca);
        printf("enter current month:\n");
        scanf("%d",&cb);
        printf("enter current day:\n\n");
        scanf("%d",&cc);
        printf("Now enter your born year:\n");
        scanf("%d",&ba);
        printf("Now enter your born month:\n");
        scanf("%d",&bb);
        printf("Now enter your born day:\n\n");
        scanf("%d",&bc);

    if(invalid(ca,cb,cc)&& invalid(ba,bb,bc))
    {
        cout<<"invalid"<<endl;
        return 0;
    }
    else
    {
        {
            if(bc>cc)
            {
                cc=+30;//current day (+30)
                bb=+1;//born month (+1)
            }

            if(bb>cb)
            {
                cb=+12;//current month (+12)
                ba=+1;//born year (+1)
            }
        }
        year=ca-ba;
        month=cb-bb;
        day=cc-bc;

        printf("your age is :\t");
        printf("day %d ",day);
        printf("month %d ",month);
        printf(" year %d \n\n",year);

    }


  return 0;
}

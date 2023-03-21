#include<bits/stdc++.h>
#define MAX_PERSON 100
using namespace std;

struct person
{
    int year=0;
    int month=0;
    int days=0;
    int total=0;
};

int main()
{
    clock_t t1,t2,total;
    t1= clock();
    struct person age[MAX_PERSON];
    int arr[301];
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    for(int i=0;i<301;i++)
    {
        int a;
        cin  >> a;
         arr[i]=a;
        cout << i << ":" << a << endl;
    }
    for(int j=0;j<301;j++)
    {
        cout << arr[j] << endl;
    }
    t2 = clock();
    total =t2-t1;
    cout << "Total Time = " << (double) total << endl;

    return 0;
}


/*
int main()
{
    clock_t t1,t2,total;
    t1= clock();
    for(long long  i=1;i<=10000000000;i++)
    {

    }
    t2 = clock();
    total =t2-t1;
    cout << "Total Time = " << (double) total/CLOCKS_PER_SEC << endl;

    return 0;
}
*/

/*
#include<bits/stdc++.h>
using namespace std;

int main()
{
    clock_t t1,t2,total;
    t1= clock();
    int arr[301];
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    for(int i=1;i<=301;i++)
    {
        int a;
        cin  >> a;
        cout << i << ":" << a << endl;
    }

    t2 = clock();
    total =t2-t1;
    cout << "Total Time = " << (double) total << endl;

    return 0;
}
*/

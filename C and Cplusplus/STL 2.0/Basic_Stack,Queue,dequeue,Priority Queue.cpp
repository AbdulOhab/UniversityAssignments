#include<bits/stdc++.h>
using namespace std;

int main()
{


    stack<int> st;

    st.push ( 1 );
    st.push ( 3 );
    st.push ( 4 );
    st.push ( 2 );

    cout << st.top() << endl; /// 2
    cout << st.size() << endl; /// 4;

    while ( !st.empty() ) {
        cout << st.top() << " "; /// 2 4 3 1
        st.pop();
    }


    return 0;
}
#include<bits/stdc++.h>
using namespace std;

// #define file()
// freopen("input.txt","r",stdin);
// freopen("output.txt","w",stdout);

int main()
{

    queue <int> q;
    q.push( 1 );
    q.push( 2 );
    q.push( 3 );
    q.push( 7 );


    cout << q.size() << endl; /// 4
    cout << q.front() << endl; /// 1

    while ( !q.empty() ) {
        cout << q.front () << " "; /// 1 2 3 7
        q.pop();
    }


    return 0;
}
#include<bits/stdc++.h>
using namespace std;

#define file() freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);

int main()
{
    deque<int> q;
    q.push_back ( 1 );
    q.push_back ( 3 );
    q.push_front ( 2 );

    cout << q.front() << endl; /// 2
    cout << q.back() << endl; /// 3

    q.pop_back();
    cout << q.back() << endl; ///1

    q.pop_front();
    cout << q.front() << endl; /// 1

    cout << q.size() << endl; /// 1


    return 0;
}
#include<bits/stdc++.h>
using namespace std;

#define file() freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);

int main()
{
    deque<int> q;
    q.push_back ( 1 );
    q.push_back ( 3 );
    q.push_front ( 2 );

    cout << q.front() << endl; /// 2
    cout << q.back() << endl; /// 3

    q.pop_back();
    cout << q.back() << endl; ///1

    q.pop_front();
    cout << q.front() << endl; /// 1

    cout << q.size() << endl; /// 1


    return 0;
}
#include<bits/stdc++.h>
using namespace std;


int main()
{

	priority_queue<int> q;

	q.push ( 2 );
	q.push ( 4 );
	q.push ( 1 );

	cout << q.top() << endl; /// 4
	q.pop();
	cout << q.top() << endl; /// 2
	q.pop();

	q.push( 1 );
	q.push( 5 );
	q.push( 4 );
	q.push( 4 );

	while ( !q.empty() ) {
		cout << q.top() << " "; /// 5 4 4 1 1
		q.pop();
	}

	cout << endl;

	cout << q.size() << endl; /// 0

	priority_queue<int, vector<int>, greater<int>> qr;

	qr.push ( 2 );
	qr.push ( 4 );
	qr.push ( 1 );

	cout << qr.top() << endl; /// 1
	qr.pop();
	cout << qr.top() << endl; /// 2
	qr.pop();

	qr.push( 1 );
	qr.push( 5 );
	qr.push( 4 );
	qr.push( 4 );

	while ( !qr.empty() ) {
		cout << qr.top() << " "; /// 1 4 4 4 5
		qr.pop();
	}
	cout << endl;

	cout << qr.size() << endl; /// 0
  priority_queue<int ,vector<int>,greater<int> t; //less
  priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> q;
  q.push ( { 1, 5 } );
	q.push ( { 2, 5 } );
	q.push ( { 7, 1 } );
	q.push ( { 3, 6 } );
	q.push ( { 3, 6 } );
	q.push ( { 7, 1 } );

  while ( !q.empty() ) {
		cout << q.top().first << " "<<q.top().second<<endl;; /// 1 4 4 4 5
		q.pop();
	}
	cout << endl;




	return 0;
}
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
using ull = unsigned long long;

bool cmp ( const pair<int,int> &p1, const pair<int, int> &p2  )
{
    if ( p1.first > p2.first ) return 1;
    if ( p1.first == p2.first ) return ( p1.second < p2.second );
    return 0;
}

int main(int ab_ohab, char const *abohab[]){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	vector<pair<int,int>> v;
	v.push_back ( { 1, 5 } );
	v.push_back ( { 2, 5 } );
	v.push_back ( { 7, 1 } );
	v.push_back ( { 3, 6 } );
	v.push_back ( { 3, 6 } );
	v.push_back ( { 7, 1 } );
	sort ( v.begin(), v.end(),cmp
);

	for ( auto u : v ) cout << u.first << " " << u.second << endl;
	cout << endl;

	return 0;
}

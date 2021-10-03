#include<cstdio>
#include<algorithm>
#include<vector>

using namespace std;

struct interval{
	int start,finish;
	bool operator<(const interval &rhs) const
	{
		return this->start < rhs.start;
	}
};

int main()
{
	vector<interval> I;
	int n;
	scanf("%d",&n);
	while(n--)
	{
		interval in;
		scanf("%d%d",&in.start,&in.finish);
		I.push_back(in);
	}
	sort(I.begin(),I.end());
	for(int i=0; i<I.size(); i++)
		printf("[%d,%d]\n",I[i].start,I[i].finish);
	return 0;
}

/* input
10
1 2
3 14
9 20
11 22
5 6
7 18
13 14
19 20
17 28
15 26
*/

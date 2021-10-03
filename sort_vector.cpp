#include<cstdio>
#include<algorithm> // sort
#include<vector> // vector
using namespace std;
int main()
{
	int n,m;
	for(scanf("%d%d",&n,&m); n>0 || m>0 ; scanf("%d%d",&n,&m))
	{
		int i,j,gold=0, temp;
		vector<int> head, knight;
		for(i=0; i<n; i++)
		{
			scanf("%d",&temp);
			head.push_back(temp);
		}
		for(i=0; i<m; i++)
		{
			scanf("%d",&temp);
			knight.push_back(temp);
		}
		sort(head.begin(),head.end());
		sort(knight.begin(),knight.end());
		for(j=i=0;i<n;i++)
		{
			for(;j<m && head[i]>knight[j];j++)
				/* intend to do nothing */;
			if(j==m)break;
			gold+=knight[j];
			j++;
		}
		if(i!=n&&j==m)
			puts("Loowater is doomed!");
		else
			printf("%d\n",gold);
	}
	return 0;
}

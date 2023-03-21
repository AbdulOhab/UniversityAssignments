#include<stdio.h>

int a[301][301];
/* up to 301 vertices */

void solve()
{
	int n,m,i,j,u,v,w;
	scanf("%d%d",&n,&m);
	/* V={0,...,n-1}, m directed edges*/
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			a[i][j]=(i==j)?0:0x3FFFFFFF;
		/* a[i][i]=0 */
		/* a[i][j]=0x3FFFFFFF if no edge (i,j) */
	for(i=0;i<m;i++)
	{
		scanf("%d%d%d",&u,&v,&w);
		a[u][v]=w;
	}
	for(i=0;i<n;i++) /* adding i into intermediate nodes*/
		for(u=0;u<n;u++)
			for(v=0;v<n;v++)
				/* update a[u][v] */
				if(a[u][v]>a[u][i]+a[i][v])
					a[u][v]=a[u][i]+a[i][v];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			if(a[i][j]<0x3FFFFFFF)printf("%4d",a[i][j]);
			else printf(" INF");
		puts("");
	}
}

int main()
{
	int cases;
	scanf("%d",&cases);
	while(cases--)
	{
		solve();
		puts("");
	}
	return 0;
}

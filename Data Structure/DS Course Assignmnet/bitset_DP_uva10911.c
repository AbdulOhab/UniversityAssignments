#include<stdio.h>
#include<math.h>

int x[20],y[20];
int n, N;
double dp[1<<20];

double len(double dx, double dy)
{
	return sqrt(dx*dx+dy*dy);
}

double sol(int bitset)
{
	double ans=1E20;
	int i,j,I, J;
	if(dp[bitset]>=0)return dp[bitset];
	if(bitset==N-1)return dp[bitset]=0.0;
	for(i=0,I=1;I<N && 0==(I&~bitset);i++,I<<=1);
	for(j=i+1,J=(I<<1);J<N; J<<=1,j++){
		double temp;
		if(0==(J&~bitset))continue;
		temp=len(x[i]-x[j],y[i]-y[j])+sol(bitset|I|J);
		if(temp<ans)ans=temp;
	}
	return dp[bitset]=ans;
}

void solve(int cases)
{
	int i;
	char buf[200];
	n+=n;
	N=(1<<n);
	for(i=0;i<n;i++)
		scanf("%s%d%d",buf,&x[i],&y[i]);
	for(i=N-1;i>=0;i--)
		dp[i]=-1.0;
	printf("Case %d: %.2f\n",cases,sol(0));
}

int main(void)
{
	int count=0;
	for(scanf("%d",&n);n;scanf("%d",&n))
		solve(++count);
	return 0;
}

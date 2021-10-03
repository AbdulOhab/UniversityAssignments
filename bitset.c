#include<stdio.h>

int main()
{
	int x, n, a[20], flag;
	for(scanf("%d%d",&x,&n) ; n!=0 ;scanf("%d%d",&x,&n))
	{
		int i, j, sum;
		flag = 0;
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);
		for(i=0;i<(1<<n);i++)
		{
			for(sum=j=0;j<n;j++)
			{
				if(((1<<j) & i)>0)
					sum+=a[j];
			}
			if(sum==x)
			{
				printf("%05X ",i);
				flag=1;
			}
		}
		puts((flag==1)?"YES":"NO");
	}
	return 0;
}

#include<stdio.h>

int ans[1009];
int main()

{
	int t,n,m;
	scanf("%d",&t);
	int i;
	for(i=0;i<t;i++)
	{
		scanf("%d %d",&n,&m);
		if(m==0 || m==n)
		{
			ans[i]=1;
		}
		else
		{
			ans[i]=m+1+m*(n-m-1);
		}
	}
	for(i=0;i<t;i++)
	{
		printf("%d\n",ans[i]);
	}
	
	return 0;
}

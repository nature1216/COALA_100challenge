#include<stdio.h>

int h[59],a[109];
int main()

{
	int t,n;
	scanf("%d",&t);
	int i,j;
	for(i=0;i<t;i++)
	{
		scanf("%d",&n);
		int ans=0,m=0;
		for(j=0;j<n;j++)
		{
			scanf("%d",&h[j]);			
		}
		for(j=0;j<n;j++)
		{
			if(h[j]>m)
			{
				m=h[j];
			}
			else
			 ans++;
		}
		a[i]=ans;
	}
	for(i=1;i<t+1;i++)
	{
		printf("Case #%d: %d",i,a[i-1]);
		printf("\n");
	}
	
	return 0;
}

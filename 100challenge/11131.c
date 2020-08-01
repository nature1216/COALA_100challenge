#include<stdio.h>

int sum[109],ans[109];
int main()

{
	int t,n;
	scanf("%d",&t);
	int i,j;
	for(i=0;i<t;i++)
	{
		scanf("%d",&n);
		for(j=0;j<n;j++)
		{
			scanf("%d",&sum[j]);
		}
		for(j=0;j<n;j++)
		{
			ans[i]=ans[i]+sum[j];
		}
	}
	for(i=0;i<t;i++)
	{
		if(ans[i]==0)
		{
			printf("Equilibrium");
		}
		else if(ans[i]<0)
		{
			printf("Left");
		}
		else
		{
			printf("Right");
		}
		printf("\n");
	}
	
	
	return 0;
}

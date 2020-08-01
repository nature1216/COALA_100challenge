#include<stdio.h>

int P[109];
int main()
{
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&P[i]);
	}
	int ans=0,score=0;
	for(i=0;i<n;i++)
	{
		if(P[i]==1)
		{
			ans=ans+1;
			score=score+ans;
		}
		else
		{
			ans=0;
		}
	}
	printf("%d",score);
	
	return 0;
}

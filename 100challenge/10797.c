#include<stdio.h>

int car[9];
int main()
{
	int i, n,ans=0;
	scanf("%d",&n);
	for(i=0;i<5;i++)
	{
		scanf("%d",&car[i]);
	}
	for(i=0;i<5;i++)
	{
		if(car[i]==n)
		{

			ans=ans+1;
		}
	}
	printf("%d",ans);
	
	return 0;
}

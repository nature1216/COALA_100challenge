#include<stdio.h>

int main()
{
	int n,f;
	scanf("%d\n%d",&n,&f);
	int a,final;
	a=n%100;
	final=n-a;
	while(final%f!=0)
	{
		final++;
	}
	int ans=0;
	ans=final%100;
	if(ans<10)
	{
		printf("0%d",ans);
	}
	else
	{
		printf("%d",ans);
	}
	
	
	return 0;
}

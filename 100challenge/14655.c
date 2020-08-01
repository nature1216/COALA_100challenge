#include<stdio.h>

int round1[10009],round2[10009];
int main()

{
	int n;
	scanf("%d",&n);
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&round1[i]);
	}
	for(i=0;i<n;i++)
	{
		scanf("%d",&round2[i]);
	}
	for(i=0;i<n;i++)
	{
		round1[i]=abs(round1[i]);
		round2[i]=abs(round2[i]);
	}
	int r1=0,r2=0;
	for(i=0;i<n;i++)
	{
		r1+=round1[i];
		r2+=round2[i];
	}
	printf("%d",r1+r2);
	
	
	return 0;
}

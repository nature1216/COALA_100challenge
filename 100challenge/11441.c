#include<stdio.h>

int num[100009],ans[100009];
int main()
{
	int n;
	scanf("%d\n",&n);
	int i,a;
	for(i=1;i<n+1;i++)
	{
		scanf("%d",&a);
		num[i]=a+num[i-1];
	}
	int l,start,end;
	scanf("%d",&l);
	for(i=0;i<l;i++)
	{
		scanf("%d %d",&start,&end);
		ans[i]=num[end]-num[start-1];
	}
	for(i=0;i<l;i++)
	{
		printf("%d\n",ans[i]);
	}
	
	return 0;
}

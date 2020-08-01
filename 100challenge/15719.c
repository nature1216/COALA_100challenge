#include<stdio.h>

int num[10000009];
int main()

{
	int n,i,a=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		a+=i;
	}
	int b=0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&num[i]);
	}
	for(i=0;i<n;i++)
	{
		b+=num[i];
	}
	printf("%d",b-a);
	
	return 0;
}

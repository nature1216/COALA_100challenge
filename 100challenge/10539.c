#include<stdio.h>

int a[109],b[109];


int main()
{
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
	}
	a[0]=b[0];
	int ex=a[0];
	for(i=1;i<n;i++)
	{
		a[i]=(i+1)*b[i]-ex;
		ex+=a[i];
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	
	
	return 0;
}

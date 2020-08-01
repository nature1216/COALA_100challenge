#include<stdio.h>

int a[4];
int main()

{
	int i;
	for(i=0;i<3;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<2;i++)
	{
		if(a[i]>a[i+1])
		{
			int t=a[i];
			a[i]=a[i+1];
			a[i+1]=t;
		}
	}
	if(a[0]>a[1])
	{
		int t=a[0];
		a[0]=a[1];
		a[1]=t;
	}
	printf("%d",a[1]);
	
	return 0;
}

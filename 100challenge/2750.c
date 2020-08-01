#include<stdio.h>

int a[1009];
int main()

{
	int i,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		int k;
		for(k=0;k<n-i-1;k++)
		{
			if(a[k]>a[k+1])
			{
				int t;
				t=a[k];
				a[k]=a[k+1];
				a[k+1]=t;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}	
	return 0;
}

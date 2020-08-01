#include<stdio.h>

int a[109];
int main()

{
	int i,j=0,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%1d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		j=j+a[i];
	}
	printf("%d",j);
	
	return 0;
 } 

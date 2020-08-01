#include<stdio.h>

int num[10001];
int main()

{
	int n, x, i;
	scanf("%d %d", &n, &x);
	
	for(i=0;i<n;i++)
	{
		scanf("%d", &num[i]);
	}
	for(i=0;i<n;i++)
	{
		if(x>num[i])
		{
			printf("%d ",num[i]);
		}
	}
	
	
	return 0;
 } 

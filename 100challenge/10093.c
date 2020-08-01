#include<stdio.h>

long long n[9];
int main()

{
	long long i;
	for(i=0;i<2;i++)
	{
		scanf("%lld",&n[i]);
	}
	int j;
	for(i=0;i<2;i++)
	{
		for(j=0;j<1;j++)
		{
			if(n[j]>n[j+1])
			{
				long long t;
				t=n[j];
				n[j]=n[j+1];
				n[j+1]=t;
			}
		}
	}
	if(n[0]==n[1])
	{
		printf("0");
		printf("\n");
	}
	else
	{
		printf("%lld\n",n[1]-n[0]-1);
	}
	for(i=n[0]+1;i<n[1];i++)
	{
		printf("%lld ",i);
	}
	
	return 0;
 } 

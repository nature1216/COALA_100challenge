#include<stdio.h>

int val[109];
int r[109];
int main()

{
	int n,e,c;
	scanf("%d",&n);
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d %d %d",&r[i],&e,&c);
		val[i]=e-c;
	}
	for(i=0;i<n;i++)
	{
		if(val[i]>r[i])
		{
			printf("advertise");
		}
		else if(val[i]==r[i])
		{
			printf("does not matter");
		}
		else
		{
			printf("do not advertise");
		}
		printf("\n");
	}
	return 0;
}

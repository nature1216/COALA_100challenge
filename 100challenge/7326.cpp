#include<stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	int i,x,y;
	for(i=0;i<n;i++)
	{
		scanf("%d %d",&x,&y);
		if((x-y)==2 || (x-y)==0)
		{
			int z;
			z=y/2;
			printf("%d\n",x+2*z);
		}
		else
		{
			printf("No Number");
			printf("\n");
		}
	}
	
	
	return 0;
}

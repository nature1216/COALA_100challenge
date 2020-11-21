#include<stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	for(int i=1;i<=2*n;i++)
	{
		if(i%2==0)
		{
			for(int j=0;j<i;j++)
				printf("*");
			printf("\n");
		}
		else
		{
			for(int j=0;j<(i+1)/2;j++)
				printf("*");
			printf("\n");
		}
	}
	
	return 0;
}

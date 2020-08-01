#include<stdio.h>

int u[209][9], score[209];

int main()
{
	int n;
	scanf("%d",&n);
	int i;
	int j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&u[i][j]);
		}
	}
	int total=0,k;
	for(i=0;i<3;i++)
	{
		for(j=0;j<n;j++)
		{
			for(k=0;k<n;k++)
			{
				if(j==k)
				{
					continue;
				}
				else if(u[j][i]==u[k][i])
				{
					total=0;
					break;
				}
				else
				{
					total=+u[j][i];
				}
			}
			score[j]+=total;
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d\n",score[i]);
	}
	
	
	
	return 0;
}

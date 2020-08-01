#include<stdio.h>

int W[19],K[19];
int main()

{
	int i;
	for(i=0;i<10;i++)
	{
		scanf("%d",&W[i]);
	}
	for(i=0;i<10;i++)
	{
		scanf("%d",&K[i]);
	}
	int j;
	for(i=0;i<10;i++)
	{
		for(j=0;j<9;j++)
		{
			if(W[j]<W[j+1])
			{
				int t;
				t=W[j];
				W[j]=W[j+1];
				W[j+1]=t;
			}
		}
	}
	for(i=0;i<10;i++)
	{
		for(j=0;j<9;j++)
		{
			if(K[j]<K[j+1])
			{
				int t;
				t=K[j];
				K[j]=K[j+1];
				K[j+1]=t;
			}
		}
	}
	int score_W=0,score_K=0;
	for(i=0;i<3;i++)
	{
		score_W=score_W+W[i];
	}
	for(i=0;i<3;i++)
	{
		score_K=score_K+K[i];
	}
	printf("%d %d",score_W,score_K);
	
	return 0;
 } 

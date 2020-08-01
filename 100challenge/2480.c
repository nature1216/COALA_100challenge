#include<stdio.h>

int dice[9];
int main()

{
	int i;
	for(i=0;i<3;i++)
	{
		scanf("%d",&dice[i]);
	}
	for(i=0;i<3;i++)
	{
		int k;
		for(k=0;k<2;k++)
		{
			if(dice[k]>dice[k+1])
			{
				int t;
				t=dice[k];
				dice[k]=dice[k+1];
				dice[k+1]=t;
			}
		}	
	}
	if(dice[0]==dice[1] && dice[0]!=dice[2] || dice[1]==dice[2] && dice[1]!=dice[0])
	{
		printf("%d",dice[1]*100+1000);
	}
	else if(dice[2]==dice[0] && dice[2]!=dice[1])
	{
		printf("%d",dice[0]*100+1000);
	}
	else if(dice[0]==dice[1]&& dice[1]==dice[2])
	{
		printf("%d",dice[1]*1000+10000);
	}
	else
	{
		printf("%d",dice[2]*100);
	}
	
	return 0;
}

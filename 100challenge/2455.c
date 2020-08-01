#include<stdio.h>

int U[10009],D[10009],P[9];
int main()
{
	int i;
	for(i=0;i<4;i++)
	{
		scanf("%d %d",&D[i],&U[i]);
	}
	for(i=1;i<5;i++)
	{
		P[i]=P[i-1]-D[i-1]+U[i-1];
	}
	int j;
	for(i=0;i<4;i++)
	{
		for(j=1;j<4;j++)
		{
			if(P[j]>P[j+1])
			{
				int t;
				t=P[j];
				P[j]=P[j+1];
				P[j+1]=t;
			}
		}
	}
	printf("%d",P[4]);
	
	return 0;
}

#include<stdio.h>

int H[9],D[9];
int main()

{
	int i;
	for(i=0;i<3;i++)
	{
		scanf("%d",&H[i]);
	}
	for(i=0;i<2;i++)
	{
		scanf("%d",&D[i]);
	}
	int j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++)
		{
			int t;
			if(H[j]>H[j+1])
			{
				t=H[j];
				H[j]=H[j+1];
				H[j+1]=t;
			}
		}
	}
	if(D[0]>D[1])
	{
		int t;
		t=D[0];
		D[0]=D[1];
		D[1]=t;
	}
	printf("%d",H[0]+D[0]-50);
	
	
	return 0;
}

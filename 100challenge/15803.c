#include<stdio.h>

int x[1009],y[1009];

int main()
{
	int i;
	for(i=0;i<3;i++)
	{
		scanf("%d %d",&x[i],&y[i]);
	}
	if(((float)(y[1]-y[0])/(x[1]-x[0]))==((float)(y[2]-y[1])/(x[2]-x[1]))) //x¶û y¶û ¹Ù²Ù¸é ¸ÂÀ½ 
	{
		printf("WHERE IS MY CHICKEN?");
	}
	else
	{
		printf("WINNER WINNER CHICKEN DINNER!");
	}
	
	return 0;
}

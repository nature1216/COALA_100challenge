#include<stdio.h>

int main()
{
	int v,a,b;
	scanf("%d %d %d",&a,&b,&v);
	
	int day;
	if((v-b)%(a-b)==0)
	{
		day=(v-b)/(a-b);
	}
	else
	{
		day=(v-b)/(a-b)+1;
	}
	
	
	printf("%d",day);
	
	
	
	return 0;
}

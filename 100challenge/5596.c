#include<stdio.h>

int K[9];
int P[9];
int main()

{
	int i,S=0,T=0;
	for(i=0;i<4;i++)
	{
		scanf("%d",&K[i]);
	}
	for(i=0;i<4;i++)
	{
		scanf("%d",&P[i]);
	}
	for(i=0;i<4;i++)
	{
		S=S+K[i];
		T=T+P[i];
	}
	if(T<S)
	{
		printf("%d",S);
	}
	else if(T>S)
	{
		printf("%d",T);
	}
	else
	{
		printf("%d",S);
	}
	
	return 0;
}
